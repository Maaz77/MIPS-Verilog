`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:51:34 01/01/2019
// Design Name:   memoryStage
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/mem_test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memoryStage
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mem_test;

	// Inputs
	reg clk;
	reg zero;
	reg branch;
	reg MemRead;
	reg MemWrite;
	reg [31:0] aluRslt;
	reg [31:0] datafrmreg;

	// Outputs
	wire hit;
	wire pcSrc;
	wire [31:0] readdata;
	wire [31:0] aluRsltt;

	// Instantiate the Unit Under Test (UUT)
	memoryStage uut (
		.clk(clk), 
		.zero(zero), 
		.branch(branch), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.aluRslt(aluRslt), 
		.datafrmreg(datafrmreg), 
		.hit(hit), 
		.pcSrc(pcSrc), 
		.readdata(readdata), 
		.aluRsltt(aluRsltt)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		zero = 0;
		branch = 0;
		MemRead = 0;
		MemWrite = 0;
		aluRslt = 0;
		datafrmreg = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

