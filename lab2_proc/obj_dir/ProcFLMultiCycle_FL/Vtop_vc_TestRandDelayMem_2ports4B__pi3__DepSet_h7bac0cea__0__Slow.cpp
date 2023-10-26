// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelayMem_2ports4B__pi3.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelayMem_2ports4B__pi3___ctor_var_reset(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memreq0_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memreq0_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__memreq0_msg);
    vlSelf->__PVT__memreq1_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memreq1_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__memreq1_msg);
    vlSelf->__PVT__memresp0_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memresp0_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memresp0_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__memresp1_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memresp1_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memresp1_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__mem_memreq0_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memreq0_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__mem_memreq0_msg);
    vlSelf->__PVT__mem_memreq1_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memreq1_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__mem_memreq1_msg);
    vlSelf->__PVT__mem_memresp0_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memresp0_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memresp0_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__mem_memresp1_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memresp1_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_memresp1_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vcellinp__rand_req_delay0__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__rand_req_delay1__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__rand_resp_delay0__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__rand_resp_delay1__max_delay = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(77, vlSelf->__Vcellinp__memreq0_trace__msg);
    VL_RAND_RESET_W(77, vlSelf->__Vcellinp__memreq1_trace__msg);
    vlSelf->__Vcellinp__memresp0_trace__msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vcellinp__memresp1_trace__msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_clear = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__max_delay = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__memreq0_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memreq0_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__memreq0_msg);
    vlSelf->__Vtogcov__memreq1_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memreq1_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__memreq1_msg);
    vlSelf->__Vtogcov__memresp0_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memresp0_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memresp0_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__memresp1_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memresp1_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__memresp1_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__mem_memreq0_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memreq0_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__mem_memreq0_msg);
    vlSelf->__Vtogcov__mem_memreq1_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memreq1_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__mem_memreq1_msg);
    vlSelf->__Vtogcov__mem_memresp0_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memresp0_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memresp0_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__mem_memresp1_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memresp1_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__mem_memresp1_msg = VL_RAND_RESET_Q(47);
}
