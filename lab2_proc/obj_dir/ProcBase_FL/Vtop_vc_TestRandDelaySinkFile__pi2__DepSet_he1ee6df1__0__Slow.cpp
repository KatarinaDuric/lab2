// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelaySinkFile__pi2.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___ctor_var_reset(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__msg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sink_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__sink_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__sink_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__sink_msg = VL_RAND_RESET_I(32);
}
