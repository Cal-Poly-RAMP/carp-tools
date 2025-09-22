// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cmp_32.h for the primary calling header

#include "Vtb_cmp_32__pch.h"
#include "Vtb_cmp_32___024root.h"

VL_ATTR_COLD void Vtb_cmp_32___024root___eval_static(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_static\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_cmp_32___024root___eval_final(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_final\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cmp_32___024root___dump_triggers__stl(Vtb_cmp_32___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_cmp_32___024root___eval_phase__stl(Vtb_cmp_32___024root* vlSelf);

VL_ATTR_COLD void Vtb_cmp_32___024root___eval_settle(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_settle\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_cmp_32___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_cmp_32.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_cmp_32___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cmp_32___024root___dump_triggers__stl(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___dump_triggers__stl\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_cmp_32___024root___act_sequent__TOP__0(Vtb_cmp_32___024root* vlSelf);
VL_ATTR_COLD void Vtb_cmp_32___024root____Vm_traceActivitySetAll(Vtb_cmp_32___024root* vlSelf);

VL_ATTR_COLD void Vtb_cmp_32___024root___eval_stl(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_stl\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_cmp_32___024root___act_sequent__TOP__0(vlSelf);
        Vtb_cmp_32___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_cmp_32___024root___eval_triggers__stl(Vtb_cmp_32___024root* vlSelf);

VL_ATTR_COLD bool Vtb_cmp_32___024root___eval_phase__stl(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___eval_phase__stl\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_cmp_32___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_cmp_32___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cmp_32___024root___dump_triggers__act(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___dump_triggers__act\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( tb_cmp_32.UUT.EQ)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( tb_cmp_32.UUT.GT)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_cmp_32.UUT.LT)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_cmp_32___024root___dump_triggers__nba(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___dump_triggers__nba\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( tb_cmp_32.UUT.EQ)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( tb_cmp_32.UUT.GT)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_cmp_32.UUT.LT)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_cmp_32___024root____Vm_traceActivitySetAll(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root____Vm_traceActivitySetAll\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vtb_cmp_32___024root___ctor_var_reset(Vtb_cmp_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root___ctor_var_reset\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_cmp_32__DOT__tb_A = VL_RAND_RESET_I(32);
    vlSelf->tb_cmp_32__DOT__tb_B = VL_RAND_RESET_I(32);
    vlSelf->tb_cmp_32__DOT__UUT__DOT__GT = VL_RAND_RESET_I(1);
    vlSelf->tb_cmp_32__DOT__UUT__DOT__LT = VL_RAND_RESET_I(1);
    vlSelf->tb_cmp_32__DOT__UUT__DOT__EQ = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__EQ__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__GT__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_cmp_32__DOT__UUT__DOT__LT__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
