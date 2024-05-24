module alu4bit(A, B, op_sel, ALU_output);
input [3:0] A, B;          
input [2:0] op_sel;       
output reg [3:0] ALU_output;
always @(*)
begin
	case(op_sel)
		3'b000: ALU_output = A + B;
		3'b001: ALU_output = A - B;
		3'b010: ALU_output = A * B;
		3'b011: ALU_output = A/B;
		3'b100: ALU_output = A & B;
		3'b101: ALU_output = A | B;
		3'b110: ALU_output = ~A;
		3'b111: ALU_output = ~B;
		default: ALU_output = A^B;
	endcase
end
endmodule
