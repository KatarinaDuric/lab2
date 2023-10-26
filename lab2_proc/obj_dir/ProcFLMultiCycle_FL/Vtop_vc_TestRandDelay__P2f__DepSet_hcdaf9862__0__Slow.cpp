// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P2f.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelay__P2f___ctor_var_reset(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__out_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__rand_num = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rand_delay_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rand_delay_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rand_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__zero_cycle_delay = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__in_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__in_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__out_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__out_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__out_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__rand_num = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rand_delay_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rand_delay_next = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rand_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__zero_cycle_delay = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__state_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__rand_num = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__state = VL_RAND_RESET_I(1);
}
