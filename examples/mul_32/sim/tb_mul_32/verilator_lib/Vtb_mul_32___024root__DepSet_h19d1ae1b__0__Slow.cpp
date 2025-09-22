// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mul_32.h for the primary calling header

#include "Vtb_mul_32__pch.h"
#include "Vtb_mul_32__Syms.h"
#include "Vtb_mul_32___024root.h"

VL_ATTR_COLD void Vtb_mul_32___024root___eval_initial__TOP(Vtb_mul_32___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mul_32___024root___eval_initial__TOP\n"); );
    Vtb_mul_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x6c5f3332U;
    __Vtemp_1[2U] = 0x625f6d75U;
    __Vtemp_1[3U] = 0x74U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_mul_32__DOT__A = 0U;
    vlSelfRef.tb_mul_32__DOT__B = 0U;
}
