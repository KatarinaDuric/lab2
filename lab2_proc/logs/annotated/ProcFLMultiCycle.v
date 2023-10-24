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
        
        
        module lab2_proc_ProcFLMultiCycle
        #(
          parameter p_num_cores = 1
        )
        (
 021627   input  logic         clk,
 000019   input  logic         reset,
        
          // From mngr streaming port
        
 000002   input  logic [31:0]  mngr2proc_msg,
 000096   input  logic         mngr2proc_val,
 000096   output logic         mngr2proc_rdy,
        
          // To mngr streaming port
        
 000002   output logic [31:0]  proc2mngr_msg,
 000034   output logic         proc2mngr_val,
 000930   input  logic         proc2mngr_rdy,
        
          // Instruction Memory Request Port
        
%000000   output mem_req_4B_t  imem_reqstream_msg,
 003696   output logic         imem_reqstream_val,
 005806   input  logic         imem_reqstream_rdy,
        
          // Instruction Memory Response Port
        
%000000   input  mem_resp_4B_t imem_respstream_msg,
 003671   input  logic         imem_respstream_val,
 003679   output logic         imem_respstream_rdy,
        
          // Data Memory Request Port
        
%000000   output mem_req_4B_t  dmem_reqstream_msg,
 001210   output logic         dmem_reqstream_val,
 005422   input  logic         dmem_reqstream_rdy,
        
          // Data Memory Response Port
        
%000000   input  mem_resp_4B_t dmem_respstream_msg,
 001210   input  logic         dmem_respstream_val,
 001210   output logic         dmem_respstream_rdy,
        
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
        
 000019   logic [31:0] imem_reqstream_msg_addr;
        
          assign imem_reqstream_msg.type_  = `VC_MEM_REQ_MSG_TYPE_READ;
          assign imem_reqstream_msg.opaque = 8'b0;
          assign imem_reqstream_msg.addr   = imem_reqstream_msg_addr;
          assign imem_reqstream_msg.len    = 2'd0;
          assign imem_reqstream_msg.data   = 32'bx;
        
        
          //----------------------------------------------------------------------
          // Data Memory Request Bypass Queue
          //----------------------------------------------------------------------
        
 000572   logic        dmem_queue_num_free_entries;
%000000   mem_req_4B_t dmem_reqstream_enq_msg;
 001210   logic        dmem_reqstream_enq_val;
 000572   logic        dmem_reqstream_enq_rdy;
        
%000000   logic [2:0 ] dmem_reqstream_enq_msg_type;
%000000   logic [31:0] dmem_reqstream_enq_msg_addr;
 000176   logic [31:0] dmem_reqstream_enq_msg_data;
        
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
        
 000034   logic        proc2mngr_queue_num_free_entries;
 000002   logic [31:0] proc2mngr_enq_msg;
 000034   logic        proc2mngr_enq_val;
 000034   logic        proc2mngr_enq_rdy;
        
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
 000050   logic [`TINYRV2_INST_RD_NBITS-1:0]     rd;
%000000   logic [`TINYRV2_INST_RS1_NBITS-1:0]    rs1;
 000252   logic [`TINYRV2_INST_RS2_NBITS-1:0]    rs2;
 000016   logic [`TINYRV2_INST_FUNCT3_NBITS-1:0] funct3;
%000000   logic [`TINYRV2_INST_FUNCT7_NBITS-1:0] funct7;
 000252   logic [`TINYRV2_INST_CSR_NBITS-1:0]    csr;
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
 000019   logic [31:0] PC_prev;
%000000   logic [31:0] n_PC;
 000002   logic [31:0] inst;
 000002   logic [31:0] n_inst;
 003670   logic print_trace;
          logic [31:0] rf [31:0];
          logic [31:0] n_rf [31:0];
        
 003570     function [11:0] imm_i( input [`TINYRV2_INST_NBITS-1:0] inst );
 003570   begin
            // I-type immediate
 003570     imm_i = { inst[31], inst[30:25], inst[24:21], inst[20] };
          end
          endfunction
        
 000003   function [4:0] imm_shamt( input [`TINYRV2_INST_NBITS-1:0] inst );
 000003   begin
            // I-type immediate, specialized for shift amounts
 000003     imm_shamt = { inst[24:21], inst[20] };
          end
          endfunction
        
 000609   function [11:0] imm_s( input [`TINYRV2_INST_NBITS-1:0] inst );
 000609   begin
            // S-type immediate
 000609     imm_s = { inst[31], inst[30:25], inst[11:8], inst[7] };
          end
          endfunction
        
 000378   function [12:0] imm_b( input [`TINYRV2_INST_NBITS-1:0] inst );
 000378   begin
            // B-type immediate
 000378     imm_b = { inst[31], inst[7], inst[30:25], inst[11:8], 1'b0 };
          end
          endfunction
        
 000012   function [19:0] imm_u_sh12( input [`TINYRV2_INST_NBITS-1:0] inst );
 000012   begin
            // U-type immediate, shifted right by 12
 000012     imm_u_sh12 = { inst[31], inst[30:20], inst[19:12] };
          end
          endfunction
        
 000003   function [20:0] imm_j( input [`TINYRV2_INST_NBITS-1:0] inst );
 000003   begin
            // J-type immediate
 000003     imm_j = { inst[31], inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };
          end
          endfunction
        
          /* verilator lint_off WIDTH */
          typedef enum { Idle, IReq,IWait, E, EWait} pstate;
          pstate state, n_state;
%000000   always_comb begin
%000000     n_state= state;
%000000     n_PC=PC;
%000000     n_inst=inst;
%000000     print_trace =1;
%000000     n_rf=rf;
%000000     imem_reqstream_val=0;
%000000     dmem_reqstream_enq_msg_addr = 0;
%000000     dmem_reqstream_enq_msg_data =0;
%000000     dmem_reqstream_enq_msg_type =0;
%000000     dmem_reqstream_enq_val=0;
%000000     dmem_respstream_rdy =0;
%000000     proc2mngr_enq_val =0;
%000000     proc2mngr_enq_msg=0;
%000000     mngr2proc_rdy=0;
%000000     imem_respstream_rdy=0;
 000038     if (reset) begin
 000076         n_state = Idle;
 000076         n_rf ='{default:32'h00000000};
            end
 000038     else begin
 001854       if (state == Idle)begin
 001854         n_state =IReq;
              end
 002737       else if (state == IReq)begin
 002737           imem_reqstream_val =1;
 002737           imem_reqstream_msg_addr = PC;
 000888         if(imem_reqstream_rdy && imem_reqstream_val)begin
 001849           n_state=IWait;
                end 
 000888         else n_state=IReq;
              end
 002795       else if (state == IWait)begin
 002795         imem_respstream_rdy =1;
 000959         if(imem_respstream_rdy && imem_respstream_val) begin
 001836           n_state = E;
 001836           n_inst =imem_respstream_msg.data;
                  //print_trace =0;
 000959         end else begin
 000959           n_state=IWait;
                end
              end
 001980       else if (state == E)begin
 001980           n_state=Idle;
 001980           n_PC=PC+4;
 001980           casez ( inst )
 000193           `TINYRV2_INST_CSRR  : begin
 000193             if(csr == `TINYRV2_CPR_MNGR2PROC) begin
 000193               mngr2proc_rdy =1;
 000144               if(mngr2proc_val)begin
 000144                 n_rf[rd]=mngr2proc_msg;
 000435               end else begin
 000435                  n_state=E;
 000435                  n_PC=PC;
                      end
                    end
%000000             else if ( csr == `TINYRV2_CPR_NUMCORES )
%000000               n_rf[rd] = 2'h1;
%000000             else if ( csr  == `TINYRV2_CPR_COREID )
%000000               n_rf[rd]       = 2'h0;
                  end
 000017           `TINYRV2_INST_CSRW  : begin
%000000             if(csr == `TINYRV2_CPR_PROC2MNGR) begin
 000017               proc2mngr_enq_val =1;
 000017               proc2mngr_enq_msg=rf[rs1];
%000000               if(proc2mngr_enq_rdy)begin
%000000               end else begin
%000000                 n_state=E;
%000000                 n_PC=PC;
                      end
                    end    
                  end
 000207            `TINYRV2_INST_ADD   : begin 
 000207               n_rf[rd]=rf[rs1]+rf[rs2];
                    end
%000000             `TINYRV2_INST_SUB   : begin 
%000000               n_rf[rd]=rf[rs1]-rf[rs2];
                    end
%000000             `TINYRV2_INST_AND   : begin 
%000000               n_rf[rd]=rf[rs1]&rf[rs2];
                    end
%000000             `TINYRV2_INST_OR    : begin 
%000000               n_rf[rd]=rf[rs1]|rf[rs2];
                    end
 000012             `TINYRV2_INST_XOR   : begin 
 000012               n_rf[rd]=rf[rs1]^rf[rs2];
                    end
%000000             `TINYRV2_INST_SLT   : begin 
%000000               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(rf[rs2])}};
                    end
%000000             `TINYRV2_INST_SLTU  :  begin 
%000000               n_rf[rd]={{31'b0},{rf[rs1] < rf[rs2]}};
                    end
 000002             `TINYRV2_INST_MUL   : begin 
 000002               n_rf[rd]=rf[rs1] * rf[rs2];
                    end
 000784             `TINYRV2_INST_ADDI  : begin 
 000784               n_rf[rd]=$signed(rf[rs1]) + $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_ANDI  : begin 
%000000               n_rf[rd]=$signed(rf[rs1]) & $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_ORI   : begin 
%000000               n_rf[rd]=$signed(rf[rs1]) | $signed(imm_i(inst));
                    end
 000002             `TINYRV2_INST_XORI  :  begin 
 000002               n_rf[rd]=$signed(rf[rs1]) ^ $signed(imm_i(inst));
                    end
%000000             `TINYRV2_INST_SLTI  : begin 
%000000               n_rf[rd]={{31'b0},{$signed(rf[rs1]) < $signed(imm_i(inst))}};
                    end 
%000000             `TINYRV2_INST_SLTIU : begin 
%000000               n_rf[rd]={{31'b0},{(rf[rs1]) < {{20{inst[31]}},{imm_i(inst)}}}};
                    end
%000000             `TINYRV2_INST_SRA   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SRL   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >> rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SLL   : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) << rf[ rs2 ][4:0];
                    end
%000000             `TINYRV2_INST_SRAI  : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >>> imm_shamt(inst);
                    end
%000000             `TINYRV2_INST_SRLI  : begin
%000000               n_rf[ rd ] = $signed(rf[ rs1 ]) >> imm_shamt(inst);
                    end
 000001             `TINYRV2_INST_SLLI  : begin
 000001               n_rf[ rd ] = $signed(rf[ rs1 ]) << imm_shamt(inst);
                    end
 000003             `TINYRV2_INST_LUI   : begin
 000003               n_rf[ rd ] = imm_u_sh12(inst)<<12;
                    end
 000001             `TINYRV2_INST_AUIPC : begin
 000001               n_rf[ rd ] = PC+(imm_u_sh12(inst)<<12);
                    end
 000402           `TINYRV2_INST_LW    : begin
 000402               dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ])+ $signed( imm_i(inst) );
 000402               dmem_reqstream_enq_msg_data =0;
 000402               dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_READ;
 000402               dmem_reqstream_enq_val=1;
%000000             if(dmem_reqstream_enq_rdy&& dmem_reqstream_enq_val)begin
 000402               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000203           `TINYRV2_INST_SW    : begin
 000203                 dmem_reqstream_enq_msg_addr = $signed(rf[ rs1 ]) + $signed( imm_s(inst) );
 000203                 dmem_reqstream_enq_msg_data =rf[ rs2 ];
 000203                 dmem_reqstream_enq_msg_type =`VC_MEM_REQ_MSG_TYPE_WRITE;
 000203                 dmem_reqstream_enq_val =1;
%000000             if(dmem_reqstream_enq_val&&dmem_reqstream_enq_rdy)begin
 000203               n_state=EWait;
%000000             end else begin
%000000               n_state=E;
%000000               n_PC=PC;
                    end
                  end
 000001           `TINYRV2_INST_JAL   : begin
 000001               n_rf[ rd ] = PC+4;
 000001               n_PC = $signed(PC) +$signed(imm_j(inst));
                    end
 000002             `TINYRV2_INST_JALR  : begin
 000002               n_rf[ rd ] = PC+4;
 000002               n_PC = ($signed(rf[rs1]) + $signed(imm_i(inst)))& $signed(32'hfffffffe);
                    end
 000002             `TINYRV2_INST_BEQ   : begin
%000000               if (rf[rs1]==rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000125             `TINYRV2_INST_BNE   : begin
 000002               if (rf[rs1]!=rf[rs2]) begin
 000123                 n_PC= $signed(PC) +$signed(imm_b(inst));
                      end 
                    end
 000001             `TINYRV2_INST_BLT   : begin
%000000               if ($signed(rf[rs1]) < $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BGE   : begin
%000000               if ($signed(rf[rs1]) >= $signed(rf[rs2])) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BLTU  : begin
%000000               if (rf[rs1] < rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
%000000             `TINYRV2_INST_BGEU  :  begin
%000000               if (rf[rs1] >= rf[rs2]) n_PC=$signed(PC) +$signed(imm_b(inst));
                    end
 000022           default             : begin end
                endcase
              end
%000000       else if (state == EWait)begin
 001210           n_state=Idle;
 001210           casez ( inst )
 000813           `TINYRV2_INST_LW    : begin
 000813             dmem_respstream_rdy =1;
 000402             if(dmem_respstream_rdy && dmem_respstream_val) begin
 000402               n_state=Idle;
 000402               n_rf[ rd ] = dmem_respstream_msg.data;
 000411             end else  begin 
 000411               n_state=EWait;
                    end
                  end
 000397           `TINYRV2_INST_SW    : begin
 000397             dmem_respstream_rdy =1;
 000194             if(dmem_respstream_rdy &&dmem_respstream_val) n_state=Idle;
 000194             else  begin
 000194               n_state=EWait;
                    end
                  end
                  
                  endcase
              end
        
 005505       if(PC!=n_PC) begin 
                
 005505         print_trace=0;
              end 
          end
        
          end
 010804   always_ff @(posedge clk) begin
 010804       inst <=n_inst;
 010804       PC<=n_PC;
 010804       PC_prev<=PC;
        
        
 001835       if(PC!=n_PC) begin 
 001835         PC_prev<=n_PC;
              end 
 010804       rf<=n_rf;
 010804       rf[0]<=0;
 010804       state <=n_state;
 000247       if (reset) begin
 000247           PC<= 32'h200 ;
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
        
        `endif /* LAB2_PROC_PROC_BASE_V */
        
        
