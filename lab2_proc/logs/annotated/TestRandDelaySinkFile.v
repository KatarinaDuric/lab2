//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Sink with Random Delays
        //========================================================================
        
        `ifndef VC_TEST_RAND_DELAY_SINK_V
        `define VC_TEST_RAND_DELAY_SINK_V
        
        `include "vc/TestSinkFile.v"
        `include "vc/TestRandDelay.v"
        
        
        module vc_TestRandDelaySinkFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 102275   input  logic                   clk,
 000057   input  logic                   reset,
        
          // Max delay input
        
%000000   input  logic [31:0]            max_delay,
        
          // Sink message interface
        
 000100   input  logic                   val,
 002802   output logic                   rdy,
 000022   input  logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all sink data has been received
        
 000056   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Test random delay
          //----------------------------------------------------------------------
        
 000100   logic                   sink_val;
 000095   logic                   sink_rdy;
 000006   logic [p_msg_nbits-1:0] sink_msg;
        
          vc_TestRandDelay#(p_msg_nbits) msg_delay
          (
            .clk       (clk),
            .reset     (reset),
        
            .max_delay (max_delay),
        
            .in_val    (val),
            .in_rdy    (rdy),
            .in_msg    (msg),
        
            .out_val   (sink_val),
            .out_rdy   (sink_rdy),
            .out_msg   (sink_msg)
          );
        
          //----------------------------------------------------------------------
          // Test sink
          //----------------------------------------------------------------------
        
          vc_TestSinkFile#(p_msg_nbits,p_num_msgs) sink
          (
            .clk        (clk),
            .reset      (reset),
        
            .val        (sink_val),
            .rdy        (sink_rdy),
            .msg        (sink_msg),
        
            .done       (done)
          );
        
 000057  task load (integer file_load);
 000057   begin
 000057     sink.load(file_load);
          end
          endtask
         endmodule
          
        
        `endif /* VC_TEST_RAND_DELAY_SINK */
        
