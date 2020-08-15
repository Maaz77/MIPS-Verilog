`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:22:59 10/17/2018
// Design Name:   execution
// Module Name:   D:/3D/IDM/Idm dl/Documents/prog/Verilog/Computer_arc/testExe.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: execution
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testExe;

	// Inputs
	reg clk;
	reg [1:0] aluOp;
	reg aluSrc;
	reg regDst;
	reg [31:0] readData1;
	reg [31:0] readData2;
	reg [4:0] dstReg1;
	reg [4:0] dstReg2;
	reg [29:0] pc;
	reg [29:0] signExt;

	// Outputs
	wire zero;
	wire [29:0] branchdst;
	wire [31:0] aluRes;
	wire [4:0] destReg;

	// Instantiate the Unit Under Test (UUT)
	execution uut (
		.clk(clk), 
		.aluOp(aluOp), 
		.aluSrc(aluSrc), 
		.regDst(regDst), 
		.readData1(readData1), 
		.readData2(readData2), 
		.dstReg1(dstReg1), 
		.dstReg2(dstReg2), 
		.pc(pc), 
		.signExt(signExt), 
		.zero(zero), 
		.branchdst(branchdst), 
		.aluRes(aluRes), 
		.destReg(destReg)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		aluOp = 'b10;
		aluSrc = 1;
		regDst = 0;
		readData1 = 32'b10;
		readData2 = 32'b10;
		dstReg1 = 0;
		dstReg2 = 0;
		pc = 4;
		signExt = 32'b100010;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end 
	always
	begin
		#50
		clk = ~clk;
	end
      
endmodule

