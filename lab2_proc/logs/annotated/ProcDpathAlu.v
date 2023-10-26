//      // verilator_coverage annotation
        //========================================================================
        // Proc Datapath ALU
        //========================================================================
        
        `ifndef LAB2_PROC_PROC_DPATH_ALU_V
        `define LAB2_PROC_PROC_DPATH_ALU_V
        
        `include "vc/arithmetic.v"
        
        module lab2_proc_ProcDpathAlu
        (
 000460   input  logic [31:0] in0,
 001002   input  logic [31:0] in1,
 002016   input  logic [ 3:0] fn,
 000762   output logic [31:0] out,
 005504   output logic        ops_eq,
 001760   output logic        ops_lt,
 002592   output logic        ops_ltu
        );
        
 019202   always_comb begin
        
 019202     case ( fn )
 011879       4'd0    : out = in0 + in1;                                // ADD
 000033       4'd1    : out = in0 - in1;                                //SUB
 000489       4'd2    : out = in0 ^ in1;                                //XOR
 000020       4'd3    : out = in0 & in1;                                //AND
 000034       4'd4    : out = in0 | in1;                                //OR
 000033       4'd5    : out = 32'(in0 >> in1[4:0]);                     //SRL
 000036       4'd6    : out = 32'(in0 << in1[4:0]);                     //SLL
 001532       4'd7    : out = (in0 + in1) & $signed(32'hfffffffe);      //ADD2
 000048       4'd8    : out = 32'(ops_lt);                       //SLT
 000039       4'd9    : out = 32'(ops_ltu);                      //SLTU
 000035       4'd10   : out = $signed(in0) >>> in1[4:0];                //SRA
 000377       4'd11   : out = in0;                                      // CP OP0
 004647       4'd12   : out = in1;                                      // CP OP1
        
              default : $stop; //out = 32'b0;
            endcase
        
          end
        
          // Calculate equality, zero, negative flags
        
          vc_EqComparator #(32) cond_eq_comp
          (
            .in0  (in0),
            .in1  (in1),
            .out  (ops_eq)
          );
        
          assign ops_lt = $signed(in0) < $signed(in1); 
          assign ops_ltu = in0 < in1;
        
        endmodule
        
        `endif /* LAB2_PROC_PROC_DPATH_ALU_V */
        
