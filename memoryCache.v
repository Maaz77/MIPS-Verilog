`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:26:41 11/28/2018 
// Design Name: 
// Module Name:    memoryCache 
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
module memoryStage(
	input clk,
	input zero,
	input branch,
	input MemRead,
	input MemWrite,
	input [31:0]aluRslt,
	input [31:0]datafrmreg,
	output wire hit,
	output wire pcSrc,
	output wire [31:0]readdata,
	output wire [31:0]aluRsltt
	 );	
	wire [127:0]mem;
	integer i;
	reg [127:0]data_mem[63:0];
	initial
	begin
		$readmemb("dataMem.mem", data_mem, 0, 63);
	end
   assign pcSrc = (zero && branch);
	assign mem = data_mem [aluRslt >> 2 ];
	assign aluRsltt = aluRslt;
	dataMemCache Loadword (
		 .mem(mem), 
		 .clk(clk), 
		 .MemRead(MemRead), 
		 .address(aluRslt), 
		 .hit(hit), 
		 .readdata(readdata)
    );

	always @(posedge clk)
	begin
		if(MemWrite)
		begin
			case(aluRslt[1:0])
				2'b 00: data_mem[aluRslt>>2][31:0]  = datafrmreg;
				2'b 01: data_mem[aluRslt>>2][63:32] = datafrmreg;
				2'b 10: data_mem[aluRslt>>2][95:64] = datafrmreg;
				2'b 11: data_mem[aluRslt>>2][127:96]= datafrmreg;
			endcase 
		end
	end
	
endmodule
 

module dataMemCache(
	input [127:0]mem,
	input clk,
	input MemRead,
	input [31:0]address,
	output reg hit,
	output reg [31:0]readdata
	 );
	reg [155:0]cache[7:0];
	reg [4:0]counter=0;
	integer i;
	
	initial 
	begin
		hit = 1;
		for (i = 0; i<8 ; i=i+1)
		begin  
			cache[i] = 0;
		end
		readdata = 32'bx;
	end
	
	always @(negedge clk) 
	begin
		if(^address === 1'bx)
		begin
			hit = 1;
		end
		else if(MemRead)
		begin
			if ((cache[address[4:2]][155] == 1'b1) && (cache[address[4:2]][154:128] == address[31:5]))
			begin
				hit = 1;
				counter=0;
				case(address[1:0])
					2'b 00: readdata = cache[address[4:2]][31:0];
					2'b 01: readdata = cache[address[4:2]][63:32];
					2'b 10: readdata = cache[address[4:2]][95:64];
					2'b 11: readdata = cache[address[4:2]][127:96];
				endcase 
			end
			else
			begin
				hit=0;
				counter = 1+counter;
				if(counter == 3)
				begin
					readdata = 32'bx;
					counter=0;
					cache[address[4:2]][127:0] = mem;
					cache[address[4:2]][154:128] = address[29:5];
					cache[address[4:2]][155] = 1'b1;
				end
			end
		end
	end
		
endmodule



