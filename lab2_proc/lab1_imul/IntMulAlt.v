//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

`ifndef LAB1_IMUL_INT_MUL_ALT_V
`define LAB1_IMUL_INT_MUL_ALT_V

`include "vc/trace.v"

// ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Define datapath and control unit here.
// '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

//=========================================================================
// Integer Multiplier Variable-Latency Implementation
//=========================================================================

module lab1_imul_IntMulAlt
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg
);

  // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''''
  // Instantiate datapath and control models here and then connect them
  // together.
  // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
	logic [1:0] state, new_state;
	logic req_rdy, resp_val, in_val;

	assign istream_rdy = req_rdy & (state == 0);
	assign ostream_val = resp_val & (state == 2);
	assign in_val = istream_rdy && istream_val;

	multiplier2 multi(clk, reset, in_val, req_rdy, istream_msg, resp_val, ostream_rdy, ostream_msg);
	

	//State transition logic
	assign new_state = (reset || state == 0 && !in_val || state == 2 && ostream_rdy) ? 0:
					(state == 0 && in_val || !resp_val) ? 1 : 2; 

	//Update fsm state
	always @(posedge clk) begin
		state <= new_state;
	end
  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin

    $sformat( str, "%x", istream_msg );
    vc_trace.append_val_rdy_str( trace_str, istream_val, istream_rdy, str );

    vc_trace.append_str( trace_str, "(" );

    // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Add additional line tracing using the helper tasks for
    // internal state including the current FSM state.
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

    vc_trace.append_str( trace_str, ")" );

    $sformat( str, "%x", ostream_msg );
    vc_trace.append_val_rdy_str( trace_str, ostream_val, ostream_rdy, str );

  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

//Jumps over streaks of 8 zeroes or less  in B at a time

module multiplier2
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [63:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [31:0] ostream_msg
);
	logic [31:0] req_msg_a, req_msg_b;
	assign {req_msg_a, req_msg_b} = istream_msg;
	
	logic [5:0] counter;
	logic [31:0] a_reg, b_reg, a_new, b_new, msg_new;
	

	left_shifter ls_block(istream_rdy ? req_msg_a : a_reg, jump(istream_rdy ? req_msg_b[7:1] : b_reg[7:1]),  a_new);
	right_shifter rs_block(istream_rdy ? req_msg_b : b_reg, jump(istream_rdy ? req_msg_b[7:1] : b_reg[7:1]), b_new);
	adder add_mul_block(istream_rdy ? req_msg_a : a_reg, ostream_msg, msg_new);

	always @(posedge clk) begin
		if (reset) 
			begin
				a_reg <= 32'b0;
				b_reg <= 32'b0;
				counter <= 0;
				istream_rdy <= 1;
				ostream_msg <= 0;
				ostream_val <= 0;
			end
		else if (istream_val) //Calc
			begin
				a_reg <= a_new; 
				b_reg <= b_new;
				counter <= {2'b0, jump(req_msg_b[7:1])};
				istream_rdy <= 0;
				ostream_val <= 0;
				ostream_msg <= req_msg_b[0] ? req_msg_a : 0;
			end
		else if (!istream_rdy && counter < 32)  //Calc after valid request
			begin
				ostream_msg <= b_reg[0] ? msg_new : ostream_msg;
				counter <= counter + {2'b0, jump(b_reg[7:1])};
				a_reg <= a_new;
				b_reg <= b_new;
			end
		else //Done or Idle
			begin
				ostream_val <= 1;
				istream_rdy <= 1;
			end		
	end
	
	
	function [3:0] jump 
	(input [6:0] b);
		casez (b)
			7'b0000000: jump = 4'd8;
			7'b1000000: jump = 4'd7;
			7'b?100000: jump = 4'd6;
			7'b??10000: jump = 4'd5;
			7'b???1000: jump = 4'd4;
			7'b????100: jump = 4'd3;
			7'b?????10: jump = 4'd2;
			default: jump = 4'd1;
		endcase
	endfunction
endmodule

module adder
(
	input [31:0] a,
	input [31:0] b,
	output [31:0] sum
);

assign sum = a + b;

endmodule

module left_shifter
(
	input [31:0] a,
	input [3:0] shamt,
	output [31:0] result
);

assign result = a << shamt;

endmodule

module right_shifter
(
	input [31:0] a,
	input [3:0] shamt,
	output [31:0] result
);

assign result = a >> shamt;
endmodule
`endif /* LAB1_IMUL_INT_MUL_ALT_V */
