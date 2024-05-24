// Testbench

module alu4bit_TB();
reg [3:0] A, B;          
reg [2:0] op_sel;       
wire [3:0] ALU_output;

alu4bit instace_a1(A, B, op_sel, ALU_output);

initial
	begin
		$dumpfile("waveform.vcd");
		$dumpvars(0, alu4bit_TB);
		op_sel = 3'b000; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b001; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b010; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b011; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b100; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b101; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b110; A = 4'b1100; B = 4'b0011;
		#10;
		op_sel = 3'b111; A = 4'b1100; B = 4'b0011;
		#10;
	end
endmodule

