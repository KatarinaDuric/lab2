// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB2f___ctor_var_reset(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__deq_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__qstore = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__write_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__deq_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__qstore = VL_RAND_RESET_Q(47);
}
