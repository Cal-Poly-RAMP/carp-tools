`timescale 1ns/1ps

module mul (

    input [31:0] A,
    input [31:0] B,
    output logic [63:0] C

);

    assign C = A * B;

endmodule