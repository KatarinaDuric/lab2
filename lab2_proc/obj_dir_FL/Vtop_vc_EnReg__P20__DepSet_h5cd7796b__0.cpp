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
        vlSymsp->__Vcoverage[7017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___act_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___act_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___act_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___act_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (vlSelf->__PVT__en) {
        vlSelf->__Vdly__q = vlSelf->__PVT__d;
        vlSymsp->__Vcoverage[7084].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[7085].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7086].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}