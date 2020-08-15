`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:27:33 12/05/2018
// Design Name:   ID_EX
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/ID_EX_test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID_EX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ID_EX_test;

	// Inputs
	reg clk;
	reg data_hit;
	reg [1:0] ctlwb_out;
	reg [2:0] ctlm_out;
	reg [3:0] ctlex_out;
	reg [31:0] npc;
	reg [31:0] readdata1;
	reg [31:0] readdata2;
	reg [31:0] signex_out;
	reg [4:0] instr_2016;
	reg [4:0] instr_1511;

	// Outputs
	wire [1:0] wb_ctlout;
	wire [2:0] m_ctlout;
	wire [3:0] ex_ctlout;
	wire [31:0] npcout;
	wire [31:0] rdata1out;
	wire [31:0] rdata2out;
	wire [31:0] s_extendout;
	wire [4:0] instrout_2016;
	wire [4:0] instrout_1511;

	// Instantiate the Unit Under Test (UUT)
	ID_EX uut (
		.clk(clk), 
		.data_hit(data_hit), 
		.ctlwb_out(ctlwb_out), 
		.ctlm_out(ctlm_out), 
		.ctlex_out(ctlex_out), 
		.npc(npc), 
		.readdata1(readdata1), 
		.readdata2(readdata2), 
		.signex_out(signex_out), 
		.instr_2016(instr_2016), 
		.instr_1511(instr_1511), 
		.wb_ctlout(wb_ctlout), 
		.m_ctlout(m_ctlout), 
		.ex_ctlout(ex_ctlout), 
		.npcout(npcout), 
		.rdata1out(rdata1out), 
		.rdata2out(rdata2out), 
		.s_extendout(s_extendout), 
		.instrout_2016(instrout_2016), 
		.instrout_1511(instrout_1511)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		data_hit = 1;
		ctlwb_out = 4;
		ctlm_out = 0;
		ctlex_out = 3;
		npc = 0;
		readdata1 = 4;
		readdata2 = 5;
		signex_out = 2;
		instr_2016 = 5;
		instr_1511 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		data_hit = 0;
		ctlwb_out = 4;
		ctlm_out = 3;
		ctlex_out = 1;
		npc = 4;
		readdata1 = 4;
		readdata2 = 2;
		signex_out = 2;
		instr_2016 = 5;
		instr_1511 = 1;
		
		#100;
		data_hit = 1;
		ctlwb_out = 4;
		ctlm_out = 3;
		ctlex_out = 1;
		npc = 4;
		readdata1 = 2;
		readdata2 = 2;
		signex_out = 3;
		instr_2016 = 5;
		instr_1511 = 4;
		
        
		// Add stimulus here

	end
	always
	begin
		#50
		clk = ~clk;
	end
      
      
endmodule

