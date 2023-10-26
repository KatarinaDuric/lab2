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
 020328   input  logic        clk,
 000052   input  logic        reset,
        
          // Instruction Memory Port
        
 005202   output logic        imem_reqstream_val,
%000000   input  logic        imem_reqstream_rdy,
 004718   input  logic        imem_respstream_val,
 002816   output logic        imem_respstream_rdy,
 000268   output logic        imem_respstream_drop,
        
          // Data Memory Port
        
 001514   output logic        dmem_reqstream_val,
 000766   input  logic        dmem_reqstream_rdy,
 001520   input  logic        dmem_respstream_val,
 001284   output logic        dmem_respstream_rdy,
        
          // mngr communication port
        
 000660   input  logic        mngr2proc_val,
 000660   output logic        mngr2proc_rdy,
 000062   output logic        proc2mngr_val,
 000054   input  logic        proc2mngr_rdy,
        
          // control signals (ctrl->dpath)
        
 005150   output logic        reg_en_F,
 000012   output logic [1:0]  pc_sel_F,
        
 002300   output logic        reg_en_D,
 000012   output logic        op1_sel_D,
 000540   output logic [1:0]  op2_sel_D,
%000000   output logic [1:0]  csrr_sel_D,
 000008   output logic [2:0]  imm_type_D,
        
 000592   output logic        reg_en_X,
 000986   output logic [3:0]  alu_fn_X,
 000012   output  logic [1:0] ex_result_sel_X,
 000544   output logic [1:0] dmem_reqstream_type_X,
        
        //Imul signals
 000016   output logic       imul_req_val_D,
 000032   output logic       imul_resp_rdy_X,
 000016   input logic        imul_req_rdy_D,
 000016   input logic        imul_resp_val_X,
        
 001162   output logic        reg_en_M,
 000364   output logic        wb_result_sel_M,
        
 000024   output logic        reg_en_W,
 000146   output logic [4:0]  rf_waddr_W,
 003406   output logic        rf_wen_W,
 000002   output logic        stats_en_wen_W,
        
          // status signals (dpath->ctrl)
        
 000008   input  logic [31:0] inst_D,
 002582   input  logic        br_cond_eq_X,
 001006   input logic         br_cond_lt_X,
 001452   input logic         br_cond_ltu_X,
        
          // extra ports
        
 004234   output logic        commit_inst
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
        
 000052   logic val_F;
 002990   logic val_D;
 004055   logic val_X;
 004029   logic val_M;
 004232   logic val_W;
        
          // Managing the stall and squash signals is one of the most important,
          // yet also one of the most complex, aspects of designing a pipelined
          // processor. We will carefully use four signals per stage to manage
          // stalling and squashing: ostall_A, osquash_A, stall_A, and squash_A.
          //
          // We denote the stall signals _originating_ from stage A as
          // ostall_A. For example, if stage A can stall due to a pipeline
          // harzard, then ostall_A would need to factor in the stalling
          // condition for this pipeline harzard.
        
 004666   logic ostall_F;  // can ostall due to imem_respstream_val
 001868   logic ostall_D;  // can ostall due to mngr2proc_val or other hazards
 000180   logic ostall_X;  // can ostall due to dmem_reqstream_rdy
 001152   logic ostall_M;  // can ostall due to dmem_respstream_val
 000024   logic ostall_W;  // can ostall due to proc2mngr_rdy
        
          // The stall_A signal should be used to indicate when stage A is indeed
          // stalling. stall_A will be a function of ostall_A and all the ostall
          // signals of stages in front of it in the pipeline.
        
 005126   logic stall_F;
 002300   logic stall_D;
 000592   logic stall_X;
 001162   logic stall_M;
 000024   logic stall_W;
        
          // We denote the squash signals _originating_ from stage A as
          // osquash_A. For example, if stage A needs to squash the stages behind
          // A in the pipeline, then osquash_A would need to factor in this
          // squash condition.
        
 000008   logic osquash_D; // can osquash due to unconditional jumps
 000260   logic osquash_X; // can osquash due to taken branches
        
          // The squash_A signal should be used to indicate when stage A is being
          // squashed. squash_A will _not_ be a function of osquash_A, since
          // osquash_A means to squash the stages _behind_ A in the pipeline, but
          // not to squash A itself.
        
 000268   logic squash_F;
 000206   logic squash_D;
        
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
        
 010138   always_ff @( posedge clk ) begin
 000676     if ( reset )
 000676       val_F <= 1'b0;
 003187     else if ( reg_en_F )
 003187       val_F <= 1'b1;
          end
        
          // forward declaration for PC sel
 000008   logic       pc_redirect_D;
 000260   logic       pc_redirect_X;
 000008   logic [1:0] pc_sel_D;
 000004   logic [1:0] pc_sel_X;
        
          // PC select logic
        
 010138   always_comb begin
 000132     if ( pc_redirect_X )   // If a branch is taken in X stage
 000132       pc_sel_F = pc_sel_X; // Use pc from X
 000004     else if ( pc_redirect_D ) 
 000004       pc_sel_F = pc_sel_D;
            else
 010002       pc_sel_F = 2'b0;     // Use pc+4
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
          assign imem_respstream_rdy = !(val_F && ( ostall_D || ostall_X || ostall_M || ostall_W )) || squash_F;
        
          // Valid signal for the next stage (stage D)
        
 005178   logic  next_val_F;
          assign next_val_F = val_F && !stall_F && !squash_F;
        
          //----------------------------------------------------------------------
          // D stage
          //----------------------------------------------------------------------
        
          // PC redirect logic (D Stage)
 010138   always_comb begin
 010138     casez(inst_D)
 000004       `TINYRV2_INST_JAL: begin 
 000004           pc_redirect_D = val_D; //always redirect
 000004           pc_sel_D = 2'd2; //use jal target if valid
              end
 010134       default: begin
 010134           pc_redirect_D = 1'b0;
 010134           pc_sel_D = 2'd0; //use pc+4
              end
            endcase
          end
        
        //op1 select logic
 010138 always_comb begin
 010138   casez(inst_D)
 000006     `TINYRV2_INST_AUIPC: op1_sel_D = 1'b1;
 010132     default: op1_sel_D = 1'b0;
          endcase
        end
          // Register enable logic
        
          assign reg_en_D = !stall_D || squash_D;
        
          // Pipline registers
        
 010138   always_ff @( posedge clk ) begin
 000676     if ( reset )
 000676       val_D <= 1'b0;
 003946     else if ( reg_en_D )
 005516       val_D <= next_val_F;
          end
        
          // Parse instruction fields
        
 000146   logic   [4:0] inst_rd_D;
 000008   logic   [4:0] inst_rs1_D;
 000394   logic   [4:0] inst_rs2_D;
 000394   logic   [11:0] inst_csr_D;
        
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
        
 002802   logic       inst_val_D;
 000006   logic [2:0] br_type_D;
 002540   logic       rs1_en_D;
 001460   logic       rs2_en_D;
 001028   logic [3:0] alu_fn_D;
 000590   logic [1:0] dmem_reqstream_type_D;
 000590   logic       wb_result_sel_D;
 002616   logic       rf_wen_D;
 000540   logic       csrr_D;
 000312   logic       csrw_D;
 000306   logic       proc2mngr_val_D;
 000540   logic       mngr2proc_rdy_D;
 000002   logic       stats_en_wen_D;
        
 010138   task cs
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
 010138   begin
 010138     inst_val_D            = cs_inst_val;
 010138     br_type_D             = cs_br_type;
 010138     imm_type_D            = cs_imm_type;
 010138     rs1_en_D              = cs_rs1_en;
 010138     op2_sel_D             = cs_op2_sel;
 010138     rs2_en_D              = cs_rs2_en;
 010138     alu_fn_D              = cs_alu_fn;
 010138     dmem_reqstream_type_D = cs_dmem_reqstream_type;
 010138     wb_result_sel_D       = cs_wb_result_sel;
 010138     rf_wen_D              = cs_rf_wen;
 010138     csrr_D                = cs_csrr;
 010138     csrw_D                = cs_csrw;
          end
          endtask
        
          // Control signals table
        
 010138   always_comb begin
        
 010138     casez ( inst_D )
        
              //                            br      imm   rs1 op2    rs2 alu      dmm wbmux rf
              //                       val  type    type   en muxsel  en fn       typ sel   wen csrr csrw
 000174       `TINYRV2_INST_NOP     :cs( y, br_na,  imm_x, n, bm_x,   n, alu_x,   nr, wm_a, n,  n,   n    );
 001014       `TINYRV2_INST_ADD     :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_add, nr, wm_a, y,  n,   n    );
 000734       `TINYRV2_INST_LW      :cs( y, br_na,  imm_i, y, bm_imm, n, alu_add, ld, wm_m, y,  n,   n    );
 000317       `TINYRV2_INST_BNE     :cs( y, br_bne, imm_b, y, bm_rf,  y, alu_x,   nr, wm_a, n,  n,   n    );
 001983       `TINYRV2_INST_CSRR    :cs( y, br_na,  imm_i, n, bm_csr, n, alu_cp1, nr, wm_a, y,  y,   n    );
 000209       `TINYRV2_INST_CSRW    :cs( y, br_na,  imm_i, y, bm_rf,  n, alu_cp0, nr, wm_a, n,  n,   y    );
        
              // Reg-Reg Arithmetic instructions
 000026       `TINYRV2_INST_SUB   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sub, nr, wm_a, y,  n,   n    );
 000032       `TINYRV2_INST_MUL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_AND   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_and, nr, wm_a, y,  n,   n    );
 000017       `TINYRV2_INST_OR   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_or, nr, wm_a, y,  n,   n    );
 000320       `TINYRV2_INST_XOR   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_xor, nr, wm_a, y,  n,   n    );
 000022       `TINYRV2_INST_SLT   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_slt, nr, wm_a, y,  n,   n    );
 000019       `TINYRV2_INST_SLTU   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sltu, nr, wm_a, y,  n,   n    );
 000012       `TINYRV2_INST_SRA   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sra, nr, wm_a, y,  n,   n    );
 000018       `TINYRV2_INST_SRL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_srl, nr, wm_a, y,  n,   n    );
 000015       `TINYRV2_INST_SLL   :cs( y, br_na,  imm_x, y, bm_rf,  y, alu_sll, nr, wm_a, y,  n,   n    );
          
              //Reg-Imm Arithmetic Instructions
 000812       `TINYRV2_INST_ADDI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
 000011       `TINYRV2_INST_ORI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_or, nr, wm_a, y,  n,   n    );
 000013       `TINYRV2_INST_ANDI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_and, nr, wm_a, y,  n,   n    );
 000066       `TINYRV2_INST_XORI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_xor, nr, wm_a, y,  n,   n    );
 000017       `TINYRV2_INST_SLTI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_slt, nr, wm_a, y,  n,   n    );
 000013       `TINYRV2_INST_SLTIU   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sltu, nr, wm_a, y,  n,   n    );
 000017       `TINYRV2_INST_SRAI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sra, nr, wm_a, y,  n,   n    );
 000008       `TINYRV2_INST_SRLI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_srl, nr, wm_a, y,  n,   n    );
 000014       `TINYRV2_INST_SLLI   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_sll, nr, wm_a, y,  n,   n    );
 000160       `TINYRV2_INST_LUI   :cs( y, br_na,  imm_u, n, bm_imm,  n, alu_cp1, nr, wm_a, y,  n,   n    );
 000006       `TINYRV2_INST_AUIPC   :cs( y, br_na,  imm_u, n, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
        
              //Memory Instructions
 001071       `TINYRV2_INST_SW   :cs( y, br_na,  imm_s, y, bm_imm,  y, alu_add2, st, wm_x, n,  n,   n    );
        
              //Jump Instructions
 000004       `TINYRV2_INST_JAL   :cs( y, br_na,  imm_j, n, bm_x,  n, alu_x, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_JALR   :cs( y, br_na,  imm_i, y, bm_imm,  n, alu_add, nr, wm_a, y,  n,   n    );
        
              //Branch Instructions
 000004       `TINYRV2_INST_BEQ   :cs( y, br_beq,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_BLT   :cs( y, br_blt,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000008       `TINYRV2_INST_BLTU   :cs( y, br_bltu,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_BGE   :cs( y, br_bge,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 000004       `TINYRV2_INST_BGEU   :cs( y, br_bgeu,  imm_b, y, bm_rf,  y, alu_x, nr, wm_a, y,  n,   n    );
 002982       default              :cs( n, br_x,  imm_x, n, bm_x,    n, alu_x,   nr, wm_x, n,  n,   n    );
        
            endcase
          end // always_comb
        
 000146   logic [4:0] rf_waddr_D;
          assign rf_waddr_D = inst_rd_D;
        
          // csrr and csrw logic
        
 010138   always_comb begin
 010138     proc2mngr_val_D  = 1'b0;
 010138     mngr2proc_rdy_D  = 1'b0;
 010138     csrr_sel_D       = 2'h0;
 010138     stats_en_wen_D   = 1'b0;
        
 000206     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_PROC2MNGR )
 000206       proc2mngr_val_D  = 1'b1;
 001983     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_MNGR2PROC )
 001983       mngr2proc_rdy_D  = 1'b1;
 000001     if ( csrw_D && inst_csr_D == `TINYRV2_CPR_STATS_EN )
 000001       stats_en_wen_D   = 1'b1;
 010138     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_NUMCORES )
%000000       csrr_sel_D       = 2'h1;
 010138     if ( csrr_D && inst_csr_D == `TINYRV2_CPR_COREID )
%000000       csrr_sel_D       = 2'h2;
          end
        
          // mngr2proc_rdy signal for csrr instruction
        
          assign mngr2proc_rdy = val_D && !stall_D && !squash_D && mngr2proc_rdy_D;
        
 000382   logic  ostall_mngr2proc_D;
          assign ostall_mngr2proc_D = val_D && mngr2proc_rdy_D && !mngr2proc_val;
          // always_ff @(posedge clk) begin
          //   ostall_mngr2proc_D <= val_D && mngr2proc_rdy_D && !mngr2proc_val;
          // end 
        
          // ostall if write address in X matches rs1 in D
        
 000442   logic  ostall_waddr_X_rs1_D;
          assign ostall_waddr_X_rs1_D
            = rs1_en_D && val_X && rf_wen_X
              && ( inst_rs1_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs1 in D
        
 000790   logic  ostall_waddr_M_rs1_D;
          assign ostall_waddr_M_rs1_D
            = rs1_en_D && val_M && rf_wen_M
              && ( inst_rs1_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs1 in D
        
 001066   logic  ostall_waddr_W_rs1_D;
          assign ostall_waddr_W_rs1_D
            = rs1_en_D && val_W && rf_wen_W
              && ( inst_rs1_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // ostall if write address in X matches rs2 in D
        
 000566   logic  ostall_waddr_X_rs2_D;
          assign ostall_waddr_X_rs2_D
            = rs2_en_D && val_X && rf_wen_X
              && ( inst_rs2_D == rf_waddr_X ) && ( rf_waddr_X != 5'd0 );
        
          // ostall if write address in M matches rs2 in D
        
 000700   logic  ostall_waddr_M_rs2_D;
          assign ostall_waddr_M_rs2_D
            = rs2_en_D && val_M && rf_wen_M
              && ( inst_rs2_D == rf_waddr_M ) && ( rf_waddr_M != 5'd0 );
        
          // ostall if write address in W matches rs2 in D
        
 000700   logic  ostall_waddr_W_rs2_D;
          assign ostall_waddr_W_rs2_D
            = rs2_en_D && val_W && rf_wen_W
              && ( inst_rs2_D == rf_waddr_W ) && ( rf_waddr_W != 5'd0 );
        
          // Put together ostall signal due to hazards
        
 001472   logic  ostall_hazard_D;
          assign ostall_hazard_D =
              ostall_waddr_X_rs1_D || ostall_waddr_M_rs1_D || ostall_waddr_W_rs1_D ||
              ostall_waddr_X_rs2_D || ostall_waddr_M_rs2_D || ostall_waddr_W_rs2_D;
        
          // Final ostall signal
          assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D || !imul_req_rdy_D);
          //assign ostall_D = val_D && ( ostall_mngr2proc_D || ostall_hazard_D );
        
          // osquash due to jump instruction in D stage (not implemented yet)
        
          //assign osquash_D = 1'b0;
        
 010138   always_comb begin
 010138     casez(inst_D)
 000004       `TINYRV2_INST_JAL: osquash_D = 1'b1;
 010134       default: osquash_D = 1'b0;
            endcase
          end
        
          // stall and squash in D
        
          assign stall_D  = val_D && ( ostall_D || ostall_X || ostall_M || ostall_W );
          assign squash_D = val_D && osquash_X;
        
          // Valid signal for the next stage
        
 004234   logic  next_val_D;
          assign next_val_D = val_D && !stall_D && !squash_D;
        
          //Imul control signals (D stage)
          //assign imul_req_val_D = !stall_D && (inst_D == `TINYRV2_INST_MUL);
        
 030518   always_comb begin
 030518     casez(inst_D)
 000096       `TINYRV2_INST_MUL: imul_req_val_D = !stall_D;
 030422       default: imul_req_val_D = 0;
            endcase
          end
          //----------------------------------------------------------------------
          // X stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_X = !stall_X;
        
 000008   logic [31:0] inst_X;
 000544   logic        wb_result_sel_X;
 002302   logic        rf_wen_X;
 000146   logic [4:0]  rf_waddr_X;
 000306   logic        proc2mngr_val_X;
 000002   logic        stats_en_wen_X;
 000006   logic [2:0]  br_type_X;
        
          // Pipeline registers
        
 010138   always_ff @( posedge clk )
 000676     if ( reset ) begin
 000676       val_X                 <= 1'b0;
            end
 000556     else if ( reg_en_X ) begin
 008906       val_X                 <= next_val_D;
 008906       rf_wen_X              <= rf_wen_D;
 008906       inst_X                <= inst_D;
 008906       alu_fn_X              <= alu_fn_D;
 008906       rf_waddr_X            <= rf_waddr_D;
 008906       proc2mngr_val_X       <= proc2mngr_val_D;
 008906       dmem_reqstream_type_X <= dmem_reqstream_type_D;
 008906       wb_result_sel_X       <= wb_result_sel_D;
 008906       stats_en_wen_X        <= stats_en_wen_D;
 008906       br_type_X             <= br_type_D;
            end
        
          // branch logic, redirect PC in F if branch is taken
        
 010138   always_comb begin
 010138     casez(inst_X)
 000004     `TINYRV2_INST_JALR: begin 
 000004           pc_redirect_X = 1'b1; //always redirect
 000004           pc_sel_X = 2'd3; //use jal target if valid
              end
 010134     default: begin
 000125       if ( val_X && ( br_type_X == br_bne ) ) begin
 000125         pc_redirect_X = !br_cond_eq_X;
 000125         pc_sel_X      = 2'b1; // use branch target
              end
 000001       else if (val_X && ( br_type_X == br_beq )) begin
 000001         pc_redirect_X = br_cond_eq_X;
 000001         pc_sel_X      = 2'b1; // use branch target
              end
 000001       else if (val_X && ( br_type_X == br_blt )) begin
 000001         pc_redirect_X = br_cond_lt_X;
 000001         pc_sel_X      = 2'b1; // use branch target
              end
 000002       else if (val_X && ( br_type_X == br_bltu )) begin
 000002         pc_redirect_X = br_cond_ltu_X;
 000002         pc_sel_X      = 2'b1; // use branch target
              end
 000001       else if (val_X && ( br_type_X == br_bge )) begin
 000001         pc_redirect_X = !br_cond_lt_X;
 000001         pc_sel_X      = 2'b1; // use branch target
              end
 000001       else if (val_X && ( br_type_X == br_bgeu )) begin
 000001         pc_redirect_X = !br_cond_ltu_X;
 000001         pc_sel_X      = 2'b1; // use branch target
              end
 010003       else begin
 010003         pc_redirect_X = 1'b0;
 010003         pc_sel_X      = 2'b0; // use pc+4
              end
            end
            endcase
          end
        
          // ostall due to dmem_reqstream not ready.
 010138   always_comb begin
 010138     casez(inst_X)
 000158       `TINYRV2_INST_MUL: ostall_X =  val_X && !imul_resp_val_X;
 009980        default: ostall_X = val_X && ( dmem_reqstream_type_X != nr ) && !dmem_reqstream_rdy;
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
        
 004629   logic  next_val_X;
          assign next_val_X = val_X && !stall_X;
        
          //Imul control signals (X Stage)
          //assign imul_resp_rdy_X = !stall_X && (inst_X == `TINYRV2_INST_MUL);
        
 010138   always_comb begin
 010138     casez(inst_X)
 000158       `TINYRV2_INST_MUL: imul_resp_rdy_X = !stall_X;
 009980        default: imul_resp_rdy_X = 0;
            endcase
          end
          //Execute result select logic
 010138   always_comb begin
 010138     casez(inst_X)
 000158       `TINYRV2_INST_MUL: ex_result_sel_X = 2'd0;
 000004       `TINYRV2_INST_JAL: ex_result_sel_X = 2'd1;
 000004       `TINYRV2_INST_JALR: ex_result_sel_X = 2'd1;
 009972        default: ex_result_sel_X = 2'd2;
            endcase
          end
          //----------------------------------------------------------------------
          // M stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_M  = !stall_M;
        
 000008   logic [31:0] inst_M;
 000364   logic [1:0]  dmem_reqstream_type_M;
 002056   logic        rf_wen_M;
 000146   logic [4:0]  rf_waddr_M;
 000304   logic        proc2mngr_val_M;
 000002   logic        stats_en_wen_M;
        
          // Pipeline register
        
 010138   always_ff @( posedge clk )
 000676     if ( reset ) begin
 000676       val_M                 <= 1'b0;
            end
 000813     else if ( reg_en_M ) begin
 008649       val_M                 <= next_val_X;
 008649       rf_wen_M              <= rf_wen_X;
 008649       inst_M                <= inst_X;
 008649       rf_waddr_M            <= rf_waddr_X;
 008649       proc2mngr_val_M       <= proc2mngr_val_X;
 008649       dmem_reqstream_type_M <= dmem_reqstream_type_X;
 008649       wb_result_sel_M       <= wb_result_sel_X;
 008649       stats_en_wen_M        <= stats_en_wen_X;
            end
        
          // ostall due to dmem_respstream not valid
        
          assign ostall_M = val_M && ( dmem_reqstream_type_M != nr ) && !dmem_respstream_val;
        
        
          // stall M
        
          assign stall_M = val_M && ( ostall_M || ostall_W );
        
          // Set dmem_respstream_rdy if valid and not stalling and this is a lw/sw
         
          assign dmem_respstream_rdy = val_M && !ostall_W  && ( dmem_reqstream_type_M != nr );
        
          // always_ff @(posedge clk) begin
          //   dmem_respstream_rdy <= val_M && !stall_M && ( dmem_reqstream_type_M != nr );
          // end
        
          // Valid signal for the next stage
        
 004281   logic  next_val_M;
          assign next_val_M = val_M && !stall_M;
        
          //----------------------------------------------------------------------
          // W stage
          //----------------------------------------------------------------------
        
          // Register enable logic
        
          assign reg_en_W = !stall_W;
        
 000008   logic [31:0] inst_W;
 000304   logic        proc2mngr_val_W;
 002056   logic        rf_wen_pending_W;
 000002   logic        stats_en_wen_pending_W;
        
          // Pipeline registers
        
 010138   always_ff @( posedge clk ) begin
 000676     if ( reset ) begin
 000676       val_W                  <= 1'b0;
            end
 000040     else if ( reg_en_W ) begin
 009422       val_W                  <= next_val_M;
 009422       rf_wen_pending_W       <= rf_wen_M;
 009422       inst_W                 <= inst_M;
 009422       rf_waddr_W             <= rf_waddr_M;
 009422       proc2mngr_val_W        <= proc2mngr_val_M;
 009422       stats_en_wen_pending_W <= stats_en_wen_M;
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
        
