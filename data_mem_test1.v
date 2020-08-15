`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:13:40 12/05/2018
// Design Name:   memoryStage
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/data_mem_test1.v
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

module data_mem_test1;

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
		MemWrite = 1;
		aluRslt = 3;
		datafrmreg = 5;

		// Wait 100 ns for global reset to finish
		#100;
		MemRead = 1;
		MemWrite = 0;
        
		// Add stimulus here

	end
	always
	begin
		#50
		clk = ~clk;
	end
      
endmodule

