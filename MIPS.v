`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:15:33 12/12/2018 
// Design Name: 
// Module Name:    MIPS 
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
module MIPS(
	input clk,
	input rst
    );
	//////

	wire pcSrc;
	wire data_hit;
	wire ins_hit;
	

	InstructionFetch instructionfetch (
	.clk(clk), 
	.pcSrc(pcSrc),
	.branchAddr(exmem_out_branchAddr),
	.rst(rst),
	.data_hit(data_hit),

	.ins(ifid_in_instr),
	.adderOutput(ifid_in_pc),
	.hit(ins_hit)
	);
	wire [31:0]ifid_in_instr;
	wire [29:0]ifid_in_pc;
	 

	IF_ID if_id (
	.clk(clk),
	.data_hit(data_hit),
	.instruction_hit(ins_hit),
	.npc(ifid_in_pc), 
	.instr(ifid_in_instr),

	.npcout(ifid_out_pc),
	.instrout(ifid_out_instr)
	);
	wire [31:0]ifid_out_instr;
	wire [29:0]ifid_out_pc;
	
	
	decode Decode (
	.instruction(ifid_out_instr), 
	.writeData(wb_out_res), 					////////////////////////check
	.writeRegister(memwb_out_destReg), 		////////////////////////check
	.clk(clk), 
	.regWrite(memwb_out_wb_ctlout[0]), 		////////////////////////check

	.readData1(idex_in_readData1), 
	.readData2(idex_in_readData2), 
	.insaddress1(idex_in_insAddress1), 
	.insaddress2(idex_in_insAddress2), 
	.signExt(idex_in_signExt)
	);
	wire [31:0]idex_in_readData1;
	wire [31:0]idex_in_readData2;
	wire [4:0]idex_in_insAddress1;
	wire [4:0]idex_in_insAddress2;
	wire [29:0]idex_in_signExt;
	 
	 
	controlUnit control_unit (
	.ins_opCode(ifid_out_instr[31:26]), 
	.clk(clk),

	.RegDst(RegDst), 
	.ALUSrc(ALUSrc), 
	.MemtoReg(MemtoReg), 
	.RegWrite(RegWrite), 
	.MemRead(MemRead), 
	.MemWrite(MemWrite), 
	.Branch(Branch), 
	.ALUOp1(ALUOp1), 
	.ALUOp0(ALUOp0)
	);
	wire RegDst, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, ALUOp1, ALUOp0;
	 
	 
	ID_EX id_ex (
	.clk(clk), 
	.data_hit(data_hit),
	.ctlwb_out({MemtoReg,RegWrite}), 
	.ctlm_out({Branch,MemRead,MemWrite}), 
	.ctlex_out({ALUOp1, ALUOp0, RegDst, ALUSrc}), 		/////////check
	.npc(ifid_out_pc), 
	.readdata1(idex_in_readData1), 
	.readdata2(idex_in_readData2), 
	.signex_out(idex_in_signExt), 
	.instr_2016(idex_in_insAddress1), 
	.instr_1511(idex_in_insAddress2), 

	.wb_ctlout(idex_out_wb_ctlout), 
	.m_ctlout(idex_out_m_ctlout), 
	.ex_ctlout(idex_out_ex_ctlout), 
	.npcout(idex_out_pc), 
	.rdata1out(idex_out_readData1), 
	.rdata2out(idex_out_readData2), 
	.s_extendout(idex_out_signExt), 
	.instrout_2016(idex_out_insAddr_2016), 
	.instrout_1511(idex_out_insAddr_1511)
	);
	wire [1:0]idex_out_wb_ctlout;
	wire [2:0]idex_out_m_ctlout;
	wire [3:0]idex_out_ex_ctlout;
	wire [29:0]idex_out_pc;
	wire [31:0]idex_out_readData1;
	wire [31:0]idex_out_readData2;
	wire [29:0]idex_out_signExt;
	wire [4:0]idex_out_insAddr_2016;
	wire [4:0]idex_out_insAddr_1511;
	 
	 
	execution execution (
	.clk(clk), 
	.aluOp(idex_out_ex_ctlout[3:2]), 
	.aluSrc(idex_out_ex_ctlout[0]), 
	.regDst(idex_out_ex_ctlout[1]), 
	.readData1(idex_out_readData1), 
	.readData2(idex_out_readData2), 
	.dstReg1(idex_out_insAddr_2016), 
	.dstReg2(idex_out_insAddr_1511), 
	.pc(idex_out_pc), 
	.signExt(idex_out_signExt), 

	.zero(exmem_in_zero), 
	.branchdst(exmem_in_branchAddr), 
	.aluRes(exmem_in_aluRes), 
	.destReg(exmem_in_destReg)
	);
	wire exmem_in_zero;
	wire [29:0]exmem_in_branchAddr;
	wire [31:0]exmem_in_aluRes;
	wire [4:0]exmem_in_destReg;
	 
	 
	EX_MEM ex_mem (
	.clk(clk), 
	.data_hit(data_hit), 
	.ctlwb_out(idex_out_wb_ctlout), 
	.ctlm_out(idex_out_m_ctlout), 
	.adder_out(exmem_in_branchAddr),
	.aluzero(exmem_in_zero), 
	.aluout(exmem_in_aluRes), 
	.readdata2(idex_out_readData2), 
	.muxout(exmem_in_destReg), 

	.wb_ctlout(exmem_out_wb_ctlout), 
	.m_ctlout(exmem_out_m_ctlout), 
	.add_result(exmem_out_branchAddr), 
	.zero(exmem_out_zero),
	.alu_result(exmem_out_aluRes), 
	.rdata2out(exmem_out_readData2), 
	.five_bit_muxout(exmem_out_destReg)
	);
	wire exmem_out_zero;
	wire [29:0]exmem_out_branchAddr;
	wire [31:0]exmem_out_aluRes;
	wire [4:0]exmem_out_destReg;
	wire [1:0]exmem_out_wb_ctlout;
	wire [2:0]exmem_out_m_ctlout;
	wire [31:0]exmem_out_readData2;

	memoryStage memory (
	.clk(clk), 
	.zero(exmem_out_zero), 
	.branch(exmem_out_m_ctlout[2]),      
	.MemRead(exmem_out_m_ctlout[1]),  
	.MemWrite(exmem_out_m_ctlout[0]), 
	.aluRslt(exmem_out_aluRes), 
	.datafrmreg(exmem_out_readData2),

	.hit(data_hit),
	.pcSrc(pcSrc),
	.readdata(memwb_in_readdata),
	.aluRsltt(memwb_in_aluRes)
	);
	wire [31:0]memwb_in_aluRes;
	wire [31:0]memwb_in_readdata;

	MEM_WB memwb (
	.clk(clk), 
	.data_hit(data_hit), 
	.control_wb_in(exmem_out_wb_ctlout), 
	.Read_data_in(memwb_in_readdata), 
	.ALU_rslt_in(memwb_in_aluRes), 
	.Write_reg_in(exmem_out_destReg), 

	.mem_control_wb(memwb_out_wb_ctlout), 
	.Read_data(memwb_out_readdata), 
	.mem_ALU_result(memwb_out_aluRes), 
	.mem_Write_reg(memwb_out_destReg)
	);
	wire [1:0]memwb_out_wb_ctlout;
	wire [31:0]memwb_out_aluRes;
	wire [31:0]memwb_out_readdata;
	wire [4:0]memwb_out_destReg;

	WB wb (
	.MemtoReg(memwb_out_wb_ctlout[1]), 
	.readdata(memwb_out_readdata), 
	.aluRsltt(memwb_out_aluRes), 

	.res(wb_out_res)
	);
	wire [31:0]wb_out_res;
	
endmodule
