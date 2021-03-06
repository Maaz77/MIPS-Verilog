`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:32:05 10/10/2018 
// Design Name: 
// Module Name:    decode 
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
module decode(
	input [31:0]instruction, 
	input [31:0]writeData,
	input [4:0]writeRegister,
	input clk,
	input regWrite,
	output reg [31:0]readData1,
	output reg [31:0]readData2,
	output [4:0]insaddress1,
	output [4:0]insaddress2,
	output [5:0]instructionOut,
	output [29:0]signExt
	 );
	reg [31:0]registerFile[31:0];
	integer i;
	initial
	begin
		$readmemb("regFile.mem", registerFile, 0, 31);
	end
	always @( posedge clk)
	begin
		if(regWrite)
		begin
			registerFile[writeRegister] = writeData;
		end
	end
	
	always @( negedge clk ) 
	begin
		readData1 = registerFile[instruction[25:21]];
		readData2 = registerFile[instruction[20:16]];	
	end
	
	assign insaddress1=instruction[20:16];
	assign insaddress2=instruction[15:11];
	assign instructionOut=instruction[31:26];
	assign signExt[29:0] = { {16{instruction[15]}}, instruction[15:0] };
endmodule
