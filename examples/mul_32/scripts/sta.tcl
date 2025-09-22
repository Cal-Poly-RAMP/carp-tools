
read_liberty /foss/pdks/volare/sky130/versions/0fe599b2afb6708d281543108caf8310912f54af/sky130A/libs.ref/sky130_fd_sc_hd/lib/sky130_fd_sc_hd__tt_100C_1v80.lib
read_verilog ~/workspace/mul_32/runs/recent/final/nl/mul_32.nl.v
link_design mul_32
read_sdc ~/workspace/mul_32/runs/recent/final/sdc/mul_32.sdc
report_worst_slack
report_tns
exit
