`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:00:45 11/28/2018
// Design Name:   InstructionFetch
// Module Name:   C:/Users/ASUS/Downloads/Computer_arc/Computer_arc/ali.v
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

module ali;

	// Inputs
	reg clkk;
	reg pcSrc;
	reg [31:0] branchAddr;
	reg rstt;

	// Outputs
	wire [31:0] adderOutput;
	wire [31:0] ins;
	wire hitt;

	// Instantiate the Unit Under Test (UUT)//
	InstructionFetch uut (
		.clkk(clkk), 
		.pcSrc(pcSrc), 
		.branchAddr(branchAddr), 
		.rstt(rstt), 
		.adderOutput(adderOutput), 
		.ins(ins), 
		.hitt(hitt)
	);

	initial begin
		// Initialize Inputs
		clkk = 0;
		pcSrc = 0;
		branchAddr = 0;
		rstt = 0;
		#100;
			rstt=1;
		#100;
			rstt=0;//
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
   always #50 clkk=~clkk;
endmodule

