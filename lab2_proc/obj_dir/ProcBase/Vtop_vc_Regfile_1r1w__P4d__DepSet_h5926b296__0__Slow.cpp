// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_1r1w__P4d.h"

VL_ATTR_COLD void Vtop_vc_Regfile_1r1w__P4d___ctor_var_reset(Vtop_vc_Regfile_1r1w__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Regfile_1r1w__P4d___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_addr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__read_data);
    vlSelf->__PVT__write_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_addr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__write_data);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->__PVT__rfile[__Vi0]);
    }
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__read_addr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__read_data);
    vlSelf->__Vtogcov__write_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__write_addr = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, vlSelf->__Vtogcov__write_data);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->__Vtogcov__rfile[__Vi0]);
    }
    vlSelf->__Vdlyvdim0__rfile__v0 = 0;
    VL_RAND_RESET_W(77, vlSelf->__Vdlyvval__rfile__v0);
    vlSelf->__Vdlyvset__rfile__v0 = 0;
}
