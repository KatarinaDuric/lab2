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
 241944   input  logic               clk,   // Clock input
 000114   input  logic               reset, // Sync reset input
 004177   output logic [p_nbits-1:0] q,     // Data output
 004198   input  logic [p_nbits-1:0] d      // Data input
        );
        
 120915   always_ff @( posedge clk )
 120915     q <= reset ? p_reset_value : d;
        
        endmodule
        
        //------------------------------------------------------------------------
        // Postive-edge triggered flip-flop with enable
        //------------------------------------------------------------------------
        
        module vc_EnReg
        #(
          parameter p_nbits = 1
        )(
 102275   input  logic               clk,   // Clock input
 000057   input  logic               reset, // Sync reset input
 000854   output logic [p_nbits-1:0] q,     // Data output
 001430   input  logic [p_nbits-1:0] d,     // Data input
 000100   input  logic               en     // Enable input
        );
        
 051109   always_ff @( posedge clk )
 000050     if ( en )
 000050       q <= d;
        
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
 080648   input  logic               clk,   // Clock input
 000038   input  logic               reset, // Sync reset input
%000000   output logic [p_nbits-1:0] q,     // Data output
%000000   input  logic [p_nbits-1:0] d,     // Data input
 000382   input  logic               en     // Enable input
        );
        
 040305   always_ff @( posedge clk )
 001673     if ( reset || en )
 001673       q <= reset ? p_reset_value : d;
        
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
        
        
