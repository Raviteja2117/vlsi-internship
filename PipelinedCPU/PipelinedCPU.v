`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:44:22 04/09/2025 
// Design Name: 
// Module Name:    PipelinedCPU 
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
module PipelinedCPU (
    input wire clk,
    input wire reset
);

   
    reg [7:0] registers [0:15];         
    reg [15:0] instr_mem [0:15];        
    reg [7:0] data_mem [0:15];          
    reg [3:0] PC;                       

    integer i; 
    reg [15:0] IF_ID_instr;

    reg [3:0] ID_EX_opcode, ID_EX_rd;
    reg [7:0] ID_EX_op1, ID_EX_op2;

    reg [3:0] EX_WB_rd;
    reg [7:0] EX_WB_result;

  
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            PC <= 0;
            IF_ID_instr <= 0;
        end else begin
            IF_ID_instr <= instr_mem[PC];
            PC <= PC + 1;
        end
    end

 
    always @(posedge clk) begin
        ID_EX_opcode <= IF_ID_instr[15:12];
        ID_EX_rd     <= IF_ID_instr[11:8];
        ID_EX_op1    <= registers[IF_ID_instr[7:4]];
        ID_EX_op2    <= registers[IF_ID_instr[3:0]];
    end

   
    always @(posedge clk) begin
        case (ID_EX_opcode)
            4'b0000: EX_WB_result <= ID_EX_op1 + ID_EX_op2;      // ADD
            4'b0001: EX_WB_result <= ID_EX_op1 - ID_EX_op2;      // SUB
            4'b0010: EX_WB_result <= data_mem[ID_EX_op2[3:0]];   // LOAD
            default: EX_WB_result <= 8'h00;
        endcase
        EX_WB_rd <= ID_EX_rd;
    end

   
    always @(posedge clk) begin
        registers[EX_WB_rd] <= EX_WB_result;
    end

    
    initial begin
        
        instr_mem[0] = 16'b0010_0001_0000_0101; // LOAD R1, [5]
        instr_mem[1] = 16'b0010_0010_0000_0110; // LOAD R2, [6]
        instr_mem[2] = 16'b0000_0011_0001_0010; // ADD R3, R1, R2
        instr_mem[3] = 16'b0001_0100_0001_0010; // SUB R4, R1, R2

       
        data_mem[5] = 8'd20;
        data_mem[6] = 8'd8;

        for (i = 0; i < 16; i = i + 1) begin
            registers[i] = 0;
        end
    end

endmodule
