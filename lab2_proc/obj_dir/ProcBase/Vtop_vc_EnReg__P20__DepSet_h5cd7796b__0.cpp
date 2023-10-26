// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P20.h"

VL_INLINE_OPT void Vtop_vc_EnReg__P20___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (vlSelf->__PVT__en) {
        vlSelf->__Vdly__q = vlSelf->__PVT__d;
        vlSymsp->__Vcoverage[11347].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[11348].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11349].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11346].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}
