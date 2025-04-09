`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:58:33 04/09/2025 
// Design Name: 
// Module Name:    FIRfilter 
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
module FIRfilter #(
    parameter N = 4,                      
    parameter WIDTH = 8                 
)(
    input clk,
    input rst,
    input signed [WIDTH-1:0] x_in,        
    output reg signed [2*WIDTH-1:0] y_out 
);

    reg signed [WIDTH-1:0] coeffs [0:N-1];
    initial begin
        coeffs[0] = 8'd1;
        coeffs[1] = 8'd2;
        coeffs[2] = 8'd3;
        coeffs[3] = 8'd4;
    end

   
    reg signed [WIDTH-1:0] shift_reg [0:N-1];

    integer i;
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < N; i = i + 1) begin
                shift_reg[i] <= 0;
            end
            y_out <= 0;
        end else begin
          
            for (i = N-1; i > 0; i = i - 1) begin
                shift_reg[i] <= shift_reg[i-1];
            end
            shift_reg[0] <= x_in;

            
            y_out <= 0;
            for (i = 0; i < N; i = i + 1) begin
                y_out <= y_out + shift_reg[i] * coeffs[i];
            end
        end
    end
endmodule




