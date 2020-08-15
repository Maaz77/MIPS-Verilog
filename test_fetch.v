`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:51:31 11/28/2018
// Design Name:   InstructionFetch
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/test_fetch.v
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

module test_fetch;

	// Inputs
	reg clk;
	reg pcSrc;
	reg [31:0] branchAddr;
	reg rst;
	// Outputs
	wire [31:0] adderOutput;
	wire [31:0] instruction;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	InstructionFetch uut (
		.clk(clk), 
		.pcSrc(pcSrc), 
		.rst(rst),
		.branchAddr(branchAddr), 
		.adderOutput(adderOutput), 
		.instruction(instruction), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pcSrc = 0;
		branchAddr = 0;
		rst = 1;

		// Wait 100 ns for global reset to finish
		#100;
		rst = 0;
        
		// Add stimulus here

	end
	always
	begin
		#50;
		clk = ~clk;
	end
      
endmodule

