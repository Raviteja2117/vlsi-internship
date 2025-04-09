`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:59:29 04/09/2025
// Design Name:   FIRfilter
// Module Name:   C:/Users/AJAY KUMAR/Desktop/vlsi/FIRfilter/FIRfilter_tb.v
// Project Name:  FIRfilter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIRfilter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FIRfilter_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [7:0] x_in;

	// Outputs
	wire [15:0] y_out;

	// Instantiate the Unit Under Test (UUT)
	FIRfilter uut (
		.clk(clk), 
		.rst(rst), 
		.x_in(x_in), 
		.y_out(y_out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		x_in = 0;

		#100;
        
		  clk = 0;
		rst = 1;
		x_in = 1;

		#100;
		// Add stimulus here

	end
      
endmodule

