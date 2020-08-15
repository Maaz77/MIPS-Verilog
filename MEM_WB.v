`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:10:32 12/05/2018 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
	input clk,
	input data_hit,
	input [1:0]control_wb_in,
	input [31:0]Read_data_in,
	input [31:0]ALU_rslt_in,
	input [4:0]Write_reg_in,
	output reg [1:0] mem_control_wb,
	output reg [31:0] Read_data,
	output reg [31:0] mem_ALU_result,
	output reg [4:0] mem_Write_reg
    );
	 
	 always @(posedge clk)
	 begin
		if(data_hit)
		begin	
			mem_control_wb = control_wb_in;
			Read_data = Read_data_in;
			mem_ALU_result = ALU_rslt_in;
			mem_Write_reg = Write_reg_in;
		end
	 end


endmodule
