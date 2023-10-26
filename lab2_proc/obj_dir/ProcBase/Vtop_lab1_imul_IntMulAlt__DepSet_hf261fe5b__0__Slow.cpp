// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab1_imul_IntMulAlt.h"

VL_ATTR_COLD void Vtop_lab1_imul_IntMulAlt___ctor_var_reset(Vtop_lab1_imul_IntMulAlt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab1_imul_IntMulAlt___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__new_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__req_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__in_val = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, vlSelf->__PVT__str);
    vlSelf->__PVT__idx1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idx0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__state = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__new_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__req_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__resp_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__in_val = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__state = VL_RAND_RESET_I(2);
}
