`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:24:17 10/17/2018 
// Design Name: 
// Module Name:    execution 
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
module execution(
	input clk,
	input [1:0]aluOp,
	input aluSrc,
	input regDst,
	input [31:0]readData1,
	input [31:0]readData2,
	input [4:0]dstReg1,
	input [4:0]dstReg2,
	input [29:0]pc,
	input [29:0]signExt,
	output reg zero,
	output reg [29:0] branchdst,
	output reg [31:0] aluRes,
	output reg [4:0] destReg
    );
	
	initial
	begin
		branchdst = 0;
		zero = 0;
		aluRes = 0;
		destReg = 0;
	end
	reg [2:0]aluControlInp;
	reg [31:0]aluSrcAns;
	 
	always @(*)
	begin
		if(aluOp == 0)
		begin
			aluControlInp = 3'b010;
		end
		if(aluOp == 1)
		begin
			aluControlInp = 3'b110;
		end
		if(aluOp == 2)
		begin
			if(signExt[5:0]== 6'b100000)
			begin
				aluControlInp = 3'b010;
			end
			if(signExt[5:0]== 6'b100010)
			begin
				aluControlInp = 3'b110;
			end
			if(signExt[5:0]== 6'b100100)
			begin
				aluControlInp = 3'b000;
			end
			if(signExt[5:0]== 6'b100101)
			begin
				aluControlInp = 3'b001;
			end
			if(signExt[5:0]== 6'b101010)
			begin
				aluControlInp = 3'b111;
			end
		end
	end
	 
	always @(*)
	begin
		branchdst = pc + (signExt);
		if(regDst)
		begin
			destReg = dstReg2;
		end
		else
		begin
			destReg = dstReg1;
		end
	
		if(aluSrc)
		begin
			aluSrcAns = (signExt);
		end
		else
		begin
			aluSrcAns = readData2;
		end
	end

	always @(*)
	begin
		if(aluControlInp == 2)
		begin
			aluRes = readData1 + aluSrcAns;
		end
		if(aluControlInp == 6)
		begin
			aluRes = readData1 - aluSrcAns;
		end
		if(aluControlInp == 0)
		begin
			aluRes = readData1 & aluSrcAns;
		end
		if(aluControlInp == 1)
		begin
			aluRes = readData1 | aluSrcAns;
		end
		if(aluControlInp == 7)
		begin
			aluRes = (readData1 < aluSrcAns)? 1: 0;
		end
		if(aluOp == 3)
		begin
			aluRes = 32'bx;
		end
	end

	always @(aluRes)
	begin
		zero = (aluRes != 32'b 0)? 0:1;
	end
	 


endmodule
