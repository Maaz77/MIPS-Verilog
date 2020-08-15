`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:34:06 12/05/2018
// Design Name:   IF_ID
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/test_IF_ID.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF_ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_IF_ID;

	// Inputs
	reg clk;
	reg data_hit;
	reg instruction_hit;
	reg [31:0] npc;
	reg [31:0] instr;

	// Outputs
	wire [31:0] npcout;
	wire [31:0] instrout;

	// Instantiate the Unit Under Test (UUT)
	IF_ID uut (
		.clk(clk), 
		.data_hit(data_hit), 
		.instruction_hit(instruction_hit), 
		.npc(npc), 
		.instr(instr), 
		.npcout(npcout), 
		.instrout(instrout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		data_hit = 0;
		instruction_hit = 0;
		npc = 0;
		instr = 0;

		// Wait 100 ns for global reset to finish
		#100;
		data_hit = 1;
		instruction_hit = 1;
		npc = 10;
		instr = 10;
		
		#100;
		data_hit = 0;
		instruction_hit = 1;
		npc = 10;
		instr = 10;
        
		// Add stimulus here

	end
	always
	begin
		#50
		clk = ~clk;
	end
      
endmodule

