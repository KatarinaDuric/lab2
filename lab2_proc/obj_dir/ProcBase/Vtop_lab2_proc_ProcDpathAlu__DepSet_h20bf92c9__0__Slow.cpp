// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcDpathAlu.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___ctor_var_reset(Vtop_lab2_proc_ProcDpathAlu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__in0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__in1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fn = VL_RAND_RESET_I(4);
    vlSelf->__PVT__out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ops_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ops_lt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ops_ltu = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__in0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__in1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__fn = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ops_eq = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ops_lt = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__ops_ltu = VL_RAND_RESET_I(1);
}
