//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Sink
        //========================================================================
        // p_sim_mode should be set to one in simulators. This will cause the
        // sink to abort after the first failure with an appropriate error
        // message.
        
        `ifndef VC_TEST_SINK_FILE_V
        `define VC_TEST_SINK_FILE_V
        
        `include "vc/regs.v"
        `include "vc/trace.v"
        
        module vc_TestSinkFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024,
          parameter p_sim_mode  = 0
        )(
 072288   input  logic                   clk,
 000156   input  logic                   reset,
        
          // Sink message interface
        
 000180   input  logic                   val,
 000102   output logic                   rdy,
 000048   input  logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all sink data has been received
        
 000156   output logic                   done
        );
        
          //----------------------------------------------------------------------
          // Local parameters
          //----------------------------------------------------------------------
        
          // Size of a physical address for the memory in bits
        
          localparam c_index_nbits = $clog2(p_num_msgs);
        
          //----------------------------------------------------------------------
          // State
          //----------------------------------------------------------------------
        
          // Memory which stores messages to verify against those received
        
          logic [p_msg_nbits-1:0] m[p_num_msgs-1:0];
        
          // Index register pointing to next message to verify
        
 000180   logic                     index_en;
%000000   logic [c_index_nbits-1:0] index_next;
%000000   logic [c_index_nbits-1:0] index;
%000000   logic [c_index_nbits-1:0] index_max;
        
          vc_EnResetReg#(c_index_nbits,{c_index_nbits{1'b0}}) index_reg
          (
            .clk   (clk),
            .reset (reset),
            .en    (index_en),
            .d     (index_next),
            .q     (index)
          );
        
          // Register reset
        
 000156   logic reset_reg;
 036066   always_ff @( posedge clk )
 036066     reset_reg <= reset;
%000000   logic [31:0] data_data;
 000156   task load (integer file_load);
 000156   begin
        
            integer count;
 000156     index_max =0;
 000093     while (!$feof(file_load))begin
 000093       count=$fscanf(file_load, "%x\n", data_data); 
 000093       if( count ==0) break;
              
              
 000093       $display("Loading %x",data_data);
              
 000093       m[index_max]= data_data;
 000093       index_max =index_max +1;
              
            end
        
          end
          endtask
          //----------------------------------------------------------------------
          // Combinational logic
          //----------------------------------------------------------------------
        
%000000   logic done_next;
          assign done = !reset_reg && ( index == ( index_max ) );
        
 036066   always_ff @( posedge clk ) begin
            //if( val && rdy ) done <= done_next;
          end
        
          // Sink message interface is ready as long as we are not done
        
          assign rdy = !reset_reg && !done;
        
          // We bump the index pointer every time we successfully receive a
          // message, otherwise the index stays the same.
        
          assign index_en   = val && rdy;
          assign index_next = index + 1'b1;
        
          // The go signal is high when a message is transferred
        
 000180   logic go;
          assign go = val && rdy;
        
          //----------------------------------------------------------------------
          // Verification logic
          //----------------------------------------------------------------------
        
%000000   logic        failed;
%000000   logic  [3:0] verbose;
        
 000036   logic  [p_msg_nbits-1:0] m_curr;
          assign m_curr = m[index];
        
 036066   always_ff @( posedge clk ) begin
 002028     if ( reset ) begin
 002028       failed <= 0;
            end
 000093     else if ( !reset && go ) begin
        
 000093       casez ( msg )
 000093         m_curr :begin
 000093           pass();
 000093           $display( "     [ passed ] expected = %x, actual = %x",
 000093                     m[index], msg );
                end
%000000         default : begin
%000000           fail();
%000000           failed <= 1;
%000000           $display( "     [ FAILED ] expected = %x, actual = %x",
%000000                     m[index], msg );
                            
%000000           if ( p_sim_mode ) begin
%000000             $display( "" );
%000000             $display( " ERROR: Test sink found a failure!" );
%000000             $display( "  - module   : %m" );
%000000             $display( "  - expected : %x", m[index] );
%000000             $display( "  - actual   : %x", msg );
%000000             $display( "" );
%000000             $display( " Verify that all unit tests pass; if they do, then debug" );
%000000             $display( " the failure and add a new unit test which would have" );
%000000             $display( " caught the bug in the first place." );
%000000             $display( "" );
%000000             $finish;
                  end
                end
              endcase
        
            end
          end
        /* verilator lint_off WIDTH */
          integer t;
 000156   final begin
%000000     for(t = index; t<index_max; t++ )begin
%000000       fail();
%000000       $display( "     [ FAILED ] expected = %x, actual = None",
%000000                       m[index]);
            end 
          end
        /* verilator lint_on WIDTH */
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
 036066   always_ff @( posedge clk ) begin
 002028     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( val );
%000000       `VC_ASSERT_NOT_X( rdy );
            end
          end
        
          //----------------------------------------------------------------------
          // Line Tracing
          //----------------------------------------------------------------------
        
          // logic [`VC_TRACE_NBITS_TO_NCHARS(p_msg_nbits)*8-1:0] msg_str;
        
          // `VC_TRACE_BEGIN
          // begin
          //   $sformat( msg_str, "%x", msg );
          //   vc_trace.append_val_rdy_str( trace_str, val, rdy, msg_str );
          // end
          // `VC_TRACE_END
        
        endmodule
        
        `endif /* VC_TEST_SINK_V */
        
