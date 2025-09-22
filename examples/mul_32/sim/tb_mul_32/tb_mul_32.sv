`timescale 1ns/1ps

module tb_mul_32();

    logic clk;
    logic [31:0] A, B;
    logic [63:0] C;

    `ifdef USE_POWER_PINS
        wire VPWR;
        wire VGND;
        assign VPWR=1;
        assign VGND=0;
    `endif

    mul_32 UUT (
        .A(A),
        .B(B),
        .C(C),
        .clk(clk)
    `ifdef USE_POWER_PINS
        ,.VPWR(VPWR),
        .VGND(VGND)
    `endif
    );


    initial begin
        $dumpfile("tb_mul_32.vcd");
        $dumpvars(0, tb_mul_32);
    end

    initial begin
        #5 clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin
        A = 32'b0;
        B = 32'b0;
    end

    always begin
        $monitorh("| A: %d | B: %d | C:%d |", A, B, C);

        #10 A = 32'h0000_0010;
            B = 32'h0000_0002;

        #10 A = 32'h0000_0200;
            B = 32'h0000_2000;
        
        #10 A = 32'hFFFF_FFFF;
            B = 32'hFFFF_FFFF;

        #10 $finish;
    end


endmodule

