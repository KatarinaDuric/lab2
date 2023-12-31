//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Test Source
        //========================================================================
        
        `ifndef VC_TEST_SOURCE_FILE_V
        `define VC_TEST_SOURCE_FILE_V
        
        `include "vc/regs.v"
        `include "vc/assert.v"
        
        module vc_TestSourceFile
        #(
          parameter p_msg_nbits = 1,
          parameter p_num_msgs  = 1024
        )(
 072288   input  logic                   clk,
 000156   input  logic                   reset,
        
          // Source message interface
        
 000312   output logic                   val,
 001980   input  logic                   rdy,
 000294   output logic [p_msg_nbits-1:0] msg,
        
          // Goes high once all source msgs has been issued
        
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
        
          // Memory which stores messages to send
        
          logic [p_msg_nbits-1:0] m[p_num_msgs-1:0];
          logic [p_msg_nbits-1:0] m_load[p_num_msgs-1:0];
        
          // Index register pointing to next message to send
        
 001980   logic                     index_en;
 000063   logic [c_index_nbits-1:0] index_next;
 000060   logic [c_index_nbits-1:0] index;
 000024   logic [c_index_nbits-1:0] index_max;
        
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
 000156     while (!$feof(file_load))begin
 000834       count=$fscanf(file_load, "%x\n", data_data); 
 000834       if( count ==0) break;
              
              
 000834       $display("Loading %x",data_data);
              
 000834       m[index_max]= data_data;
 000834       index_max =index_max +1;
              
            end
        
          end
          endtask
          //----------------------------------------------------------------------
          // Combinational logic
          //----------------------------------------------------------------------
        
          // We use a behavioral hack to easily detect when we have sent all the
          // valid messages in the test source. We used to use this:
          //
          //  assign done = !reset_reg && ( m[index] === {p_msg_nbits{1'bx}} );
          //
          // but Ackerley Tng found an issue with this approach. You can see an
          // example in this journal post:
          //
          //  http://brg.csl.cornell.edu/wiki/alt53-2014-03-08
          //
          // So now we keep the done signal high until the test source is reset.
        
          // always_comb begin
          //   if ( reset_reg ) begin
          //     done = 1'b0;
          //   end else begin
          //     if ( ~done ) begin
          //       done = m[index] === {p_msg_nbits{1'bx}};
          //     end
          //   end
          // end
        
 000420   logic done_next;
          assign done_next =  ( index == ( index_max ) );
        
 036066   always_ff @( posedge clk ) begin
 002184     if(reset_reg) done <=0;
 000990     if( val && rdy ) done <= done_next;
          end
        
          // Set the source message appropriately
        
          assign msg = m[index];
        
          // Source message interface is valid as long as we are not done
        
          assign val = !reset_reg && !done;
        
          // The go signal is high when a message is transferred
        
 001980   logic go;
          assign go = val && rdy;
        
          // We bump the index pointer every time we successfully send a message,
          // otherwise the index stays the same.
        
          assign index_en   = go;
          assign index_next = index + 1'b1;
        
          //----------------------------------------------------------------------
          // Assertions
          //----------------------------------------------------------------------
        
 036066   always_ff @( posedge clk ) begin
 002028     if ( !reset ) begin
%000000       `VC_ASSERT_NOT_X( val );
%000000       `VC_ASSERT_NOT_X( rdy );
            end
          end
        
        endmodule
        
        `endif /* VC_TEST_SOURCE_V */
        
