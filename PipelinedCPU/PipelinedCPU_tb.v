`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:56:05 04/09/2025
// Design Name:   PipelinedCPU
// Module Name:   C:/Users/AJAY KUMAR/Desktop/vlsi/PipelinedCPU/PipelinedCPU_tb.v
// Project Name:  PipelinedCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PipelinedCPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PipelinedCPU_tb;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	PipelinedCPU uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 1;
		reset = 1;
		
        
		// Add stimulus here

	end
      
endmodule

