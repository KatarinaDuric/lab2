//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Registers
        //========================================================================
        
        // Note that we place the register output earlier in the port list since
        // this is one place we might actually want to use positional port
        // binding like this:
        //
        //  logic [p_nbits-1:0] result_B;
        //  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );
        
        `ifndef VC_REGS_V
        `define VC_REGS_V
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop
        //------------------------------------------------------------------------
        
        module vc_Reg
        #(
          parameter p_nbits = 1
        )(
          input  logic               clk, // Clock input
          output logic [p_nbits-1:0] q,   // Data output
          input  logic [p_nbits-1:0] d    // Data input
        );
        
          always_ff @( posedge clk )
            q <= d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with reset
        //------------------------------------------------------------------------
        
        module vc_ResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 115524   input  logic               clk,   // Clock input
 000312   input  logic               reset, // Sync reset input
 005877   output logic [p_nbits-1:0] q,     // Data output
 005926   input  logic [p_nbits-1:0] d      // Data input
        );
        
 057606   always_ff @( posedge clk )
 057606     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 072288   input  logic               clk,   // Clock input
 000156   input  logic               reset, // Sync reset input
 001047   output logic [p_nbits-1:0] q,     // Data output
 002380   input  logic [p_nbits-1:0] d,     // Data input
 000172   input  logic               en     // Enable input
        );
        
 036066   always_ff @( posedge clk )
 000086     if ( en )
 000086       q <= d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable and reset
        //------------------------------------------------------------------------
        
        module vc_EnResetReg
        #(
          parameter p_nbits       = 1,
          parameter p_reset_value = 0
        )(
 038508   input  logic               clk,   // Clock input
 000104   input  logic               reset, // Sync reset input
 000060   output logic [p_nbits-1:0] q,     // Data output
 000002   input  logic [p_nbits-1:0] d,     // Data input
 002160   input  logic               en     // Enable input
        );
        
 019202   always_ff @( posedge clk )
 005139     if ( reset || en )
 005139       q <= reset ? p_reset_value : d;
        
          // Assertions
        
          `ifndef SYNTHESIS
        
          /*
          always_ff @( posedge clk )
            if ( !reset )
              `VC_ASSERT_NOT_X( en );
          */
        
          `endif /* SYNTHESIS */
        
        endmodule
        
        `endif /* VC_REGS_V */
        
        
