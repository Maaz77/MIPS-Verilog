`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:21:02 12/12/2018 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input MemtoReg,
	input [31:0]readdata,
	input [31:0]aluRsltt,
	output reg [31:0]res
    );
	always @(*)
	begin
		if(MemtoReg)
		begin
			res = readdata;
		end
		else
		begin
			res = aluRsltt;
		end
	end

endmodule
