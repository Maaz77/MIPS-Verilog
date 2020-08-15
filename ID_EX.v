`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:20 12/05/2018 
// Design Name: 
// Module Name:    ID_EX 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ID_EX(
	input clk,
	input data_hit,
	input [1:0]ctlwb_out,
	input [2:0]ctlm_out,
	input [3:0]ctlex_out,
	input [29:0]npc,
	input [31:0]readdata1,
	input [31:0]readdata2,
	input [29:0]signex_out,
	input [4:0]instr_2016,
	input [4:0]instr_1511,
	output reg [1:0]wb_ctlout,
	output reg [2:0]m_ctlout,
	output reg [3:0]ex_ctlout,
	output reg [29:0]npcout,
	output reg [31:0]rdata1out,
	output reg [31:0]rdata2out,
	output reg [29:0]s_extendout,
	output reg [4:0]instrout_2016,
	output reg [4:0]instrout_1511
    );
	 
	initial begin
		wb_ctlout=2'bx;
		m_ctlout=3'bx;
		ex_ctlout=4'bx;
		npcout=30'bx;
		rdata1out=32'bx;
		rdata2out=32'bx;
		s_extendout=30'bx;
		instrout_2016=5'bx;
		instrout_1511=5'bx;	
	end

	always @(posedge clk)
	begin
		if(data_hit)
		begin
			wb_ctlout=ctlwb_out;
			m_ctlout=ctlm_out;
			ex_ctlout=ctlex_out;
			npcout=npc;
			rdata1out=readdata1;
			rdata2out=readdata2;
			s_extendout=signex_out;
			instrout_2016=instr_2016;
			instrout_1511=instr_1511;
		end
	end


endmodule
