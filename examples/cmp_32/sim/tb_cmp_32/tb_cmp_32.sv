`timescale  1ns/1ps

module tb_cmp_32();

    logic [31:0] tb_A;
    logic [31:0] tb_B;

    cmp_32 UUT (
        .A(tb_A),
        .B(tb_B),
        .GT(),
        .LT(),
        .EQ()
    );
    
	`ifdef USE_POWER_PINS
		wire VPWR;
		wire VGND;
		assign VPWR=1;
		assign VGND=0;
	`endif

    initial begin
        $dumpfile("tb_cmp_32.vcd");
        $dumpvars(0, tb_cmp_32);
    end

    initial begin
        tb_A = 32'b0;
        tb_B = 32'b0;
    end

    always begin
        
        $monitorb("GT: %b LT: %b EQ: %b", UUT.GT, UUT.LT, UUT.EQ);

        // GT
        #10 tb_A = 32'hFFFF_FFFF;
            tb_B = 32'h0000_FFFF; 

        // LT
        #10 tb_A = 32'h0000_FFFF;
            tb_B = 32'hFFFF_FFFF; 

        // EQ
        #10 tb_A = 32'hFFFF_FFFF;
            tb_B = 32'hFFFF_FFFF; 
        

        $display("finished tb_cmp_32");
        #10 $finish; 
    end
endmodule
