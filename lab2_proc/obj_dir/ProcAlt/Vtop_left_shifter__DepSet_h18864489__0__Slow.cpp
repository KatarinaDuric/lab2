// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_left_shifter.h"

VL_ATTR_COLD void Vtop_left_shifter___ctor_var_reset(Vtop_left_shifter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_left_shifter___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shamt = VL_RAND_RESET_I(4);
    vlSelf->__PVT__result = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__a = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__shamt = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__result = VL_RAND_RESET_I(32);
}
