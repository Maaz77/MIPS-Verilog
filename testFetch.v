`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:55:39 10/11/2018
// Design Name:   fetch
// Module Name:   D:/3D/IDM/Idm dl/Documents/prog/Verilog/Computer_arc/testFetch.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fetch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testFetch;

	// Inputs
	reg clk;
	reg pcSrc;
	reg [31:0] branchAddr;

	// Outputs
	wire [31:0] adderOutput;
	wire [31:0] instruction;

	// Instantiate the Unit Under Test (UUT)
	fetch uut (
		.clk(clk), 
		.pcSrc(pcSrc), 
		.branchAddr(branchAddr), 
		.adderOutput(adderOutput), 
		.instruction(instruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pcSrc = 0;
		branchAddr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		pcSrc = 1;
		branchAddr = 10;
	
		#100;
		pcSrc = 0;
		branchAddr = 5;
        
		// Add stimulus here

	end
	always
	begin
		#50;
		clk = ~clk;
	end
      
endmodule

