// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_MemRespMsgPack__pi5.h"

VL_ATTR_COLD void Vtop_vc_MemRespMsgPack__pi5___ctor_var_reset(Vtop_vc_MemRespMsgPack__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsgPack__pi5___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__type_ = VL_RAND_RESET_I(3);
    vlSelf->__PVT__opaque = VL_RAND_RESET_I(8);
    vlSelf->__PVT__len = VL_RAND_RESET_I(2);
    vlSelf->__PVT__data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__test = VL_RAND_RESET_I(2);
    vlSelf->__PVT__resp = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__type_ = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__opaque = VL_RAND_RESET_I(8);
    vlSelf->__Vtogcov__len = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__test = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__resp = VL_RAND_RESET_Q(47);
}
