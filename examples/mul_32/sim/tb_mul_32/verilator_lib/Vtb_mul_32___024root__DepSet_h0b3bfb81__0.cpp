// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mul_32.h for the primary calling header

#include "Vtb_mul_32__pch.h"
#include "Vtb_mul_32___024root.h"

VL_ATTR_COLD void Vtb_mul_32___024root___eval_initial__TOP(Vtb_mul_32___024root* vlSelf);
VlCoroutine Vtb_mul_32___024root___eval_initial__TOP__Vtiming__0(Vtb_mul_32___024root* vlSelf);
VlCoroutine Vtb_mul_32___024root___eval_initial__TOP__Vtiming__1(Vtb_mul_32___024root* vlSelf);

void Vtb_mul_32___024root___eval_initial(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_initial\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mul_32___024root___eval_initial__TOP(vlSelf);
    Vtb_mul_32___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_mul_32___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__A__0 
        = vlSelfRef.tb_mul_32__DOT__A;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__B__0 
        = vlSelfRef.tb_mul_32__DOT__B;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_mul_32__DOT__C__0 
        = vlSelfRef.tb_mul_32__DOT__C;
}

VL_INLINE_OPT VlCoroutine Vtb_mul_32___024root___eval_initial__TOP__Vtiming__0(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                         nullptr, "tb_mul_32.sv", 
                                         22);
    vlSelfRef.tb_mul_32__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_mul_32.sv", 
                                             23);
        vlSelfRef.tb_mul_32__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_mul_32__DOT__clk)));
    }
}

void Vtb_mul_32___024root___eval_act(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_act\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_mul_32___024root___nba_sequent__TOP__0(Vtb_mul_32___024root* vlSelf);

void Vtb_mul_32___024root___eval_nba(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_nba\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_mul_32___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_mul_32___024root___timing_resume(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___timing_resume\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_mul_32___024root___eval_triggers__act(Vtb_mul_32___024root* vlSelf);

bool Vtb_mul_32___024root___eval_phase__act(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_phase__act\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mul_32___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_mul_32___024root___timing_resume(vlSelf);
        Vtb_mul_32___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mul_32___024root___eval_phase__nba(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_phase__nba\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mul_32___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mul_32___024root___dump_triggers__nba(Vtb_mul_32___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mul_32___024root___dump_triggers__act(Vtb_mul_32___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mul_32___024root___eval(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mul_32___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_mul_32.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_mul_32___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_mul_32.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_mul_32___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_mul_32___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mul_32___024root___eval_debug_assertions(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_debug_assertions\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
