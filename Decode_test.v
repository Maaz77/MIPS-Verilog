`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:14:19 01/01/2019
// Design Name:   decode
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/Decode_test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decode
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Decode_test;

	// Inputs
	reg [31:0] instruction;
	reg [31:0] writeData;
	reg [4:0] writeRegister;
	reg clk;
	reg regWrite;

	// Outputs
	wire [31:0] readData1;
	wire [31:0] readData2;
	wire [4:0] insaddress1;
	wire [4:0] insaddress2;
	wire [29:0] signExt;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.instruction(instruction), 
		.writeData(writeData), 
		.writeRegister(writeRegister), 
		.clk(clk), 
		.regWrite(regWrite), 
		.readData1(readData1), 
		.readData2(readData2), 
		.insaddress1(insaddress1), 
		.insaddress2(insaddress2), 
		.signExt(signExt)
	);

	initial begin
		// Initialize Inputs
		instruction =32'b 000001_00100_01000_10000_00000_111111;
		writeData = 10;
		writeRegister = 2;
		clk = 0;
		regWrite = 1;
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

