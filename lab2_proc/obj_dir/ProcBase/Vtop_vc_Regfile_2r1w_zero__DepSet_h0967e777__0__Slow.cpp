// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_2r1w_zero.h"

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w_zero___ctor_var_reset(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_addr0 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_data0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rd_addr1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_data1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wr_addr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_read_data0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rd_addr0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rd_data0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rd_addr1 = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rd_data1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__wr_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wr_addr = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__wr_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rf_read_data0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rf_read_data1 = VL_RAND_RESET_I(32);
}
