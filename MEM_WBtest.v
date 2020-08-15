`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:21:22 12/05/2018
// Design Name:   MEM_WB
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/MEM_WBtest.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEM_WB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MEM_WBtest;

	// Inputs
	reg clk;
	reg data_hit;
	reg [1:0] control_wb_in;
	reg [31:0] Read_data_in;
	

	// Instantiate the Unit Under Test (UUT)
	MEM_WB uut (
		.clk(clk), 
		.data_hit(data_hit), 
		.control_wb_in(control_wb_in), 
		.Read_data_in(Read_data_in), 
		
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		data_hit = 1;
		control_wb_in = 1;
		Read_data_in = 2;
		

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
	end
	
	always
	begin
		#50
		clk = ~clk;
	end
      
      
endmodule

