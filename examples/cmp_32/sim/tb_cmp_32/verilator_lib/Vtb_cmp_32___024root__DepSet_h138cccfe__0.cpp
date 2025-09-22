// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cmp_32.h for the primary calling header

#include "Vtb_cmp_32__pch.h"
#include "Vtb_cmp_32__Syms.h"
#include "Vtb_cmp_32___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_cmp_32___024root___eval_initial__TOP__Vtiming__0(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->TOP____024unit.__VmonitorNum = 1U;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_cmp_32.sv", 
                                             38);
        vlSelfRef.tb_cmp_32__DOT__tb_A = 0xffffffffU;
        vlSelfRef.tb_cmp_32__DOT__tb_B = 0xffffU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_cmp_32.sv", 
                                             42);
        vlSelfRef.tb_cmp_32__DOT__tb_A = 0xffffU;
        vlSelfRef.tb_cmp_32__DOT__tb_B = 0xffffffffU;
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_cmp_32.sv", 
                                             46);
        vlSelfRef.tb_cmp_32__DOT__tb_A = 0xffffffffU;
        vlSelfRef.tb_cmp_32__DOT__tb_B = 0xffffffffU;
        VL_WRITEF_NX("finished tb_cmp_32\n",0);
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb_cmp_32.sv", 
                                             51);
        VL_FINISH_MT("tb_cmp_32.sv", 51, "");
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cmp_32___024root___dump_triggers__act(Vtb_cmp_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_cmp_32___024root___eval_triggers__act(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_triggers__act\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__EQ) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__EQ__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__GT) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__GT__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__LT) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__LT__0)));
    vlSelfRef.__VactTriggered.set(3U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__EQ__0 
        = vlSelfRef.tb_cmp_32__DOT__UUT__DOT__EQ;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__GT__0 
        = vlSelfRef.tb_cmp_32__DOT__UUT__DOT__GT;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__LT__0 
        = vlSelfRef.tb_cmp_32__DOT__UUT__DOT__LT;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_cmp_32___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_cmp_32___024root___nba_sequent__TOP__0(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___nba_sequent__TOP__0\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("GT: %b LT: %b EQ: %b\n",0,1,vlSelfRef.tb_cmp_32__DOT__UUT__DOT__GT,
                     1,(IData)(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__LT),
                     1,vlSelfRef.tb_cmp_32__DOT__UUT__DOT__EQ);
    }
}
