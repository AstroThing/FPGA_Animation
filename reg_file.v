`timescale 1ns / 1ps

module reg_file(
    input clk,
    input write_enabled,
    input [2:0] ra1,
    input [2:0] ra2,
    input [2:0] wa,
	 input [31:0] wd,
    output[31:0] rd1,
    output [31:0] rd2
    );

	reg [31:0] registers [0:7];

	assign rd1 = registers[ra1];
	assign rd2 = registers[ra2];
	
	always @ (posedge clk)
	begin
		if(write_enabled)
			registers[wa] <= wd; 
	end
endmodule