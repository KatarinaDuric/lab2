//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Source with Random Delays
        //========================================================================
        
        `ifndef VC_TEST_RAND_DELAY_SOURCE_V
        `define VC_TEST_RAND_DELAY_SOURCE_V
        
        `include "vc/TestSourceFile.v"
        `include "vc/TestRandDelay.v"
        
        module vc_TestRandDelaySourceFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 072288   input  logic                   clk,
 000156   input  logic                   reset,
        
          // Max delay input
        
%000000   input  logic [31:0]            max_delay,
        
          // Source message interface
        
 001968   output logic                   val,
 001980   input  logic                   rdy,
 000396   output logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all source data has been issued
        
 000156   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Test source
          //----------------------------------------------------------------------
        
 000312   logic                   src_val;
 001980   logic                   src_rdy;
 000294   logic [p_msg_nbits-1:0] src_msg;
        
          vc_TestSourceFile#(p_msg_nbits,p_num_msgs) src
          (
            .clk       (clk),
            .reset     (reset),
        
            .val       (src_val),
            .rdy       (src_rdy),
            .msg       (src_msg),
        
            .done      (done)
          );
        
 000156   task load (integer file_load);
 000156   begin
 000156     src.load(file_load);
          end
          endtask
          //----------------------------------------------------------------------
          // Test random delay
          //----------------------------------------------------------------------
        
          vc_TestRandDelay#(p_msg_nbits) msg_delay
          (
            .clk       (clk),
            .reset     (reset),
        
            .max_delay (max_delay),
        
            .in_val    (src_val),
            .in_rdy    (src_rdy),
            .in_msg    (src_msg),
        
            .out_val   (val),
            .out_rdy   (rdy),
            .out_msg   (msg)
          );
        
        endmodule
        
        `endif /* VC_TEST_RAND_DELAY_SOURCE */
        
