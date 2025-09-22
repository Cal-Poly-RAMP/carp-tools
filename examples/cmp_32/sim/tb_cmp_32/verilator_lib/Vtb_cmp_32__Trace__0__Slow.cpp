// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_cmp_32__Syms.h"


VL_ATTR_COLD void Vtb_cmp_32___024root__trace_init_sub__TOP__0(Vtb_cmp_32___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_init_sub__TOP__0\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_cmp_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"tb_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"tb_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("UUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"GT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"LT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"EQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_init_top(Vtb_cmp_32___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_init_top\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_cmp_32___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_cmp_32___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cmp_32___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_cmp_32___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_register(Vtb_cmp_32___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_register\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_cmp_32___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_cmp_32___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_cmp_32___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_cmp_32___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_const_0\n"); );
    // Init
    Vtb_cmp_32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cmp_32___024root*>(voidSelf);
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_full_0_sub_0(Vtb_cmp_32___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_full_0\n"); );
    // Init
    Vtb_cmp_32___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_cmp_32___024root*>(voidSelf);
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_cmp_32___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_cmp_32___024root__trace_full_0_sub_0(Vtb_cmp_32___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_cmp_32___024root__trace_full_0_sub_0\n"); );
    Vtb_cmp_32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__GT));
    bufp->fullBit(oldp+2,(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__LT));
    bufp->fullBit(oldp+3,(vlSelfRef.tb_cmp_32__DOT__UUT__DOT__EQ));
    bufp->fullIData(oldp+4,(vlSelfRef.tb_cmp_32__DOT__tb_A),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_cmp_32__DOT__tb_B),32);
}
