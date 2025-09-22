* Testbench for cmp_32

* Load Sky130 transistor/device models (typical corner)
.LIB "/foss/pdks/volare/sky130/versions/0fe599b2afb6708d281543108caf8310912f54af/sky130A/libs.tech/ngspice/sky130.lib.spice" tt

* Load standard-cell definitions
.INCLUDE "/foss/pdks/volare/sky130/versions/0fe599b2afb6708d281543108caf8310912f54af/sky130A/libs.ref/sky130_fd_sc_hd/spice/sky130_fd_sc_hd.spice"

* Load your synthesized/extracted design
.INCLUDE "~/workspace/carp/hardening/cmp_32/runs/RUN_2025-09-17_03-24-01/final/spice/cmp_32.spice"

* Power supplies
VDD VPWR 0 1.8
VSS VGND 0 0

VA0 A[0] 0 1.8
VA1 A[1] 0 0
VA2 A[2] 0 0
VA3 A[3] 0 0
VA4 A[4] 0 0
VA5 A[5] 0 1.8
VA6 A[6] 0 0
VA7 A[7] 0 0
VA8 A[8] 0 0
VA9 A[9] 0 0
VA10 A[10] 0 0
VA11 A[11] 0 0
VA12 A[12] 0 0
VA13 A[13] 0 0
VA14 A[14] 0 0
VA15 A[15] 0 0
VA16 A[16] 0 0
VA17 A[17] 0 0
VA18 A[18] 0 0
VA19 A[19] 0 0
VA20 A[20] 0 0
VA21 A[21] 0 0
VA22 A[22] 0 0
VA23 A[23] 0 0
VA24 A[24] 0 0
VA25 A[25] 0 0
VA26 A[26] 0 0
VA27 A[27] 0 0
VA28 A[28] 0 0
VA29 A[29] 0 0
VA30 A[30] 0 0
VA31 A[31] 0 0

VB0 B[0] 0 0
VB1 B[1] 0 0
VB2 B[2] 0 0
VB3 B[3] 0 0
VB4 B[4] 0 0
VB5 B[5] 0 0
VB6 B[6] 0 0
VB7 B[7] 0 0
VB8 B[8] 0 0
VB9 B[9] 0 0
VB10 B[10] 0 0
VB11 B[11] 0 0
VB12 B[12] 0 0
VB13 B[13] 0 0
VB14 B[14] 0 0
VB15 B[15] 0 0
VB16 B[16] 0 0
VB17 B[17] 0 0
VB18 B[18] 0 0
VB19 B[19] 0 0
VB20 B[20] 0 0
VB21 B[21] 0 0
VB22 B[22] 0 0
VB23 B[23] 0 0
VB24 B[24] 0 0
VB25 B[25] 0 0
VB26 B[26] 0 0
VB27 B[27] 0 0
VB28 B[28] 0 0
VB29 B[29] 0 0
VB30 B[30] 0 0
VB31 B[31] 0 0

* Instantiate comparator
XUUT  A[0] A[10] A[11] A[12] A[13] A[14] A[15] A[16] A[17] A[18] A[19] A[1]
+ A[20] A[21] A[22] A[23] A[24] A[25] A[26] A[27] A[28] A[29] A[2] A[30] A[31] A[3]
+ A[4] A[5] A[6] A[7] A[8] A[9] B[0] B[10] B[11] B[12] B[13] B[14] B[15] B[16] B[17]
+ B[18] B[19] B[1] B[20] B[21] B[22] B[23] B[24] B[25] B[26] B[27] B[28] B[29] B[2]
+ B[30] B[31] B[3] B[4] B[5] B[6] B[7] B[8] B[9] EQ GT LT VGND VPWR cmp_32

* Output loads
CL_EQ EQ 0 1f
CL_GT GT 0 1f
CL_LT LT 0 1f

.tran 0.1n 50n
