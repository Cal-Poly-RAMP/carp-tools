// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mul_32.h for the primary calling header

#include "Vtb_mul_32__pch.h"
#include "Vtb_mul_32__Syms.h"
#include "Vtb_mul_32___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_mul_32___024root___eval_initial__TOP__Vtiming__1(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_mul_32.sv", 
                                             34);
        vlSelfRef.tb_mul_32__DOT__A = 0x10U;
        vlSelfRef.tb_mul_32__DOT__B = 2U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_mul_32.sv", 
                                             37);
        vlSelfRef.tb_mul_32__DOT__A = 0x200U;
        vlSelfRef.tb_mul_32__DOT__B = 0x2000U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_mul_32.sv", 
                                             40);
        vlSelfRef.tb_mul_32__DOT__A = 0xffffffffU;
        vlSelfRef.tb_mul_32__DOT__B = 0xffffffffU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_mul_32.sv", 
                                             43);
        VL_FINISH_MT("tb_mul_32.sv", 43, "");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mul_32___024root___dump_triggers__act(Vtb_mul_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mul_32___024root___eval_triggers__act(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_triggers__act\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (vlSelfRef.tb_mul_32__DOT__A 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__A__0));
    vlSelfRef.__VactTriggered.set(1U, (vlSelfRef.tb_mul_32__DOT__B 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__B__0));
    vlSelfRef.__VactTriggered.set(2U, (vlSelfRef.tb_mul_32__DOT__C 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__C__0));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__A__0 
        = vlSelfRef.tb_mul_32__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__B__0 
        = vlSelfRef.tb_mul_32__DOT__B;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__C__0 
        = vlSelfRef.tb_mul_32__DOT__C;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mul_32___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_mul_32___024root___nba_sequent__TOP__0(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___nba_sequent__TOP__0\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("| A: %10# | B: %10# | C:%20# |\n",0,
                     32,vlSelfRef.tb_mul_32__DOT__A,
                     32,vlSelfRef.tb_mul_32__DOT__B,
                     64,vlSelfRef.tb_mul_32__DOT__C);
    }
}
