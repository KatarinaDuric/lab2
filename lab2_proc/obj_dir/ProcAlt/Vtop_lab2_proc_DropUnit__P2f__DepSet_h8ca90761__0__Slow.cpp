// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_DropUnit__P2f.h"

VL_ATTR_COLD void Vtop_lab2_proc_DropUnit__P2f___ctor_var_reset(Vtop_lab2_proc_DropUnit__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_DropUnit__P2f___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__drop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__next_state = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_go = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__drop = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__state = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__next_state = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_go = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__state = VL_RAND_RESET_I(1);
}
