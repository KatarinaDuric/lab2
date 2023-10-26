// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestSourceFile__P20_PBa.h"

VL_ATTR_COLD void Vtop_vc_TestSourceFile__P20_PBa___ctor_var_reset(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__msg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__m[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__m_load[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__index_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__index_next = VL_RAND_RESET_I(4);
    vlSelf->__PVT__index = VL_RAND_RESET_I(4);
    vlSelf->__PVT__index_max = VL_RAND_RESET_I(4);
    vlSelf->__PVT__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__data_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__load__Vstatic__unnamedblk1__DOT__count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__done_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__go = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__done = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__index_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__index_next = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__index = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__index_max = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__data_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__done_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__go = VL_RAND_RESET_I(1);
    vlSelf->__Vlvbound_h000547a2__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__done = VL_RAND_RESET_I(1);
}
