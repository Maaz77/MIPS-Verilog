`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:33:00 10/11/2018 
// Design Name: 
// Module Name:    fetch 
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
module fetch(
	input clk,
	input pcSrc,
	input [31:0]branchAddr,
	output wire [31:0]adderOutput,
	output reg [31:0]instruction
    );
	reg [31:0]insMem[1023:0];
	reg [31:0]pc;
	integer i;
	
	initial
	begin
		pc=0;
		instruction = insMem[pc];
		for(i=0;i<1024;i=i+1)
		begin
			insMem[i]=i+4;
		end
	end
	always @(posedge clk)
	begin
		instruction = insMem[pc];
		
		if(pcSrc)
		begin
			pc = branchAddr;
		end
		else
		begin
			pc = adderOutput;
		end
	end
	assign adderOutput = pc + 1;

endmodule
