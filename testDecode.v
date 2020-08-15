`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:59:36 10/10/2018
// Design Name:   decode
// Module Name:   D:/3D/IDM/Idm dl/Documents/prog/Verilog/Computer_arc/testDecode.v
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

module testDecode;

	// Inputs
	reg [31:0] instruction;
	reg [31:0] writeData;
	reg [4:0] writeRegister;
	reg clk;
	reg regWrite;

	// Instantiate the Unit Under Test (UUT)
	decode uut (
		.instruction(instruction), 
		.writeData(writeData), 
		.writeRegister(writeRegister), 
		.clk(clk), 
		.regWrite(regWrite)
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

