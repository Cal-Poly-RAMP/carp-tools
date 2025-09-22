// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cmp_32.h for the primary calling header

#ifndef VERILATED_VTB_CMP_32___024UNIT_H_
#define VERILATED_VTB_CMP_32___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_cmp_32__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cmp_32___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_cmp_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cmp_32___024unit(Vtb_cmp_32__Syms* symsp, const char* v__name);
    ~Vtb_cmp_32___024unit();
    VL_UNCOPYABLE(Vtb_cmp_32___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
