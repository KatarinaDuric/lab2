//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Simple Pipelined Processor Control
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_BASE_CTRL_V
        `define LAB2_PROC_PROC_BASE_CTRL_V
        
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        module lab2_proc_ProcBaseCtrl
        (
 031033   input  logic        clk,
 000019   input  logic        reset,
        
          // Instruction Memory Port
        
 003360   output logic        imem_reqstream_val,
%000000   input  logic        imem_reqstream_rdy,
 002995   input  logic        imem_respstream_val,
 003341   output logic        imem_respstream_rdy,
 000258   output logic        imem_respstream_drop,
        
          // Data Memory Port
        
 001152   output logic        dmem_reqstream_val,
 000602   input  logic        dmem_reqstream_rdy,
 001142   input  logic        dmem_respstream_val,
 001142   output logic        dmem_respstream_rdy,
        
          // mngr communication port
        
 000095   input  logic        mngr2proc_val,
 000094   output logic        mngr2proc_rdy,
 000034   output logic        proc2mngr_val,
 000034   input  logic        proc2mngr_rdy,
        
          // control signals (ctrl->dpath)
        
 003341   output logic        reg_en_F,
 000006   output logic [1:0]  pc_sel_F,
        
 001085   output logic        reg_en_D,
 000002   output logic        op1_sel_D,
 000068   output logic [1:0]  op2_sel_D,
%000000   output logic [1:0]  csrr_sel_D,
 000002   output logic [2:0]  imm_type_D,
        
 000418   output logic        reg_en_X,
 000348   output logic [3:0]  alu_fn_X,
 000006   output  logic [1:0] ex_result_sel_X,
 000338   output logic [1:0] dmem_reqstream_type_X,
        
        //Imul signals
 000002   output logic       imul_req_val_D,
 000003   output logic       imul_resp_rdy_X,
 000002   input logic        imul_req_rdy_D,
 000002   input logic        imul_resp_val_X,
        
 000942   output logic        reg_en_M,
 000362   output logic        wb_result_sel_M,
        
%000000   output logic        reg_en_W,
 000050   output logic [4:0]  rf_waddr_W,
 002034   output logic        rf_wen_W,
%000000   output logic        stats_en_wen_W,
        
          // status signals (dpath->ctrl)
        
 000002   input  logic [31:0] inst_D,
 001619   input  logic        br_cond_eq_X,
 000080   input logic         br_cond_lt_X,
 000332   input logic         br_cond_ltu_X,
        
          // extra ports
        
 002831   output logic        commit_inst
        );
        
          //----------------------------------------------------------------------
          // Notes
          //----------------------------------------------------------------------
          // We follow this principle to organize code for each pipeline stage in
          // the control unit.  Register enable logics should always at the
          // beginning. It followed by pipeline registers. Then logic that is not
          // dependent on stall or squash signals. Then logic that is dependent
          // on stall or squash signals. At the end there should be signals meant
          // to be passed to the next stage in the pipeline.
        
          //----------------------------------------------------------------------
          // Valid, stall, and squash signals
          //----------------------------------------------------------------------
          // We use valid signal to indicate if the instruction is valid.  An
          // instruction can become invalid because of being squashed or
          // stalled. Notice that invalid instructions are microarchitectural
          // events, they are different from archtectural no-ops. We must be
          // careful about control signals that might change the state of the
          // processor. We should always AND outgoing control signals with valid
          // signal.
        
 000019   logic val_F;
 002266   logic val_D;
 002641   logic val_X;
 002626   logic val_M;
 002831   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 003014   logic ostall_F;  // can ostall due to imem_respstream_val
 000680   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000149   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 000942   logic ostall_M;  // can ostall due to dmem_respstream_val
%000000   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 003301   logic stall_F;
 001085   logic stall_D;
 000418   logic stall_X;
 000942   logic stall_M;
%000000   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
 000002   logic osquash_D; // can osquash due to unconditional jumps
 000256   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 000258   logic squash_F;
 000196   logic squash_D;
        
          //Imul ports
          //assign ex_result_sel_X = 2'd0;
          //assign imul_req_val_D = 1'b0;
          //assign imul_resp_rdy_X = 1'b0;
        
        
          //----------------------------------------------------------------------
          // F stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_F = !stall_F || squash_F;
        
          // Pipeline registers
        
 015507   always_ff @( posedge clk ) begin
 000247     if ( reset )
 000247       val_F <= 1'b0;
 002153     else if ( reg_en_F )
 002153       val_F <= 1'b1;
          end
        
          // forward declaration for PC sel
 000002   logic       pc_redirect_D;
 000256   logic       pc_redirect_X;
 000002   logic [1:0] pc_sel_D;
 000004   logic [1:0] pc_sel_X;
        
          // PC select logic
        
%000000   always_comb begin
 000129     if ( pc_redirect_X )   // If a branch is taken in X stage
 000129       pc_sel_F = pc_sel_X; // Use pc from X
 000001     else if ( pc_redirect_D ) 
 000001       pc_sel_F = pc_sel_D;
            else
 015377       pc_sel_F = 2'b0;     // Use pc+4
          end
        
          // ostall due to the imem response not valid.
        
          assign ostall_F = val_F && !imem_respstream_val;
        
          // stall and squash in F
        
          assign stall_F  = val_F && ( ostall_F  || ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_F = val_F && ( osquash_D || osquash_X );
        
          // We drop the mem response when we are getting squashed
        
          assign imem_respstream_drop = squash_F;
        
          // imem is very special. Actually imem requests are sent before the F
          // stage. Note that we need to factor in reset to the imem_reqstream_val
          // signal because we don't want to send out imem request when we are
          // resetting.
        
          assign imem_reqstream_val  = ( !stall_F || squash_F ) && !reset;
          assign imem_respstream_rdy = !stall_F || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 003282   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // PC redirect logic (D Stage)
%000000   always_comb begin
%000000     casez(inst_D)
 000001       `TINYRV2_INST_JAL: begin 
 000001           pc_redirect_D = 1'b1; //always redirect
 000001           pc_sel_D = 2'd2; //use jal target if valid
              end
 015506       default: begin
 015506           pc_redirect_D = 1'b0;
 015506           pc_sel_D = 2'd0; //use pc+4
              end
            endcase
          end
        
        //op1 select logic
%000000 always_comb begin
%000000   casez(inst_D)
 000001     `TINYRV2_INST_AUIPC: op1_sel_D = 1'b1;
 015506     default: op1_sel_D = 1'b0;
          endcase
        end
          // Register enable logic
        
          assign reg_en_D = !stall_D || squash_D;
        
          // Pipline registers
        
 015507   always_ff @( posedge clk ) begin
 000247     if ( reset )
 000247       val_D <= 1'b0;
 003914     else if ( reg_en_D )
 003914       val_D <= next_val_F;
          end
        
          // Parse instruction fields
        
 000050   logic   [4:0] inst_rd_D;
%000000   logic   [4:0] inst_rs1_D;
 000356   logic   [4:0] inst_rs2_D;
 000356   logic   [11:0] inst_csr_D;
        
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .inst     (inst_D),
            .opcode   (),
            .rd       (inst_rd_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .funct3   (),
            .funct7   (),
            .csr      (inst_csr_D)
          );
        
          // Generic Parameters -- yes or no
        
          localparam n = 1'd0;
          localparam y = 1'd1;
        
          // Register specifiers
        
          localparam rx = 5'bx;   // don't care
          localparam r0 = 5'd0;   // zero
          localparam rL = 5'd31;  // for jal
        
          // Branch type
        
          localparam br_x     = 3'bx; // Don't care
          localparam br_na    = 3'b0; // No branch
          localparam br_bne   = 3'b1; // bne
          localparam br_beq    = 3'd2; // beq
          localparam br_blt    = 3'd3; //blt
          localparam br_bltu   = 3'd4; //bltu
          localparam br_bge    = 3'd5; //bge
          localparam br_bgeu   = 3'd6; //bgeu
        
          // Operand 1 Mux Select
        
          localparam bm_x     = 2'bx; // Don't care
          localparam bm_rf    = 2'd0; // Use data from register file
          localparam bm_imm   = 2'd1; // Use sign-extended immediate
          localparam bm_csr   = 2'd2; // Use from mngr data
        
          // ALU Function
        
          localparam alu_x    = 4'bx;
          localparam alu_add  = 4'd0;
          localparam alu_sub  = 4'd1;
          localparam alu_xor  = 4'd2;
          localparam alu_and  = 4'd3;
          localparam alu_or   = 4'd4;
          localparam alu_srl  = 4'd5;
          localparam alu_sll  = 4'd6;
          localparam alu_add2 = 4'd7;
          localparam alu_slt  = 4'd8;
          localparam alu_sltu = 4'd9;
          localparam alu_sra  = 4'd10;
          localparam alu_cp0  = 4'd11;
          localparam alu_cp1  = 4'd12;
        
          // Immediate Type
          localparam imm_x    = 3'bx;
          localparam imm_i    = 3'd0;
          localparam imm_s    = 3'd1;
          localparam imm_b    = 3'd2;
          localparam imm_u    = 3'd3;
          localparam imm_j    = 3'd4;
        
          // Memory Request Type
        
          localparam nr       = 2'd0; // No request
          localparam ld       = 2'd1; // Load
          localparam st       = 2'd2; // Store
        
          // Writeback Mux Select
        
          localparam wm_x     = 1'bx; // Don't care
          localparam wm_a     = 1'b0; // Use ALU output
          localparam wm_m     = 1'b1; // Use data memory response
        
          // Instruction Decode
        
 002285   logic       inst_val_D;
%000000   logic [2:0] br_type_D;
 001831   logic       rs1_en_D;
 000771   logic       rs2_en_D;
 000348   logic [3:0] alu_fn_D;
 000352   logic [1:0] dmem_reqstream_type_D;
 000592   logic       wb_result_sel_D;
 001733   logic       rf_wen_D;
 000068   logic       csrr_D;
 000280   logic       csrw_D;
 000280   logic       proc2mngr_val_D;
 000068   logic       mngr2proc_rdy_D;
%000000   logic       stats_en_wen_D;
        
 015507   task cs
          (
            input logic       cs_inst_val,
            input logic [2:0] cs_br_type,
            input logic [2:0] cs_imm_type,
            input logic       cs_rs1_en,
            input logic [1:0] cs_op2_sel,
            input logic       cs_rs2_en,
            input logic [3:0] cs_alu_fn,
            input logic [1:0] cs_dmem_reqstream_type,
            input logic       cs_wb_result_sel,
            input logic       cs_rf_wen,
            input logic       cs_csrr,
            input logic       cs_csrw
          );
 015507   begin
 015507     inst_val_D            = cs_inst_val;
 015507     br_type_D             = cs_br_type;
 015507     imm_type_D            = cs_imm_type;
 015507     rs1_en_D              = cs_rs1_en;
 015507     op2_sel_D             = cs_op2_sel;
 015507     rs2_en_D              = cs_rs2_en;
 015507     alu_fn_D              = cs_alu_fn;
 015507     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 015507     wb_result_sel_D       = cs_wb_result_sel;
 015507     rf_wen_D              = cs_rf_wen;
 015507     csrr_D                = cs_csrr;
 015507     csrw_D                = cs_csrw;
          end
          endtask
        
          // Control signals table
        
%000000   always_comb begin
        
%000000     casez ( inst_D )
        
              //                            br      imm   rs1 op2    rs2 alu      dmm wbmux rf
              //                       val  type    type   en muxsel  en fn       typ sel   wen csrr csrw
 000380       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x, n, bm_x,   n, alu_x,   nr, wm_a, n,  n,   n    );
 000616       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_add, nr, wm_a, y,  n,   n    );
 000635       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i, y, bm_imm, n, alu_add, ld, wm_m, y,  n,   n    );
 000322       `TINYRV2_INST_BNE     :cs( y, br_bne, imm_b, y, bm_rf,  y, alu_x,   nr, wm_a, n,  n,   n    );
 000280       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i, n, bm_csr, n, alu_cp1, nr, wm_a, y,  y,   n    );
 000143       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i, y, bm_rf,  n, alu_cp0, nr, wm_a, n,  n,   y    );
        
              // Reg-Reg Arithmetic instructions
%000000       `TINYRV2_INST_SUB   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sub, nr, wm_a, y,  n,   n    );
 009975       `TINYRV2_INST_MUL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_AND   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_and, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_OR   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_or, nr, wm_a, y,  n,   n    );
 000012       `TINYRV2_INST_XOR   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_xor, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLT   :cs( y, br_na,  imm_x, y, bm_rf,  n, alu_slt, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTU   :cs( y, br_na,  imm_x, y, bm_rf,  n, alu_sltu, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRA   :cs( y, br_na,  imm_x, y, bm_rf,  n, alu_sra, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_srl, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sll, nr, wm_a, y,  n,   n    );
          
              //Reg-Imm Arithmetic Instructions
 000640       `TINYRV2_INST_ADDI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_ORI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_or, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_ANDI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_and, nr, wm_a, y,  n,   n    );
 000008       `TINYRV2_INST_XORI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_xor, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_slt, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SLTIU   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sltu, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRAI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sra, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_SRLI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_srl, nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_SLLI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sll, nr, wm_a, y,  n,   n    );
 000003       `TINYRV2_INST_LUI   :cs( y, br_na,  imm_u, n, bm_imm,  n, alu_cp1, nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_AUIPC   :cs( y, br_na,  imm_u, n, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
        
              //Memory Instructions
 000568       `TINYRV2_INST_SW   :cs( y, br_na,  imm_s, y, bm_imm,  y, alu_add2, st, wm_x, n,  n,   n    );
        
              //Jump Instructions
 000001       `TINYRV2_INST_JAL   :cs( y, br_na,  imm_j, n, bm_x,  n, alu_x, nr, wm_a, y,  n,   n    );
 000003       `TINYRV2_INST_JALR   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
        
              //Branch Instructions
 000002       `TINYRV2_INST_BEQ   :cs( y, br_beq,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000001       `TINYRV2_INST_BLT   :cs( y, br_blt,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_BLTU   :cs( y, br_bltu,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_BGE   :cs( y, br_bge,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
%000000       `TINYRV2_INST_BGEU   :cs( y, br_bgeu,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 001916       default              :cs( n, br_x,  imm_x, n, bm_x,    n, alu_x,   nr, wm_x, n,  n,   n    );
        
            endcase
          end // always_comb
        
 000050   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
          // csrr and csrw logic
        
%000000   always_comb begin
%000000     proc2mngr_val_D  = 1'b0;
%000000     mngr2proc_rdy_D  = 1'b0;
%000000     csrr_sel_D       = 2'h0;
%000000     stats_en_wen_D   = 1'b0;
        
 000143     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000143       proc2mngr_val_D  = 1'b1;
 000280     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 000280       mngr2proc_rdy_D  = 1'b1;
 015507     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
%000000       stats_en_wen_D   = 1'b1;
 015507     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 015507     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
        
          // mngr2proc_rdy signal for csrr instruction
        
          assign mngr2proc_rdy = val_D && !stall_D && mngr2proc_rdy_D;
        
 000058   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
        
          // ostall if write address in X matches rs1 in D
        
 000058   logic  ostall_waddr_X_rs1_D;
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs1 in D
        
 000188   logic  ostall_waddr_M_rs1_D;
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs1 in D
        
 000354   logic  ostall_waddr_W_rs1_D;
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // ostall if write address in X matches rs2 in D
        
 000324   logic  ostall_waddr_X_rs2_D;
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs2 in D
        
 000398   logic  ostall_waddr_M_rs2_D;
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs2 in D
        
 000406   logic  ostall_waddr_W_rs2_D;
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // Put together ostall signal due to hazards
        
 000622   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D;
        
          // Final ostall signal
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D || !imul_req_rdy_D);
          //assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D );
        
          // osquash due to jump instruction in D stage (not implemented yet)
        
          //assign osquash_D = 1'b0;
        
%000000   always_comb begin
%000000     casez(inst_D)
 000001       `TINYRV2_INST_JAL: osquash_D = 1'b1;
 015506       default: osquash_D = 1'b0;
            endcase
          end
        
          // stall and squash in D
        
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_D = val_D && osquash_X;
        
          // Valid signal for the next stage
        
 002759   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //Imul control signals (D stage)
          //assign imul_req_val_D = !stall_D && (inst_D == `TINYRV2_INST_MUL);
        
%000000   always_comb begin
%000000     casez(inst_D)
 009975       `TINYRV2_INST_MUL: imul_req_val_D = !stall_D;
 005532       default: imul_req_val_D = 0;
            endcase
          end
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_X = !stall_X;
        
 000002   logic [31:0] inst_X;
 000540   logic        wb_result_sel_X;
 001533   logic        rf_wen_X;
 000050   logic [4:0]  rf_waddr_X;
 000280   logic        proc2mngr_val_X;
%000000   logic        stats_en_wen_X;
%000000   logic [2:0]  br_type_X;
        
          // Pipeline registers
        
 015507   always_ff @( posedge clk )
 000247     if ( reset ) begin
 000247       val_X                 <= 1'b0;
            end
 000292     else if ( reg_en_X ) begin
 014968       val_X                 <= next_val_D;
 014968       rf_wen_X              <= rf_wen_D;
 014968       inst_X                <= inst_D;
 014968       alu_fn_X              <= alu_fn_D;
 014968       rf_waddr_X            <= rf_waddr_D;
 014968       proc2mngr_val_X       <= proc2mngr_val_D;
 014968       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 014968       wb_result_sel_X       <= wb_result_sel_D;
 014968       stats_en_wen_X        <= stats_en_wen_D;
 014968       br_type_X             <= br_type_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
%000000   always_comb begin
%000000     casez(inst_X)
 000003     `TINYRV2_INST_JALR: begin 
 000003           pc_redirect_X = 1'b1; //always redirect
 000003           pc_sel_X = 2'd3; //use jal target if valid
              end
 015504     default: begin
 000125       if ( val_X && ( br_type_X == br_bne ) ) begin
 000125         pc_redirect_X = !br_cond_eq_X;
 000125         pc_sel_X      = 2'b1; // use branch target
              end
 000002       else if (val_X && ( br_type_X == br_beq )) begin
 000002         pc_redirect_X = br_cond_eq_X;
 000002         pc_sel_X      = 2'b1; // use branch target
              end
 000001       else if (val_X && ( br_type_X == br_blt )) begin
 000001         pc_redirect_X = br_cond_lt_X;
 000001         pc_sel_X      = 2'b1; // use branch target
              end
%000000       else if (val_X && ( br_type_X == br_bltu )) begin
%000000         pc_redirect_X = br_cond_ltu_X;
%000000         pc_sel_X      = 2'b1; // use branch target
              end
%000000       else if (val_X && ( br_type_X == br_bge )) begin
%000000         pc_redirect_X = !br_cond_lt_X;
%000000         pc_sel_X      = 2'b1; // use branch target
              end
 015376       else if (val_X && ( br_type_X == br_bgeu )) begin
%000000         pc_redirect_X = !br_cond_ltu_X;
%000000         pc_sel_X      = 2'b1; // use branch target
              end
 015376       else begin
 015376         pc_redirect_X = 1'b0;
 015376         pc_sel_X      = 2'b0; // use pc+4
              end
            end
            endcase
          end
        
          // ostall due to dmem_reqstream not ready.
%000000   always_comb begin
%000000     casez(inst_X)
 009980       `TINYRV2_INST_MUL: ostall_X =  !imul_resp_val_X;
 005527        default: ostall_X = val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;
            endcase
          end
          //assign ostall_X = val_X && ( dmem_reqstream_type_X != nr ||
              //(!imul_resp_val_X && (inst_X == `TINYRV2_INST_MUL))) && !dmem_reqstream_rdy;
          //assign ostall_X = val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;
        
          // osquash due to taken branch, notice we can't osquash if current
          // stage stalls, otherwise we will send osquash twice.
        
          assign osquash_X = val_X && !stall_X && pc_redirect_X;
        
          // stall and squash used in X stage
        
          assign stall_X = val_X && ( ostall_X || ostall_M || ostall_W );
        
          // set dmem_reqstream_val only if not stalling
        
          assign dmem_reqstream_val = val_X && !stall_X && ( dmem_reqstream_type_X != nr );
        
          // Valid signal for the next stage
        
 003057   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
          //Imul control signals (X Stage)
          //assign imul_resp_rdy_X = !stall_X && (inst_X == `TINYRV2_INST_MUL);
        
%000000   always_comb begin
%000000     casez(inst_X)
 009980       `TINYRV2_INST_MUL: imul_resp_rdy_X = !stall_X;
 005527        default: imul_resp_rdy_X = 0;
            endcase
          end
          //Execute result select logic
%000000   always_comb begin
%000000     casez(inst_X)
 009980       `TINYRV2_INST_MUL: ex_result_sel_X = 2'd0;
 000001       `TINYRV2_INST_JAL: ex_result_sel_X = 2'd1;
 000003       `TINYRV2_INST_JALR: ex_result_sel_X = 2'd1;
 005523        default: ex_result_sel_X = 2'd2;
            endcase
          end
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_M  = !stall_M;
        
 000002   logic [31:0] inst_M;
 000284   logic [1:0]  dmem_reqstream_type_M;
 001297   logic        rf_wen_M;
 000050   logic [4:0]  rf_waddr_M;
 000280   logic        proc2mngr_val_M;
%000000   logic        stats_en_wen_M;
        
          // Pipeline register
        
 015507   always_ff @( posedge clk )
 000247     if ( reset ) begin
 000247       val_M                 <= 1'b0;
            end
 000633     else if ( reg_en_M ) begin
 014627       val_M                 <= next_val_X;
 014627       rf_wen_M              <= rf_wen_X;
 014627       inst_M                <= inst_X;
 014627       rf_waddr_M            <= rf_waddr_X;
 014627       proc2mngr_val_M       <= proc2mngr_val_X;
 014627       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 014627       wb_result_sel_M       <= wb_result_sel_X;
 014627       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
          // stall M
        
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
        
          assign dmem_respstream_rdy = val_M && !stall_M && ( dmem_reqstream_type_M != nr );
        
          // Valid signal for the next stage
        
 002846   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_W = !stall_W;
        
 000002   logic [31:0] inst_W;
 000280   logic        proc2mngr_val_W;
 001297   logic        rf_wen_pending_W;
%000000   logic        stats_en_wen_pending_W;
        
          // Pipeline registers
        
 015507   always_ff @( posedge clk ) begin
 000247     if ( reset ) begin
 000247       val_W                  <= 1'b0;
            end
%000000     else if ( reg_en_W ) begin
 015260       val_W                  <= next_val_M;
 015260       rf_wen_pending_W       <= rf_wen_M;
 015260       inst_W                 <= inst_M;
 015260       rf_waddr_W             <= rf_waddr_M;
 015260       proc2mngr_val_W        <= proc2mngr_val_M;
 015260       stats_en_wen_pending_W <= stats_en_wen_M;
            end
          end
        
          // write enable
        
          assign rf_wen_W       = val_W && rf_wen_pending_W;
          assign stats_en_wen_W = val_W && stats_en_wen_pending_W;
        
          // ostall due to proc2mngr
        
          assign ostall_W = val_W && proc2mngr_val_W && !proc2mngr_rdy;
        
          // stall and squash signal used in W stage
        
          assign stall_W = val_W && ostall_W;
        
          // proc2mngr port
        
          assign proc2mngr_val = val_W && !stall_W && proc2mngr_val_W;
        
          assign commit_inst = val_W && !stall_W;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_CTRL_V */
        
