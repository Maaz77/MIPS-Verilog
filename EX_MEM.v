`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:53:31 12/05/2018 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
	input clk,
	input data_hit,
	input [1:0]ctlwb_out,
	input [2:0]ctlm_out,
	input [29:0]adder_out,
	input aluzero,
	input [31:0]aluout,
	input [31:0]readdata2,
	input [4:0]muxout,
	
	output reg [1:0]wb_ctlout,
	output reg [2:0]m_ctlout,
	output reg [29:0]add_result,
	output reg zero,
	output reg [31:0]alu_result,
	output reg [31:0]rdata2out,
	output reg [4:0]five_bit_muxout
    );
	initial begin
		wb_ctlout= 2'bx;
		m_ctlout= 3'bx;
		add_result= 32'bx;
		zero= 1'bx;
		alu_result=32'bx;
		rdata2out=32'bx;
		five_bit_muxout=5'bx;
	end
	

	always @(posedge clk)
	begin
		if(data_hit)
		begin
			wb_ctlout = ctlwb_out;
			m_ctlout = ctlm_out;
			add_result = adder_out;
			zero = aluzero;
			alu_result = aluout;
			rdata2out = readdata2;
			five_bit_muxout = muxout;
		end
	end


endmodule
