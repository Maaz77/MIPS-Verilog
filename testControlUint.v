`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:33:29 10/24/2018
// Design Name:   controlUnit
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/testControlUint.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testControlUint;

	// Inputs
	reg [5:0] ins_opCode;
	reg clk;

	// Outputs
	wire RegDst;
	wire ALUSrc;
	wire MemtoReg;
	wire RegWrite;
	wire MemRead;
	wire MemWrite;
	wire Branch;
	wire ALUOp1;
	wire ALUOp0;

	// Instantiate the Unit Under Test (UUT)
	controlUnit uut (
		.ins_opCode(ins_opCode), 
		.clk(clk), 
		.RegDst(RegDst), 
		.ALUSrc(ALUSrc), 
		.MemtoReg(MemtoReg), 
		.RegWrite(RegWrite), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.Branch(Branch), 
		.ALUOp1(ALUOp1), 
		.ALUOp0(ALUOp0)
	);

	initial begin
		// Initialize Inputs
		ins_opCode = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		ins_opCode = 6'b000_000;
		
		#100;
		ins_opCode = 6'b100_011;
		
		#100;
		ins_opCode = 6'b101_011;
		
		#100;
		ins_opCode = 6'b000_100;
		
		#100;
		ins_opCode = 6'b111_100;
        
		// Add stimulus here

	end
	
	always
	begin
		#50
		clk = ~clk;
	end
      
endmodule

