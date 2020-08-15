`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:24:47 12/05/2018 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	input clk,
	input data_hit,
	input instruction_hit,
	input [29:0]npc,
	input [31:0]instr,
	output reg [29:0]npcout,
	output reg [31:0]instrout
    );	 
	initial begin
		npcout=32'bx;
		instrout=32'bx;
	end
	always @(posedge clk)
	begin
		if(instruction_hit && data_hit)
		begin
			npcout = npc;
			instrout = instr;
		end
	end
	
endmodule
