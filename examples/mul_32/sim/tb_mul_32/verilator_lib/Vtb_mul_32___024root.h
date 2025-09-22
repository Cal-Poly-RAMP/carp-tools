// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mul_32.h for the primary calling header

#ifndef VERILATED_VTB_MUL_32___024ROOT_H_
#define VERILATED_VTB_MUL_32___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mul_32___024unit;


class Vtb_mul_32__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mul_32___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mul_32___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_mul_32__DOT__clk;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_mul_32__DOT__A;
    IData/*31:0*/ tb_mul_32__DOT__B;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mul_32__DOT__A__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__tb_mul_32__DOT__B__0;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_mul_32__DOT__C;
    QData/*63:0*/ __Vtrigprevexpr___TOP__tb_mul_32__DOT__C__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mul_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mul_32___024root(Vtb_mul_32__Syms* symsp, const char* v__name);
    ~Vtb_mul_32___024root();
    VL_UNCOPYABLE(Vtb_mul_32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
