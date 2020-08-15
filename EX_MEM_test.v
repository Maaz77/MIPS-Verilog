`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:01:54 12/05/2018
// Design Name:   EX_MEM
// Module Name:   D:/3D/IDM/Downloads/Documents/prog/Verilog/Computer_arc/EX_MEM_test.v
// Project Name:  Computer_arc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_MEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module EX_MEM_test;

	// Inputs
	reg clk;
	reg data_hit;
	reg [1:0] ctlwb_out;
	reg [2:0] ctlm_out;
	reg [29:0] adder_out;
	reg aluzero;
	reg [31:0] aluout;
	reg [31:0] readdata2;
	reg [4:0] muxout;

	// Outputs
	wire [1:0] wb_ctlout;
	wire [2:0] m_ctlout;
	wire [29:0] add_result;
	wire zero;
	wire [31:0] alu_result;
	wire [31:0] rdata2out;
	wire [4:0] five_bit_muxout;

	// Instantiate the Unit Under Test (UUT)
	EX_MEM uut (
		.clk(clk), 
		.data_hit(data_hit), 
		.ctlwb_out(ctlwb_out), 
		.ctlm_out(ctlm_out), 
		.adder_out(adder_out), 
		.aluzero(aluzero), 
		.aluout(aluout), 
		.readdata2(readdata2), 
		.muxout(muxout), 
		.wb_ctlout(wb_ctlout), 
		.m_ctlout(m_ctlout), 
		.add_result(add_result), 
		.zero(zero), 
		.alu_result(alu_result), 
		.rdata2out(rdata2out), 
		.five_bit_muxout(five_bit_muxout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		data_hit = 1;
		ctlwb_out = 2;
		ctlm_out = 4;
		adder_out = 3;
		aluzero = 1;
		aluout = 10;
		readdata2 = 10;
		muxout = 10;

		// Wait 100 ns for global reset to finish
		#100;
		clk = 0;
		data_hit = 0;
		ctlwb_out = 0;
		ctlm_out = 0;
		adder_out = 0;
		aluzero = 0;
		aluout = 0;
		readdata2 = 0;
		muxout = 0;
        
		// Add stimulus here

	end
	always
	begin
		#50
		clk = ~clk;
	end
      
endmodule

