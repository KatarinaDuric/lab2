// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_2r1w_zero.h"

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___ico_sequent__TOP__top__DUT__dpath__rf__0(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___ico_sequent__TOP__top__DUT__dpath__rf__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___act_sequent__TOP__top__DUT__dpath__rf__0(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___act_sequent__TOP__top__DUT__dpath__rf__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__0(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__1(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0U)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 1U)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 2U)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 3U)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 4U)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 5U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 6U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 7U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 8U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 9U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xaU)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xbU)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xcU)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xdU)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xeU)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xfU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x10U)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x11U)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x12U)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x13U)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x14U)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x15U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x16U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x17U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x18U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x19U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_data 
        = vlSelf->__PVT__wr_data;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__2(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 0U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 1U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 2U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 3U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 4U)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_addr 
        = vlSelf->__PVT__wr_addr;
    if (((IData)(vlSelf->__PVT__wr_en) ^ (IData)(vlSelf->__Vtogcov__wr_en))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wr_en = vlSelf->__PVT__wr_en;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_en 
        = vlSelf->__PVT__wr_en;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__3(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___nba_sequent__TOP__top__DUT__dpath__rf__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 0U)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 1U)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 2U)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 3U)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 4U)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr0 
        = vlSelf->__PVT__rd_addr0;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 0U)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 1U)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 2U)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 3U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 4U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr1 
        = vlSelf->__PVT__rd_addr1;
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w_zero___nba_comb__TOP__top__DUT__dpath__rf__0(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___nba_comb__TOP__top__DUT__dpath__rf__0\n"); );
    // Body
    vlSelf->__PVT__rf_read_data0 = vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data0;
    vlSelf->__PVT__rf_read_data1 = vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data1;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0U)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 1U)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 2U)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 3U)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 4U)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 5U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 6U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 7U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 8U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 9U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[6790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1fU)));
    }
    vlSelf->__PVT__rd_data0 = ((0U == (IData)(vlSelf->__PVT__rd_addr0))
                                ? 0U : vlSelf->__PVT__rf_read_data0);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0U)))) {
        vlSymsp->__Vcoverage[6791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 1U)))) {
        vlSymsp->__Vcoverage[6792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 2U)))) {
        vlSymsp->__Vcoverage[6793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 3U)))) {
        vlSymsp->__Vcoverage[6794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 4U)))) {
        vlSymsp->__Vcoverage[6795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 5U)))) {
        vlSymsp->__Vcoverage[6796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 6U)))) {
        vlSymsp->__Vcoverage[6797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 7U)))) {
        vlSymsp->__Vcoverage[6798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 8U)))) {
        vlSymsp->__Vcoverage[6799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 9U)))) {
        vlSymsp->__Vcoverage[6800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[6801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[6802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[6803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[6804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[6805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[6806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[6807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[6808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[6809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[6810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[6811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[6812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[6813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[6814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[6815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[6816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[6817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[6818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[6819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[6820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[6821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[6822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1fU)));
    }
    vlSelf->__PVT__rd_data1 = ((0U == (IData)(vlSelf->__PVT__rd_addr1))
                                ? 0U : vlSelf->__PVT__rf_read_data1);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0U)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 1U)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 2U)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 3U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 4U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 5U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 6U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 7U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 8U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 9U)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 1U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 2U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 3U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 4U)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 5U)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 6U)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 7U)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 8U)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 9U)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1fU)));
    }
}
