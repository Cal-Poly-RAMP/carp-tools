`timescale 1ns/1ps

module carp_mul(
	input active,
	input [31:0] A,
	input [31:0] B,
	output logic [63:0] C
);
	always_comb begin
		C = 'b0;
			if(active) begin
				C = A * B;
			end
			else begin  
				C = 64'b0;
			end
	end


endmodule

