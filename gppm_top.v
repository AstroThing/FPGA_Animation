`timescale 1ns / 1ps

module gppm_top (
	input clk,
	input reset,
	input [7:0] sw,
	output reg [7:0] leds
);


//--------------------------------------------------------------------------------//
//Register File Control
reg rf_we;
reg [2:0] ra1;
reg [2:0] ra2;
reg [2:0] wa;
reg [31:0] wd;
reg [31:0] rd1;
reg [31:0] rd2;

wire rf_we_wire;
wire [2:0] ra1_wire;
wire [2:0] ra2_wire;
wire [2:0] wa_wire;
wire [31:0] rd1_wire;
wire [31:0] rd2_wire;

reg_file rf(clk, rf_we, ra1, ra2, wa, wd, rd1_wire, rd2_wire);

//--------------------------------------------------------------------------------//
//ALU Control
reg [2:0] alu_operator;
reg [31:0] alu_result;
reg alu_isZero;

wire [2:0] alu_operator_wire;
wire [31:0] alu_result_wire;
wire alu_isZero_wire;

ALU alu(rd1, rd2, alu_operator, alu_result_wire, alu_isZero_wire);

//--------------------------------------------------------------------------------//
//Counter Control
reg c_reset;
reg [31:0] c_limit;
reg c_limit_we;
reg c_enable;
reg c_limit_reached;

wire c_reset_wire;
wire c_limit_reached_wire;
wire c_limit_we_wire;
wire c_enable_wire;

counter counter(clk, c_reset, c_limit, c_limit_we, c_enable, c_limit_reached_wire);


//--------------------------------------------------------------------------------//
//Other Control
reg [31:0] imm;
reg [1:0] wd_sel;
reg ld_we;

wire [31:0] imm_wire;
wire [1:0] wd_sel_wire;
wire ld_we_wire;

//--------------------------------------------------------------------------------//
//Finite State Machine

FSM fsm(clk, reset, ra1_wire, ra2_wire, rf_we_wire, wa_wire, imm_wire, wd_sel_wire, alu_operator_wire, ld_we_wire, c_enable_wire, c_limit_we_wire, c_reset_wire, alu_isZero, c_limit_reached);

always @ (rd1)
begin
	c_limit = rd1;
end

always @ (alu_isZero_wire)
begin
	alu_isZero = alu_isZero_wire;
end

always @ (alu_result_wire)
begin
	alu_result = alu_result_wire;
end

always @ (c_limit_reached_wire)
begin
	c_limit_reached = c_limit_reached_wire;
end

always @ (*)
begin
	ra1 = ra1_wire;
	ra2 = ra2_wire;
	rd1 = rd1_wire;
	rd2 = rd2_wire;
	rf_we = rf_we_wire;
	wa = wa_wire;
	alu_operator = alu_operator_wire;
	ld_we = ld_we_wire;
	c_enable = c_enable_wire;
	c_limit_we = c_limit_we_wire;
	c_reset = c_reset_wire;
end

always @ (ld_we)
begin
	if(ld_we)
		leds = rd1[7:0];
	else
		leds = leds;
end

always @ (imm_wire or wd_sel_wire or sw or alu_result or rd1)
begin
	imm = imm_wire;
	wd_sel = wd_sel_wire;
	case(wd_sel)
		2'b00: wd = imm;
		2'b01: wd = sw;
		2'b10: wd = alu_result;
		2'b11: wd = rd1;
		default: wd = 32'hX;
	endcase
end

endmodule
