// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_cmp_32.h for the primary calling header

#include "Vtb_cmp_32__pch.h"
#include "Vtb_cmp_32__Syms.h"
#include "Vtb_cmp_32___024root.h"

void Vtb_cmp_32___024root___ctor_var_reset(Vtb_cmp_32___024root* vlSelf);

Vtb_cmp_32___024root::Vtb_cmp_32___024root(Vtb_cmp_32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_cmp_32___024root___ctor_var_reset(this);
}

void Vtb_cmp_32___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_cmp_32___024root::~Vtb_cmp_32___024root() {
}
