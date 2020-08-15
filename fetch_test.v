`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:05:26 01/01/2019
// Design Name:   InstructionFetch
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/fetch_test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionFetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fetch_test;

	// Inputs
	reg clk;
	reg pcSrc;
	reg [29:0] branchAddr;
	reg rst;
	reg data_hit;

	// Outputs
	wire [31:0] ins;
	wire [29:0] adderOutput;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	InstructionFetch uut (
		.clk(clk), 
		.pcSrc(pcSrc), 
		.branchAddr(branchAddr), 
		.rst(rst), 
		.data_hit(data_hit), 
		.ins(ins), 
		.adderOutput(adderOutput), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pcSrc = 0;
		branchAddr = 0;
		rst = 0;
		data_hit = 1;

		// Wait 100 ns for global reset to finish
		#100;
		pcSrc = 0;
		branchAddr = 31;
		rst = 0;

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

