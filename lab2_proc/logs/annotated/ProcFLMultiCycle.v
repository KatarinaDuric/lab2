//      // verilator_coverage annotation
        //=========================================================================
        // Functional Level MultiCycle Processor
        //=========================================================================
        
        `ifndef LAB2_PROC_PROC_BASE_V
        `define LAB2_PROC_PROC_BASE_V
        
        `include "vc/mem-msgs.v"
        `include "vc/queues.v"
        `include "vc/trace.v"
        
        `include "tinyrv2_encoding.v"
        
        /* verilator lint_off UNOPTFLAT */
        module lab2_proc_ProcFLMultiCycle
        #(
          parameter p_num_cores = 1
        )
        (
 033780   input  logic         clk,
 000052   input  logic         reset,
        
          // From mngr streaming port
        
 000132   input  logic [31:0]  mngr2proc_msg,
 000648   input  logic         mngr2proc_val,
 000660   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000016   output logic [31:0]  proc2mngr_msg,
 000056   output logic         proc2mngr_val,
 000944   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 005532   output logic         imem_reqstream_val,
 008857   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 005473   input  logic         imem_respstream_val,
 005485   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001570   output logic         dmem_reqstream_val,
 008007   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001570   input  logic         dmem_respstream_val,
 001570   output logic         dmem_respstream_rdy,
        
          // stats output; core_id is an input port rather than a parameter so
          // that the module only needs to be compiled once. If it were a
          // parameter, each core would be compiled separately.
        
%000000   input  logic [31:0]  core_id,
%000000   output logic         commit_inst,
%000000   output logic         stats_en
        
        );
        
          //----------------------------------------------------------------------
          // Instruction Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
%000000   logic [1:0]  imem_queue_num_free_entries;
%000000   mem_req_4B_t imem_reqstream_enq_msg;
%000000   logic        imem_reqstream_enq_val;
%000000   logic        imem_reqstream_enq_rdy;
        
 000052   logic [31:0] imem_reqstream_msg_addr;
        
          assign imem_reqstream_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_msg.opaque = 8'b0;
          assign imem_reqstream_msg.addr   = imem_reqstream_msg_addr;
          assign imem_reqstream_msg.len    = 2'd0;
          assign imem_reqstream_msg.data   = 32'bx;
        
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
 000720   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001570   logic        dmem_reqstream_enq_val;
 000720   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000084   logic [31:0] dmem_reqstream_enq_msg_data;
        
          assign dmem_reqstream_enq_msg.type_  = dmem_reqstream_enq_msg_type;
          assign dmem_reqstream_enq_msg.opaque = 8'b0;
          assign dmem_reqstream_enq_msg.addr   = dmem_reqstream_enq_msg_addr;
          assign dmem_reqstream_enq_msg.len    = 2'd0;
          assign dmem_reqstream_enq_msg.data   = dmem_reqstream_enq_msg_data;
        
          vc_Queue#(`VC_QUEUE_BYPASS,$bits(mem_req_4B_t),1) dmem_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(dmem_queue_num_free_entries),
        
            .enq_msg (dmem_reqstream_enq_msg),
            .enq_val (dmem_reqstream_enq_val),
            .enq_rdy (dmem_reqstream_enq_rdy),
        
            .deq_msg (dmem_reqstream_msg),
            .deq_val (dmem_reqstream_val),
            .deq_rdy (dmem_reqstream_rdy)
          );
        
          //----------------------------------------------------------------------
          // proc2mngr Bypass Queue
          //----------------------------------------------------------------------
        
 000062   logic        proc2mngr_queue_num_free_entries;
 000016   logic [31:0] proc2mngr_enq_msg;
 000062   logic        proc2mngr_enq_val;
 000062   logic        proc2mngr_enq_rdy;
        
          vc_Queue#(`VC_QUEUE_BYPASS,32,1) proc2mngr_queue
          (
            .clk     (clk),
            .reset   (reset),
            .num_free_entries(proc2mngr_queue_num_free_entries),
        
            .enq_msg (proc2mngr_enq_msg),
            .enq_val (proc2mngr_enq_val),
            .enq_rdy (proc2mngr_enq_rdy),
        
            .deq_msg (proc2mngr_msg),
            .deq_val (proc2mngr_val),
            .deq_rdy (proc2mngr_rdy)
          );
        
          //----------------------------------------------------------------------
          // Instruction Unpacking
          //----------------------------------------------------------------------
%000000   logic [`TINYRV2_INST_OPCODE_NBITS-1:0] opcode;
 000146   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
 000008   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000292   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000376   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000292   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
           lab2_proc_tinyrv2_encoding_InstUnpack inst_unpack
          (
            .opcode   (),
            .inst     (inst),
            .rs1      (rs1),
            .rs2      (rs2),
            .rd       (rd),
            .funct3   (funct3),
            .funct7   (funct7),
            .csr      (csr)
          );
%000000   logic [31:0] PC;
%000000   logic [31:0] PC_prev;
%000000   logic [31:0] n_PC;
 000008   logic [31:0] inst;
 000008   logic [31:0] n_inst;
 005460   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 003273     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 003273   begin
            // I-type immediate
 003273     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
 000030   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
 000030   begin
            // I-type immediate, specialized for shift amounts
 000030     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 001080   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 001080   begin
            // S-type immediate
 001080     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 000384   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 000384   begin
            // B-type immediate
 000384     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
          end
          endfunction
        
 000498   function [19:0] imm_u_sh12( input [`TINYRV2_INST_NBITS-1:0] inst );
 000498   begin
            // U-type immediate, shifted right by 12
 000498     imm_u_sh12 = { inst[31], inst[30:20], inst[19:12] };
          end
          endfunction
        
 000012   function [20:0] imm_j( input [`TINYRV2_INST_NBITS-1:0] inst );
 000012   begin
            // J-type immediate
 000012     imm_j = { inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
          end
          endfunction
        
          /* verilator lint_off WIDTH */
          typedef enum { Idle, IReq,IWait, E, EWait} pstate;
          pstate state, n_state;
 061916   always_comb begin
 061916     n_state= state;
 061916     n_PC=PC;
 061916     n_inst=inst;
 061916     print_trace =1;
 061916     n_rf=rf;
 061916     imem_reqstream_val=0;
 061916     dmem_reqstream_enq_msg_addr = 0;
 061916     dmem_reqstream_enq_msg_data =0;
 061916     dmem_reqstream_enq_msg_type =0;
 061916     dmem_reqstream_enq_val=0;
 061916     dmem_respstream_rdy =0;
 061916     proc2mngr_enq_val =0;
 061916     proc2mngr_enq_msg=0;
 061916     mngr2proc_rdy=0;
 061916     imem_respstream_rdy=0;
 002236     if (reset) begin
 002236         n_state = Idle;
 002236         n_rf ='{default:32'h00000000};
            end
 059680     else begin
 008236       if (state == Idle)begin
 008236         n_state =IReq;
              end
 017774       else if (state == IReq)begin
 017774           imem_reqstream_val =1;
 017774           imem_reqstream_msg_addr = PC;
 006480         if(imem_reqstream_rdy && imem_reqstream_val)begin
 011294           n_state=IWait;
                end 
 006480         else n_state=IReq;
              end
 018028       else if (state == IWait)begin
 018028         imem_respstream_rdy =1;
 007165         if(imem_respstream_rdy && imem_respstream_val) begin
 010863           n_state = E;
 010863           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 007165         end else begin
 007165           n_state=IWait;
                end
              end
 010977       else if (state == E)begin
 010977           n_state=Idle;
 010977           n_PC=PC+4;
 010977           casez ( inst )
 003729           `TINYRV2_INST_CSRR  : begin
 003729             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 003729               mngr2proc_rdy =1;
 000990               if(mngr2proc_val)begin
 000990                 n_rf[rd]=mngr2proc_msg;
 002739               end else begin
 002739                  n_state=E;
 002739                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000144           `TINYRV2_INST_CSRW  : begin
 000009             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000135               proc2mngr_enq_val =1;
 000135               proc2mngr_enq_msg=rf[rs1];
 000042               if(proc2mngr_enq_rdy)begin
 000042               end else begin
 000042                 n_state=E;
 000042                 n_PC=PC;
                      end
                    end    
                  end
 000909            `TINYRV2_INST_ADD   : begin 
 000909               n_rf[rd]=rf[rs1]+rf[rs2];
                    end
 000021             `TINYRV2_INST_SUB   : begin 
 000021               n_rf[rd]=rf[rs1]-rf[rs2];
                    end
 000003             `TINYRV2_INST_AND   : begin 
 000003               n_rf[rd]=rf[rs1]&rf[rs2];
                    end
 000012             `TINYRV2_INST_OR    : begin 
 000012               n_rf[rd]=rf[rs1]|rf[rs2];
                    end
 000576             `TINYRV2_INST_XOR   : begin 
 000576               n_rf[rd]=rf[rs1]^rf[rs2];
                    end
 000018             `TINYRV2_INST_SLT   : begin 
 000018               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(rf[rs2])}};
                    end
 000015             `TINYRV2_INST_SLTU  :  begin 
 000015               n_rf[rd]={{31'b0},{rf[rs1] < rf[rs2]}};
                    end
 000024             `TINYRV2_INST_MUL   : begin 
 000024               n_rf[rd]=rf[rs1] * rf[rs2];
                    end
 001887             `TINYRV2_INST_ADDI  : begin 
 001887               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
                    end
 000009             `TINYRV2_INST_ANDI  : begin 
 000009               n_rf[rd]=$signed(rf[rs1]) & $signed(imm_i(inst));
                    end
 000009             `TINYRV2_INST_ORI   : begin 
 000009               n_rf[rd]=$signed(rf[rs1]) | $signed(imm_i(inst));
                    end
 000066             `TINYRV2_INST_XORI  :  begin 
 000066               n_rf[rd]=$signed(rf[rs1]) ^ $signed(imm_i(inst));
                    end
 000012             `TINYRV2_INST_SLTI  : begin 
 000012               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(imm_i(inst))}};
                    end 
 000009             `TINYRV2_INST_SLTIU : begin 
 000009               n_rf[rd]={{31'b0},{(rf[rs1]) < {{20{inst[31]}},{imm_i(inst)}}}};
                    end
 000009             `TINYRV2_INST_SRA   : begin
 000009               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> rf[ rs2 ][4:0];
                    end
 000015             `TINYRV2_INST_SRL   : begin
 000015               n_rf[ rd ] = $signed(rf[ rs1 ]) >> rf[ rs2 ][4:0];
                    end
 000012             `TINYRV2_INST_SLL   : begin
 000012               n_rf[ rd ] = $signed(rf[ rs1 ]) << rf[ rs2 ][4:0];
                    end
 000012             `TINYRV2_INST_SRAI  : begin
 000012               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> imm_shamt(inst);
                    end
 000006             `TINYRV2_INST_SRLI  : begin
 000006               n_rf[ rd ] = $signed(rf[ rs1 ]) >> imm_shamt(inst);
                    end
 000012             `TINYRV2_INST_SLLI  : begin
 000012               n_rf[ rd ] = $signed(rf[ rs1 ]) << imm_shamt(inst);
                    end
 000480             `TINYRV2_INST_LUI   : begin
 000480               n_rf[ rd ] = imm_u_sh12(inst)<<12;
                    end
 000018             `TINYRV2_INST_AUIPC : begin
 000018               n_rf[ rd ] = PC+(imm_u_sh12(inst)<<12);
                    end
 001275           `TINYRV2_INST_LW    : begin
 001275               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 001275               dmem_reqstream_enq_msg_data =0;
 001275               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 001275               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 001275               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 001080           `TINYRV2_INST_SW    : begin
 001080                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 001080                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 001080                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 001080                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 001080               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000012           `TINYRV2_INST_JAL   : begin
 000012               n_rf[ rd ] = PC+4;
 000012               n_PC = $signed(PC) +$signed(imm_j(inst));
                    end
 000006             `TINYRV2_INST_JALR  : begin
 000006               n_rf[ rd ] = PC+4;
 000006               n_PC = ($signed(rf[rs1]) + $signed(imm_i(inst)))& $signed(32'hfffffffe);
                    end
 000003             `TINYRV2_INST_BEQ   : begin
%000000               if (rf[rs1]==rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000375             `TINYRV2_INST_BNE   : begin
 000006               if (rf[rs1]!=rf[rs2]) begin
 000369                 n_PC= $signed(PC) +$signed(imm_b(inst));
                      end 
                    end
 000003             `TINYRV2_INST_BLT   : begin
%000000               if ($signed(rf[rs1]) < $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000003             `TINYRV2_INST_BGE   : begin
%000000               if ($signed(rf[rs1]) >= $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000006             `TINYRV2_INST_BLTU  : begin
 000003               if (rf[rs1] < rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000003             `TINYRV2_INST_BGEU  :  begin
%000000               if (rf[rs1] >= rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000204           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 004665           n_state=Idle;
 004665           casez ( inst )
 002529           `TINYRV2_INST_LW    : begin
 002529             dmem_respstream_rdy =1;
 001254             if(dmem_respstream_rdy && dmem_respstream_val) begin
 001275               n_state=Idle;
 001275               n_rf[ rd ] = dmem_respstream_msg.data;
 001254             end else  begin 
 001254               n_state=EWait;
                    end
                  end
 002136           `TINYRV2_INST_SW    : begin
 002136             dmem_respstream_rdy =1;
 001056             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 001056             else  begin
 001056               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 008196       if(PC!=n_PC) begin 
                
 008196         print_trace=0;
              end 
          end
        
          end
 016864   always_ff @(posedge clk) begin
 016864       inst <=n_inst;
 016864       PC<=n_PC;
 016864       PC_prev<=PC;
        
        
 002728       if(PC!=n_PC) begin 
 002728         PC_prev<=n_PC;
              end 
 016864       rf<=n_rf;
 016864       rf[0]<=0;
 016864       state <=n_state;
 000676       if (reset) begin
 000676           PC<= 32'h200 ;
              end    
          end
          
          /* verilator lint_on WIDTH */
        
        
          //----------------------------------------------------------------------
          // Line tracing
          //----------------------------------------------------------------------
        
          `ifndef SYNTHESIS
        
          lab2_proc_tinyrv2_encoding_InstTasks tinyrv2();
          logic [`VC_TRACE_NBITS-1:0] temp;
          
          logic [`VC_TRACE_NBITS-1:0] str;
          `VC_TRACE_BEGIN
          begin
              $sformat(temp,"%x",mngr2proc_msg);
              vc_trace.append_val_rdy_str( trace_str, mngr2proc_val, mngr2proc_rdy, temp );
              vc_trace.append_str( trace_str, ">" );
              if(print_trace) begin
                vc_trace.append_str(trace_str,".");
                vc_trace.append_chars( trace_str, " ", 31 );
              end
              else begin
                $sformat( str, "%x-",  PC_prev);
                vc_trace.append_str(trace_str,str);
                vc_trace.append_str( trace_str, { 3896'b0, tinyrv2.disasm( n_inst ) } );
              end
            
              vc_trace.append_str( trace_str, ">" );
              $sformat(temp,"%x",proc2mngr_enq_msg);
              vc_trace.append_val_rdy_str( trace_str, proc2mngr_enq_val, proc2mngr_enq_rdy, temp);
        
          end
          `VC_TRACE_END
        
          // These trace modules are useful because they breakout all the
          // individual fields so you can see them in gtkwave
        
          vc_MemReqMsg4BTrace imem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (imem_reqstream_val),
            .rdy   (imem_reqstream_rdy),
            .msg   (imem_reqstream_msg)
          );
        
          vc_MemReqMsg4BTrace dmem_reqstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_reqstream_val),
            .rdy   (dmem_reqstream_rdy),
            .msg   (dmem_reqstream_msg)
          );
        
          vc_MemRespMsg4BTrace imem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (imem_respstream_val),
            .rdy   (imem_respstream_rdy),
            .msg   (imem_respstream_msg)
          );
        
          vc_MemRespMsg4BTrace dmem_respstream_trace
          (
            .clk   (clk),
            .reset (reset),
            .val   (dmem_respstream_val),
            .rdy   (dmem_respstream_rdy),
            .msg   (dmem_respstream_msg)
          );
        
          `endif
        
        endmodule
        /* verilator lint_on UNOPTFLAT */
        `endif /* LAB2_PROC_PROC_BASE_V */
        
        
