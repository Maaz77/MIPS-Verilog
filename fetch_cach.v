`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:09 10/31/2018 
// Design Name: 
// Module Name:    InstructionFetch 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module InstructionFetch( 
	input clk,
	input pcSrc,
	input [29:0]branchAddr,
	input rst,
	input data_hit,
	output reg [31:0]ins,
	output wire [29:0]adderOutput,
	output wire hit
    );
	reg [29:0]pc;	
	reg [31:0]insMem[255:0];
	
	initial
	begin
		pc=0;
		$readmemb("insMem.mem", insMem, 0, 255);
	end

	wire [31:0]pcc2;
	wire [127:0]mem;
	wire [31:0]ins_temp;
	assign pcc2={pc[29:2], 2'b00};
	assign mem = {insMem[pcc2+3], insMem[pcc2+2], insMem[pcc2+1], insMem[pcc2]} ;
	
	InstructionCache instance_name (
			 .address(pc),
			 .mem_in(mem), 
			 .clk(clk), 
			 .rst(rst), 
			 .hit(hit), 
			 .instruction(ins_temp)
		 );
	always @(*)
	begin
		ins = ins_temp;
	end	
	always @(posedge clk)
	begin
		if(hit && data_hit)
		begin
			if(pcSrc)
			begin
				pc = branchAddr;
			end
			else
			begin 
				pc = adderOutput;
			end
		end
		else
		begin
			ins = 32'bx;
		end
	end
	assign adderOutput = pc + 1;
	
endmodule


module InstructionCache(
		input [29:0]address,
		input [127:0]mem_in,
		input clk,
		input rst,
		output reg hit, 
		output reg [31:0]instruction 
	);

	reg [153:0]cache[7:0];
	integer i;
	initial begin
		for (i = 0; i<8 ; i=i+1)
		begin  
			cache[i] = 0;
		end
	end

	reg [4:0]counter=0;
	always @(negedge clk) 
	begin
		if ( rst == 1)
		begin 
			hit = 0;
			instruction = 0;
			for (i = 0; i<8 ; i=i+1)
			begin  
				cache[i][153] = 0;
			end
		end
		if(^address === 1'bx)
		begin
			hit = 1;
		end
		else if ((cache[address[4:2]][153] == 1'b1) && (cache[address[4:2]][152:128] == address[29:5]))
		begin
			hit = 1;
			counter=0;
			case(address[1:0])
				2'b 00: instruction = cache[address[4:2]][31:0];
				2'b 01: instruction = cache[address[4:2]][63:32];
				2'b 10: instruction = cache[address[4:2]][95:64];
				2'b 11: instruction = cache[address[4:2]][127:96];
			endcase 
		end
		else
		begin
			hit=0;
			counter = 1+counter;
			if(counter == 3)
			begin
				counter=0;
				cache[address[4:2]][127:0] = mem_in;
				cache[address[4:2]][152:128] = address[29:5];
				cache[address[4:2]][153] = 1'b1;
			end
		end
	end
endmodule 