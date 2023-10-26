// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcDpathImmGen.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathImmGen___ctor_var_reset(Vtop_lab2_proc_ProcDpathImmGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathImmGen___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__imm_type = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__imm_type = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__imm = VL_RAND_RESET_I(32);
}
