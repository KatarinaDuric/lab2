// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_MemReqMsg4BTrace.h"

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___ctor_var_reset(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__msg);
    vlSelf->__PVT__type_ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__opaque = VL_RAND_RESET_I(8);
    vlSelf->__PVT__addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__len = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, vlSelf->__PVT__str);
    vlSelf->__PVT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__msg);
    vlSelf->__Vtogcov__type_ = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__opaque = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__len = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__type_str = VL_RAND_RESET_I(16);
}
