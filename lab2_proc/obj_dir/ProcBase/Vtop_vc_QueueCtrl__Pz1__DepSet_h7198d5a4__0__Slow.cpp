// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl__Pz1.h"

VL_ATTR_COLD void Vtop_vc_QueueCtrl__Pz1___ctor_var_reset(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_addr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__num_free_entries = VL_RAND_RESET_I(2);
    vlSelf->__PVT__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__full_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_pipe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__do_bypass = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_ptr_plus1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__deq_ptr_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_ptr_plus1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__enq_ptr_inc = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__write_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__write_addr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__read_addr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__bypass_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__num_free_entries = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__enq_ptr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_ptr = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_ptr_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__full = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__full_next = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__do_enq = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__do_deq = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__empty = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__do_pipe = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__do_bypass = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_ptr_plus1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__deq_ptr_inc = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_ptr_plus1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__enq_ptr_inc = VL_RAND_RESET_I(1);
}
