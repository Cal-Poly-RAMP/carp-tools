`timescale 1ns/1ps

module cmp_32(
    input [31:0] A,
    input [31:0] B,
    output logic GT,
    output logic LT, 
    output logic EQ
); 

    always_comb begin
        GT = 1'b0;
        LT = 1'b0;
        EQ = 1'b0;

        if(A < B) begin
            LT = 1'b1;
        end
        else if(A > B) begin
            GT = 1'b1;
        end
        else begin
            EQ = 1'b1;
        end

    end

endmodule

