// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_cmp_32.h for the primary calling header

#ifndef VERILATED_VTB_CMP_32___024ROOT_H_
#define VERILATED_VTB_CMP_32___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_cmp_32___024unit;


class Vtb_cmp_32__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_cmp_32___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_cmp_32___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_cmp_32__DOT__UUT__DOT__GT;
    CData/*0:0*/ tb_cmp_32__DOT__UUT__DOT__LT;
    CData/*0:0*/ tb_cmp_32__DOT__UUT__DOT__EQ;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__EQ__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__GT__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__LT__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_cmp_32__DOT__tb_A;
    IData/*31:0*/ tb_cmp_32__DOT__tb_B;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_cmp_32__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_cmp_32___024root(Vtb_cmp_32__Syms* symsp, const char* v__name);
    ~Vtb_cmp_32___024root();
    VL_UNCOPYABLE(Vtb_cmp_32___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
