`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:14:03 10/24/2018 
// Design Name: 
// Module Name:    controlUnit 
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
module controlUnit(
	input [5:0]ins_opCode,
	input clk,
	output reg RegDst,
	output reg ALUSrc,
	output reg MemtoReg,
	output reg RegWrite,
	output reg MemRead,
	output reg MemWrite,
	output reg Branch,
	output reg ALUOp1,
	output reg ALUOp0
    );
	
	always @(ins_opCode)
	begin
		case (ins_opCode)
			6'b000000: //R-format
			begin
				RegDst = 1; 
				ALUSrc = 0; 
				MemtoReg = 0;
				RegWrite = 1;
				MemRead = 0;
				MemWrite = 0;
				Branch = 0;
				ALUOp1 = 1;
				ALUOp0 = 0;
			end
			
			6'b100011: //lw
			begin
				RegDst = 0; 
				ALUSrc = 1; 
				MemtoReg = 1;
				RegWrite = 1;
				MemRead = 1;
				MemWrite = 0;
				Branch = 0;
				ALUOp1 = 0;
				ALUOp0 = 0;
			end
			
			6'b101011: //sw
			begin
				RegDst = 1'bx; 
				ALUSrc = 1; 
				MemtoReg = 1'bx;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 1;
				Branch = 0;
				ALUOp1 = 0;
				ALUOp0 = 0;
			end
			
			6'b000100: 
			begin
				RegDst = 1'bx; 
				ALUSrc = 0; 
				MemtoReg = 1'bx;
				RegWrite = 0;
				MemRead = 0;
				MemWrite = 0;
				Branch = 1;
				ALUOp1 = 0;
				ALUOp0 = 1;
			end
			default: 
			begin
				RegDst = 1'bx; 
				ALUSrc = 1'bx; 
				MemtoReg = 1'bx;
				RegWrite = 1'bx;
				MemRead = 1'bx;
				MemWrite = 1'bx;
				Branch = 1'bx;
				ALUOp1 = 1;
				ALUOp0 = 1;
			end
		endcase
	end
endmodule
