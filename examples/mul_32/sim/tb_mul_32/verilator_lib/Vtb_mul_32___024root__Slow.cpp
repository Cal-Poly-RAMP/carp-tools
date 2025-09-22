// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mul_32.h for the primary calling header

#include "Vtb_mul_32__pch.h"
#include "Vtb_mul_32__Syms.h"
#include "Vtb_mul_32___024root.h"

void Vtb_mul_32___024root___ctor_var_reset(Vtb_mul_32___024root* vlSelf);

Vtb_mul_32___024root::Vtb_mul_32___024root(Vtb_mul_32__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mul_32___024root___ctor_var_reset(this);
}

void Vtb_mul_32___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_mul_32___024root::~Vtb_mul_32___024root() {
}
