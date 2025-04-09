`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:25:51 04/09/2025
// Design Name:   ALU
// Module Name:   C:/Users/AJAY KUMAR/Desktop/vlsi/ALU/ALU_tb.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ALU_tb;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [2:0] ALU_Sel;

	// Outputs
	wire [7:0] Result;
	wire Zero;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALU_Sel(ALU_Sel), 
		.Result(Result), 
		.Zero(Zero)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		ALU_Sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		A = 0;
		B = 1;
		ALU_Sel = 0;
		#100;
		A = 1;
		B = 0;
		ALU_Sel = 0;
		#100;
		A = 1;
		B = 1;
		ALU_Sel = 0;
		#100;
        
		// Add stimulus here

	end
      
endmodule

