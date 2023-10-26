// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Queue__Pz1_PB4d.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d___ctor_var_reset(Vtop_vc_Queue__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__enq_msg);
    vlSelf->__PVT__deq_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__deq_msg);
    vlSelf->__PVT__num_free_entries = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__enq_msg);
    vlSelf->__Vtogcov__deq_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__deq_msg);
    vlSelf->__Vtogcov__num_free_entries = VL_RAND_RESET_I(2);
    vlSelf->__PVT__genblk1__DOT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__write_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__genblk1__DOT__read_addr = VL_RAND_RESET_I(1);
}
