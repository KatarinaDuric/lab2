// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P4d.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___ctor_var_reset(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___ctor_var_reset\n"); );
    // Body
    VL_RAND_RESET_W(77, vlSelf->__PVT__in0);
    VL_RAND_RESET_W(77, vlSelf->__PVT__in1);
    vlSelf->__PVT__sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__out);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__in0);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__in1);
    vlSelf->__Vtogcov__sel = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__out);
}
