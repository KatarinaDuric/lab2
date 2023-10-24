//      // verilator_coverage annotation
        //=========================================================================
        // 5-Stage Simple Pipelined Processor Datapath
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_ALT_DPATH_V
        `define LAB2_PROC_PROC_ALT_DPATH_V
        
        `include "vc/arithmetic.v"
        `include "vc/mem-msgs.v"
        `include "vc/muxes.v"
        `include "vc/regs.v"
        `include "vc/regfiles.v"
        
        `include "tinyrv2_encoding.v"
        `include "ProcDpathImmGen.v"
        `include "ProcDpathAlu.v"
        `include "lab1_imul/IntMulAlt.v"
        
        module lab2_proc_ProcAltDpath
        #(
          parameter p_num_cores = 1
        )
        (
 049615   input  logic         clk,
 000019   input  logic         reset,
        
          // Instruction Memory Port
        
%000000   output logic [31:0]  imem_reqstream_msg_addr,
%000000   input  mem_resp_4B_t imem_respstream_msg,
        
          // Data Memory Port
        
 000008   output logic [31:0]  dmem_reqstream_msg_addr,
 000002   output logic [31:0]  dmem_reqstream_msg_data,
 000170   input  logic [31:0]  dmem_respstream_msg_data,
        
          // mngr communication ports
        
 000002   input  logic [31:0]  mngr2proc_data,
 000008   output logic [31:0]  proc2mngr_data,
        
          // control signals (ctrl->dpath)
        
 000258   input  logic         imem_respstream_drop,
        
 003199   input  logic         reg_en_F,
 000006   input  logic [1:0]   pc_sel_F,
        
 000691   input  logic         reg_en_D,
 000002   input  logic         op1_sel_D,
 000066   input  logic [1:0]   op2_sel_D,
%000000   input  logic [1:0]   csrr_sel_D,
 000002   input  logic [2:0]   imm_type_D,
 000254   input  logic [1:0]   op1_byp_sel_D,
 000189   input  logic [1:0]   op2_byp_sel_D,
        
 000300   input  logic         reg_en_X,
 000346   input  logic [3:0]   alu_fn_X,
 000006   input  logic [1:0]   ex_result_sel_X,
        
          //Imul control signals
 000004   input  logic         imul_req_val_D,
%000000   input  logic         imul_resp_rdy_X,
 000002   output  logic        imul_req_rdy_D,
 000002   output  logic        imul_resp_val_X,
        
 000936   input  logic         reg_en_M,
 000368   input  logic         wb_result_sel_M,
        
%000000   input  logic         reg_en_W,
 000050   input  logic [4:0]   rf_waddr_W,
 001996   input  logic         rf_wen_W,
%000000   input  logic         stats_en_wen_W,
        
          // status signals (dpath->ctrl)
        
 000002   output logic [31:0]  inst_D,
 001838   output logic         br_cond_eq_X,
 000082   output logic         br_cond_lt_X,
 000334   output logic         br_cond_ltu_X,
        
          // extra ports
        
%000000   input  logic [31:0]  core_id,
%000000   output logic         stats_en
        );
        
          //Imul ports
          //assign imul_req_rdy_D = 1'b0;
          //assign imul_resp_val_X = 1'b0;
        
          localparam c_reset_vector = 32'h200;
          localparam c_reset_inst   = 32'h00000000;
        
          // Fetch address
        
          assign imem_reqstream_msg_addr = pc_next_F;
        
          //--------------------------------------------------------------------
          // F stage
          //--------------------------------------------------------------------
        
 000019   logic [31:0] pc_F;
%000000   logic [31:0] pc_next_F;
%000000   logic [31:0] pc_plus4_F;
 000277   logic [31:0] br_target_X;
 000277   logic [31:0] jal_target_D;
 000008   logic [31:0] jalr_target_X;
        
          assign jalr_target_X = alu_result_X;
        
          vc_EnResetReg#(32, c_reset_vector - 32'd4) pc_reg_F
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_F),
            .d      (pc_next_F),
            .q      (pc_F)
          );
        
          vc_Incrementer#(32, 4) pc_incr_F
          (
            .in   (pc_F),
            .out  (pc_plus4_F)
          );
        
          vc_Mux4#(32) pc_sel_mux_F
          (
            .in0  (pc_plus4_F),
            .in1  (br_target_X),
            .in2  (jal_target_D),
            .in3  (jalr_target_X),
            .sel  (pc_sel_F),
            .out  (pc_next_F)
          );
        
          //--------------------------------------------------------------------
          // D stage
          //--------------------------------------------------------------------
        
 000019   logic [31:0] pc_D;
 000050   logic [ 4:0] inst_rd_D;
%000000   logic [ 4:0] inst_rs1_D;
 000356   logic [ 4:0] inst_rs2_D;
 000396   logic [31:0] imm_D;
 000008   logic [31:0] bypass_from_X;
 000008   logic [31:0] bypass_from_M;
 000008   logic [31:0] bypass_from_W;
        
          assign bypass_from_X = ex_result_X;
          assign bypass_from_M = wb_result_M;
          assign bypass_from_W = wb_result_W;
        
          vc_EnResetReg#(32) pc_reg_D
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_D),
            .d      (pc_F),
            .q      (pc_D)
          );
        
          vc_EnResetReg#(32, c_reset_inst) inst_D_reg
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_D),
            .d      (imem_respstream_msg.data),
            .q      (inst_D)
          );
        
          lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .opcode   (),
            .inst     (inst_D),
            .rs1      (inst_rs1_D),
            .rs2      (inst_rs2_D),
            .rd       (inst_rd_D),
            .funct3   (),
            .funct7   (),
            .csr      ()
          );
        
          lab2_proc_ProcDpathImmGen imm_gen_D
          (
            .imm_type (imm_type_D),
            .inst     (inst_D),
            .imm      (imm_D)
          );
        
 000002   logic [31:0] rf_rdata0_D;
 000002   logic [31:0] rf_rdata1_D;
 000008   logic [31:0] rf_wdata_W;
        
          vc_Regfile_2r1w_zero rf
          (
            .clk      (clk),
            .reset    (reset),
            .rd_addr0 (inst_rs1_D),
            .rd_data0 (rf_rdata0_D),
            .rd_addr1 (inst_rs2_D),
            .rd_data1 (rf_rdata1_D),
            .wr_en    (rf_wen_W),
            .wr_addr  (rf_waddr_W),
            .wr_data  (rf_wdata_W)
          );
        
 000004   logic [31:0] op1_D;
 000231   logic [31:0] op2_D;
        
 000002   logic [31:0] csrr_data_D;
        
%000000   logic [31:0] num_cores;
          assign num_cores = p_num_cores;
        
          // csrr data select mux
          vc_Mux3#(32) csrr_sel_mux_D
          (
           .in0  (mngr2proc_data),
           .in1  (num_cores),
           .in2  (core_id),
           .sel  (csrr_sel_D),
           .out  (csrr_data_D)
          );
        
 000002 logic [31:0] op1_byp_mux_out, op2_byp_mux_out;
        vc_Mux4#(32) op1_byp_sel_mux_D
          (
            .in0  (rf_rdata0_D),
            .in1  (bypass_from_X),
            .in2  (bypass_from_M),
            .in3  (bypass_from_W),
            .sel  (op1_byp_sel_D),
            .out  (op1_byp_mux_out)
          );
        
        vc_Mux4#(32) op2_byp_sel_mux_D
          (
            .in0  (rf_rdata1_D),
            .in1  (bypass_from_X),
            .in2  (bypass_from_M),
            .in3  (bypass_from_W),
            .sel  (op2_byp_sel_D),
            .out  (op2_byp_mux_out)
          );
        
        vc_Mux2#(32) op1_sel_mux_D
          (
            .in0  (op1_byp_mux_out),
            .in1  (pc_D),
            .sel  (op1_sel_D),
            .out  (op1_D)
          );
        
          // op2 select mux
          // This mux chooses among RS2, imm, and the output of the above csrr
          // csrr sel mux. Basically we are using two muxes here for pedagogy.
          vc_Mux3#(32) op2_sel_mux_D
          (
            .in0  (op2_byp_mux_out),
            .in1  (imm_D),
            .in2  (csrr_data_D),
            .sel  (op2_sel_D),
            .out  (op2_D)
          );
        
          vc_Adder#(32) pc_plus_imm_D
          (
            .in0  (pc_D),
            .in1  (imm_D),
            .cin  (1'b0),
            .out  (jal_target_D),
            .cout ()
          );
        
 000004   logic [63:0] istream_msg;
%000000   logic [31:0] ostream_msg;
        
          assign istream_msg = {op1_D, op2_D};
        
          lab1_imul_IntMulAlt imul
          (
              .clk(clk),
              .reset(reset),
              .istream_val(imul_req_val_D),
              .istream_rdy(imul_req_rdy_D),
              .istream_msg(istream_msg),
              .ostream_val(imul_resp_val_X),
              .ostream_rdy(imul_resp_rdy_X),
              .ostream_msg(ostream_msg)
          );
        
          vc_Mux3#(32) ex_result_sel_mux_X
          (
            .in0  (ostream_msg),
            .in1  (pc_plus4_X),
            .in2  (alu_result_X),
            .sel  (ex_result_sel_X),
            .out  (ex_result_X)
          ); 
        
          //--------------------------------------------------------------------
          // X stage
          //--------------------------------------------------------------------
        
 000004   logic [31:0] op1_X;
 000230   logic [31:0] op2_X;
 000019   logic [31:0] pc_X;
        
           vc_EnResetReg#(32) pc_reg_X
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_X),
            .d      (pc_D),
            .q      (pc_X)
          );
        
          vc_EnResetReg#(32, 0) op1_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (op1_D),
            .q     (op1_X)
          );
        
          vc_EnResetReg#(32, 0) op2_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (op2_D),
            .q     (op2_X)
          );
        
          vc_EnResetReg#(32, 0) br_target_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (jal_target_D),
            .q     (br_target_X)
          );
        
          vc_EnResetReg#(32, 0) dmem_write_data_reg_X
          (
            .clk   (clk),
            .reset (reset),
            .en    (reg_en_X),
            .d     (op2_byp_mux_out),
            .q     (dmem_reqstream_msg_data)
          );
        
 000008   logic [31:0] alu_result_X;
 000008   logic [31:0] ex_result_X;
 000019   logic [31:0] pc_plus4_X;
        
           vc_Incrementer#(32, 4) pc_incr_X
          (
            .in   (pc_X),
            .out  (pc_plus4_X)
          );
        
          lab2_proc_ProcDpathAlu alu
          (
            .in0      (op1_X),
            .in1      (op2_X),
            .fn       (alu_fn_X),
            .out      (alu_result_X),
            .ops_eq   (br_cond_eq_X),
            .ops_lt   (br_cond_lt_X),
            .ops_ltu  (br_cond_ltu_X)
          );
        
          //assign ex_result_X = alu_result_X;
        
          assign dmem_reqstream_msg_addr = alu_result_X;
        
          //--------------------------------------------------------------------
          // M stage
          //--------------------------------------------------------------------
        
 000008   logic [31:0] ex_result_M;
        
          vc_EnResetReg#(32, 0) ex_result_reg_M
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_M),
            .d      (ex_result_X),
            .q      (ex_result_M)
          );
        
 000170   logic [31:0] dmem_result_M;
 000008   logic [31:0] wb_result_M;
        
          assign dmem_result_M = dmem_respstream_msg_data;
        
          vc_Mux2#(32) wb_result_sel_mux_M
          (
            .in0    (ex_result_M),
            .in1    (dmem_result_M),
            .sel    (wb_result_sel_M),
            .out    (wb_result_M)
          );
        
          //--------------------------------------------------------------------
          // W stage
          //--------------------------------------------------------------------
        
 000008   logic [31:0] wb_result_W;
        
          vc_EnResetReg#(32, 0) wb_result_reg_W
          (
            .clk    (clk),
            .reset  (reset),
            .en     (reg_en_W),
            .d      (wb_result_M),
            .q      (wb_result_W)
          );
        
          assign proc2mngr_data = wb_result_W;
        
          assign rf_wdata_W = wb_result_W;
        
          // stats output
          // note the stats en is full 32-bit here but the outside port is one
          // bit.
        
%000000   logic [31:0] stats_en_W;
        
          assign stats_en = | stats_en_W;
        
          vc_EnResetReg#(32, 0) stats_en_reg_W
          (
           .clk    (clk),
           .reset  (reset),
           .en     (stats_en_wen_W),
           .d      (wb_result_W),
           .q      (stats_en_W)
          );
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_BASE_DPATH_V */
        
