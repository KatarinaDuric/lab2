//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath Immediate Generation
        //========================================================================
        // Generate intermediate (imm) based on type
        
        `ifndef LAB2_PROC_PROC_DPATH_IMM_GEN_V
        `define LAB2_PROC_PROC_DPATH_IMM_GEN_V
        
        module lab2_proc_ProcDpathImmGen
        (
 000016   input  logic [ 2:0] imm_type,
 000016   input  logic [31:0] inst,
 000998   output logic [31:0] imm
        );
        
 019202   always_comb begin
 019202     case ( imm_type )
 016902       3'd0: // I-type
 016902         imm = { {21{inst[31]}}, inst[30:20] };
        
 001486       3'd1: // S-type
 001486         imm = {{21{inst[31]}}, inst[30:25], inst[11:8], inst[7]};
        
 000472       3'd2: // B-type
 000472         imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };
        
 000334       3'd3: // U-type
 000334         imm = {inst[31:12], 12'b0};
        
 000008       3'd4: // J-type
 000008         imm = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0};
        
        
              default:
               $stop;
                //imm = 32'bx;
        
            endcase
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DPATH_IMM_GEN_V */
        
