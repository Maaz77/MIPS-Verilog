`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:16:56 11/28/2018
// Design Name:   InstructionFetch
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/fetch_tset.v
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

module fetch_tset;

	// Inputs
	reg clk;
	reg pcSrc;
	reg [29:0] branchAddr;
	reg rst;
	reg data_hit;

	// Outputs
	wire [29:0] adderOutput;
	reg [31:0] ins;
	wire hit;

	// Instantiate the Unit Under Test (UUT)
	InstructionFetch uut (
		.clk(clk), 
		.pcSrc(pcSrc), 
		.branchAddr(branchAddr), 
		.rst(rst), 
		.adderOutput(adderOutput), 
		.ins(ins), 
		.hit(hit)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		pcSrc = 0;
		branchAddr = 0;
		rst = 0;
		data_hit=1;

		// Wait 100 ns for global reset to finish
		#100;
		pcSrc = 1;
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

