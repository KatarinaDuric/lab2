//      // verilator_coverage annotation
        //========================================================================
        // Verilog Components: Drop Unit
        //========================================================================
        // Drop unit allows dropping a packet when the drop signal is high. This
        // is useful especially in pipelined processor, when a squash should drop
        // a late arriving memory response.
        
        `ifndef LAB2_PROC_DROP_UNIT_V
        `define LAB2_PROC_DROP_UNIT_V
        
        module lab2_proc_DropUnit
        #(
          parameter p_msg_nbits = 1
        )
        (
 038508   input  logic                   clk,
 000104   input  logic                   reset,
        
          // the drop signal will drop the next arriving packet
        
 000536   input  logic                   drop,
        
 002318   input  logic [p_msg_nbits-1:0] istream_msg,
 009425   input  logic                   istream_val,
 004426   output logic                   istream_rdy,
        
 002318   output logic [p_msg_nbits-1:0] ostream_msg,
 009175   output logic                   ostream_val,
 004426   input  logic                   ostream_rdy
        );
        
          localparam c_state_pass = 1'b0;
          localparam c_state_drop = 1'b1;
        
 000286   logic state;
 000286   logic next_state;
 010159   logic istream_go;
        
          assign istream_go = istream_rdy && istream_val;
        
          // assign output message same as input message
        
          assign ostream_msg = istream_msg;
        
          // next state
        
 057814   always_comb begin
 000543     if ( state == c_state_pass ) begin
        
              // we only go to drop state if there is a drop request and we cannot
              // drop it right away (!istream_en)
 000429       if ( drop && !istream_go )
 000429         next_state = c_state_drop;
              else
 056842         next_state = c_state_pass;
        
 000543     end else begin
        
              // if we are in the drop mode and a message arrives, we can go back
              // to pass state
 000114       if ( istream_go )
 000429         next_state = c_state_pass;
              else
 000114         next_state = c_state_drop;
        
            end
          end
        
          // state outputs
        
 019202   always_comb begin
 000181     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 019021       ostream_val = istream_val && !drop;
        
 000181     end else begin
        
              // we just drop the packet
 000181       ostream_val = 1'b0;
        
            end
          end
        
 057814 always_comb begin
 000543     if ( state == c_state_pass ) begin
        
              // we combinationally take care of dropping if the packet is already
              // available
 057271       istream_rdy  = ostream_rdy;
        
 000543     end else begin
        
              // we just drop the packet
 000543       istream_rdy  = 1'b1;
        
            end
          end
          // state transitions
        
 019202   always_ff @( posedge clk ) begin
        
 001352     if ( reset )
 001352       state <= c_state_pass;
            else
 017850       state <= next_state;
        
          end
        
        endmodule
        
        `endif /* LAB2_PROC_DROP_UNIT_V */
        
        
