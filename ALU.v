`timescale 1ns / 1ps

module ALU(
    input [31:0] op1,
    input [31:0] op2,
	 input [2:0] operator,
    output reg [31:0] result,
    output reg isZero
    );

	parameter
		ADD = 3'b000,
		SUB = 3'b001,
		GREATER_THAN = 3'b010,
		LESS_THAN = 3'b011,
		LEFT_SHIFT = 3'b100,
		RIGHT_SHIFT = 3'b101,
		OR = 3'b110,
		AND = 3'b111;
	
	always @ (op1 or op2 or operator)
	begin
		case(operator)
			ADD: result = op1 + op2;
			SUB: result = op1 - op2;
			GREATER_THAN: result = op1 > op2;
			LESS_THAN: result = op1 < op2;
			LEFT_SHIFT: result = op1 << op2;
			RIGHT_SHIFT: result = op1 >> op2;
			OR: result = op1 | op2;
			AND: result = op1 & op2;
			default: result = 32'hX;
		endcase
	end
	
	always @ (result)
	begin
		isZero = (result == 0);
	end

endmodule
