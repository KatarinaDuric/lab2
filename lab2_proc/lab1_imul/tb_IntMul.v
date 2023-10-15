//========================================================================
// tb_IntMul
//========================================================================
// A basic Verilog test bench for the multiplier

`default_nettype none
`timescale 1ps/1ps

`ifndef DESIGN
  `define DESIGN IntMulBase
`endif

`include `"`DESIGN.v`"
`include "vc/trace.v"

//------------------------------------------------------------------------
// Top-level module
//------------------------------------------------------------------------

module top(  input logic clk, input logic linetrace );

  // DUT signals
  logic        reset;

  logic        istream_val;
  logic        istream_rdy;
  logic [63:0] istream_msg;

  logic        ostream_rdy;
  logic        ostream_val;
  logic [31:0] ostream_msg;

  // Testbench signals
  logic        istream_val_f;
  logic        ostream_rdy_f;

  logic [31:0] istream_msg_a;
  logic [31:0] istream_msg_b;

  // Form istream_msg
  always_comb begin
    istream_msg[63:32] = istream_msg_a;
    istream_msg[31: 0] = istream_msg_b;
  end

  //----------------------------------------------------------------------
  // Module instantiations
  //----------------------------------------------------------------------
  
  // Instantiate the multiplier

  lab1_imul_`DESIGN imul
  (
    .clk   (clk),
    .reset (reset),
    .istream_val(istream_val),
    .istream_rdy(istream_rdy),
    .istream_msg(istream_msg),
    .ostream_val   (ostream_val),
    .ostream_rdy   (ostream_rdy),
    .ostream_msg   (ostream_msg)
  );

  initial begin 
    while(1) begin
      @(negedge clk);  
      if (linetrace) begin
           imul.display_trace;
      end
    end 
    $stop;
   end

  //----------------------------------------------------------------------
  // Run the Test Bench
  //----------------------------------------------------------------------

  initial begin

    $display("Start of Testbench");
    // Send reset and init values of all signals
    reset         = 1;
    istream_msg_a = 0;
    istream_msg_b = 0;
    istream_val   = 0;

    // After a moment, de-assert reset
    #10 
    reset = 0;

    //--------------------------------------------------------------------
    // Test cases
    //--------------------------------------------------------------------

    // Align test bench with negedge so that it looks better
    #10
    @(negedge clk); 

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #1
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #1");

    //Set inputs
    istream_msg_a = 32'd2;
    istream_msg_b = 32'd3;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 6 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #2
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #2");
    
    //Set inputs
    istream_msg_a = 32'd4;
    istream_msg_b = 32'd5;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 20 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #3
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #3");

    //Set inputs
    istream_msg_a = 32'd3;
    istream_msg_b = 32'd4;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;
    
    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 12 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #4
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #4");

    //Set inputs
    istream_msg_a = 32'd10;
    istream_msg_b = 32'd13;
    istream_val   =  1'b1;
    ostream_rdy   =  1'b1;
    
    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // Deassert ready input
    if(!ostream_val) @(ostream_val);// Wait for response
    @(negedge clk); // read at low clk
    
    // Check the result
    assert ( 130 == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", 
                istream_msg_a, istream_msg_b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", 
              istream_msg_a, istream_msg_b, ostream_msg );
    end
   
    #10
    @(negedge clk);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Test #5
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    $display("Example Test #5");
    
    // We can simplify Testbench with tasks (declared below)
    test_task(8,7);

    #10;


	//TODO : Generate more direct tests

   // Test: 1 * 0
 $display("Directed Test #1");
    test_task(32'd1, 32'd0);

    // Test: 1* -1
 $display("Directed Test #2");
    test_task(32'hFFFFFFFF, 32'd1);

    // Test: -1 * 0
 $display("Directed Test #3");
    test_task(32'hFFFFFFFF, 32'd0);

    // Test: -1 * -1 
 $display("Directed Test #4");
    test_task(32'hFFFFFFFF, 32'hFFFFFFFF);

    // Test: 3, -2 
 $display("Directed Test #5");
    test_task(32'hFFFFFFFD, 32'hFFFFFFFE);

    // Test: -3, 4
 $display("Directed Test #6");
    test_task(32'hFFFFFFFD, 32'd4);

    // Test: -2,-5
 $display("Directed Test #7");
    test_task(32'hFFFFFFFE,32'hFFFFFFFB);

    // Test: -69420 * 4338
 $display("Directed Test #8");
    test_task(32'hFFFEF0D4, 32'h000010F2);
 
    // Test: 123456 * 7890
 $display("Directed Test #9");
    test_task(32'h0001E240, 32'h00001ED2);

    // Test: 123456 * -7890
 $display("Directed Test #10");
    test_task(32'h0001E240, 32'hFFFFE12E);

    // Test: -12345 * -69420
 $display("Directed Test #11");
    test_task(32'hFFFFCFC7, 32'hFFFEF0D4);
    
    // Test: Lower bits masked off
  $display("Directed Test #12");
    test_task(32'hAAAAXXXX, 32'h00001ED2);

  // Test: Upper Bits masked off
  $display("Directed Test #13");
    test_task(32'hXXXXAAAA, 32'h00001ED2);
  
  // Test: Middle Bits masked off
  $display("Directed Test #14");
    test_task(32'hAAXXXXAA, 32'h00001ED2);

  // Test: Sparse numbers many zeros few ones
  $display("Directed Test #15");
    test_task(32'h10000001, 32'h10001000);

  // Test: Dense numbers many ones few zeros
  $display("Directed Test #16");
    test_task(32'hFEFFFFEF, 32'hFFFFFFEF);

  // Test: Dense numbers sparse numbers
  $display("Directed Test #17");
    test_task(32'h7FFFFFFE, 32'h10000001);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Random Tests
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    
    $display("Random Test");
    for( integer x = 0; x < 5; x++ ) begin
      test_task( $random, $random );
    end
    

    //TODO : Generate different random test cases
            test_task(0, $random);
            test_task(1, $random);
            test_task(32'hFFFFFFFF, $random);
            //Small pos small neg
            $display("Small pos small neg");
            test_task(32'd7 & $random, ~(32'd7) | $random);
            //Small neg small pos
            $display("Small neg small pos");
            test_task((32'hFFFFFF0 | $random), 32'd7 & $random);
            //Small neg small neg
            $display("Small neg small neg");
            test_task((32'hFFFFFFF0 | $random), (32'hFFFFFFF0 | $random));
            //Large pos large pos
            $display("Large pos large pos");
            test_task(32'h10000000 | (32'h7FFFFFFF & $random), 32'h10000000 | (32'h7FFFFFFF & $random));
            //Large pos large neg
            $display("Large pos large neg");
            test_task(32'h10000000 | (32'h7FFFFFFF & $random), 32'h800000FF & (32'd80000000 | $random));
            //Large neg large pos
            $display("Large neg large pos");
            test_task(32'h800000FF & (32'h80000000 | $random), 32'h10000000 | (32'h7FFFFFFF & $random));
            //Large neg large neg
            $display("Large neg large neg");
            test_task(32'h800000FF & (32'h80000000 | $random), 32'h800000FF & (32'h80000000 | $random));
            //Bottom bits masked off
            $display("Bottom bits masked off");
            test_task($random, ~(32'h000000FF) & $random);
            //Middle bits masked off
            $display("Middle bits masked off");
            test_task($random, ~(32'h00FFFF00) & $random);
            //Sparse with few ones
            $display("Sparse with few ones");
            test_task($random,  32'h88888888 & $random);
            //Dense with few zeroes
            $display("Dense with few zeroes");
            test_task($random, 32'hEEEEEEEE | $random);

    // Finish the testbench
    
    @(negedge clk);
    $display("Testbench finished at %d cycles", ($time()-10)/2 );
    
    // Delay for a better waveform
    #10;
    $finish;

  end

  //--------------------------------------------------------------------
  // test_task definition
  //--------------------------------------------------------------------
  // Here is a tasks that test the DUT when given 2 numbers a and b 
  //
  // Notice that the functionality is identical to the examples above

  task test_task( [31:0] a,  [31:0] b );
  begin

    // Change inputs at the negedge
    @(negedge clk);

    // Set inputs
    istream_msg_a = a;
    istream_msg_b = b;
    istream_val   = 1'b1;
    ostream_rdy   = 1'b0;

    while(!istream_rdy) @(negedge clk); // Wait until ready is asserted
    @(negedge clk); // Move to next cycle.
    
    istream_val = 1'b0; // No more ready input
    ostream_rdy = 1'b1; // Ready for output

    if(!ostream_val) @(ostream_val);// Wait for response
    
    // Check the result
    assert ( (a * b) == ostream_msg) begin
      pass(); // Book keeping
      $display( "OK: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
    end
    else begin
      fail(); // Book keeping
      $error( "Failed: in0 = %d, in1 = %d, out = %d", a, b, ostream_msg );
    end

    @(negedge clk);
  end
  endtask
endmodule
