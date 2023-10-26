// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_multiplier2.h"

VL_ATTR_COLD void Vtop_multiplier2___ctor_var_reset(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_msg_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_msg_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__counter = VL_RAND_RESET_I(6);
    vlSelf->__PVT__a_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__a_new = VL_RAND_RESET_I(32);
    vlSelf->__PVT__b_new = VL_RAND_RESET_I(32);
    vlSelf->__PVT__msg_new = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__ls_block____pinNumber2 = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__ls_block____pinNumber1 = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__rs_block____pinNumber2 = VL_RAND_RESET_I(4);
    vlSelf->__Vcellinp__rs_block____pinNumber1 = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__add_mul_block____pinNumber1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__ostream_val = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__req_msg_a = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__req_msg_b = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__counter = VL_RAND_RESET_I(6);
    vlSelf->__Vtogcov__a_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__b_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__a_new = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__b_new = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__msg_new = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_jump__0__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_jump__0__b = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_jump__1__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_jump__1__b = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_jump__2__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_jump__2__b = VL_RAND_RESET_I(7);
    vlSelf->__Vfunc_jump__3__Vfuncout = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_jump__3__b = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__a_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__b_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__counter = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__istream_rdy = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ostream_val = VL_RAND_RESET_I(1);
}
