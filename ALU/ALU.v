`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:24:13 04/09/2025 
// Design Name: 
// Module Name:    ALU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU (
    input  [7:0] A,
    input  [7:0] B,
    input  [2:0] ALU_Sel,
    output reg [7:0] Result,
    output Zero
);

always @(*) begin
    case (ALU_Sel)
        3'b000: Result = A + B;     // ADD
        3'b001: Result = A - B;     // SUB
        3'b010: Result = A & B;     // AND
        3'b011: Result = A | B;     // OR
        3'b100: Result = ~A;        // NOT
        default: Result = 8'b0;     // Default to zero
    endcase
end

assign Zero = (Result == 8'b0) ? 1'b1 : 1'b0;


endmodule
