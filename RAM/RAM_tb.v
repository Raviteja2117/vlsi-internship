`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:30:41 04/09/2025
// Design Name:   RAM
// Module Name:   C:/Users/AJAY KUMAR/Desktop/vlsi/RAM/RAM_tb.v
// Project Name:  RAM
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM_tb;

	// Inputs
	reg clk;
	reg we;
	reg [3:0] addr;
	reg [7:0] din;

	// Outputs
	wire [7:0] dout;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.clk(clk), 
		.we(we), 
		.addr(addr), 
		.din(din), 
		.dout(dout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		we = 0;
		addr = 0;
		din = 0;

		#100;
		clk = 0;
			we = 0;
		addr = 0;
		din = 1;

		#100;
		clk = 0;
			we = 0;
		addr = 1;
		din = 0;

		#100;


			we = 0;
		addr = 1;
		din = 1;

		#100;
		
			we = 1;
		addr = 0;
		din = 0;

		#100;
		
			we = 1;
		addr = 0;
		din = 1;

		#100;
		
			we = 1;
		addr = 1;
		din = 0;

		#100;
		we = 1;
		addr = 1;
		din = 1;

		#100;
		// Add stimulus here

	end
      
endmodule

