`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:38:01 12/04/2018
// Design Name:   dataMemCache
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dataMemCache
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [127:0] mem;
	reg clk;
	reg MemRead;
	reg MemWrite;
	reg [31:0] address;

	// Outputs
	wire hit;
	wire [31:0] readdata;

	// Instantiate the Unit Under Test (UUT)
	dataMemCache uut (
		.mem(mem), 
		.clk(clk), 
		.MemRead(MemRead), 
		.MemWrite(MemWrite), 
		.address(address), 
		.hit(hit), 
		.readdata(readdata)
	);

	initial begin
		// Initialize Inputs
		mem = 5;
		clk = 0;
		MemRead = 1;
		MemWrite = 0;
		address = 0;

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

