// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux4__P20.h"

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[7843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__1(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[7875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[7876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[7877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[7878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[7879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[7880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[7881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[7882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[7883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[7884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[7885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[7886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[7887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[7888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[7889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[7890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[7891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[7892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[7893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[7894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[7895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[7896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[7897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[7898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[7899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[7900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[7901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[7902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[7903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[7904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[7905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[7906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__1(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0U)))) {
        vlSymsp->__Vcoverage[7907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 1U)))) {
        vlSymsp->__Vcoverage[7908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 2U)))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 3U)))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 4U)))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 5U)))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 6U)))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 7U)))) {
        vlSymsp->__Vcoverage[7914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 8U)))) {
        vlSymsp->__Vcoverage[7915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 9U)))) {
        vlSymsp->__Vcoverage[7916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xaU)))) {
        vlSymsp->__Vcoverage[7917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xbU)))) {
        vlSymsp->__Vcoverage[7918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xcU)))) {
        vlSymsp->__Vcoverage[7919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xdU)))) {
        vlSymsp->__Vcoverage[7920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xeU)))) {
        vlSymsp->__Vcoverage[7921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xfU)))) {
        vlSymsp->__Vcoverage[7922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x10U)))) {
        vlSymsp->__Vcoverage[7923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x11U)))) {
        vlSymsp->__Vcoverage[7924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x12U)))) {
        vlSymsp->__Vcoverage[7925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x13U)))) {
        vlSymsp->__Vcoverage[7926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x14U)))) {
        vlSymsp->__Vcoverage[7927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x15U)))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x16U)))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x17U)))) {
        vlSymsp->__Vcoverage[7930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x18U)))) {
        vlSymsp->__Vcoverage[7931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x19U)))) {
        vlSymsp->__Vcoverage[7932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1aU)))) {
        vlSymsp->__Vcoverage[7933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1bU)))) {
        vlSymsp->__Vcoverage[7934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1cU)))) {
        vlSymsp->__Vcoverage[7935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1dU)))) {
        vlSymsp->__Vcoverage[7936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1eU)))) {
        vlSymsp->__Vcoverage[7937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1fU)))) {
        vlSymsp->__Vcoverage[7938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__2(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[7939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[7940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__3(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__pc_sel_mux_F__3\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7973].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[7974].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[7975].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in3;
        vlSymsp->__Vcoverage[7976].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[7977].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7978].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0U)))) {
        vlSymsp->__Vcoverage[7907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 1U)))) {
        vlSymsp->__Vcoverage[7908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 2U)))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 3U)))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 4U)))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 5U)))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 6U)))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 7U)))) {
        vlSymsp->__Vcoverage[7914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 8U)))) {
        vlSymsp->__Vcoverage[7915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 9U)))) {
        vlSymsp->__Vcoverage[7916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xaU)))) {
        vlSymsp->__Vcoverage[7917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xbU)))) {
        vlSymsp->__Vcoverage[7918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xcU)))) {
        vlSymsp->__Vcoverage[7919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xdU)))) {
        vlSymsp->__Vcoverage[7920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xeU)))) {
        vlSymsp->__Vcoverage[7921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xfU)))) {
        vlSymsp->__Vcoverage[7922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x10U)))) {
        vlSymsp->__Vcoverage[7923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x11U)))) {
        vlSymsp->__Vcoverage[7924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x12U)))) {
        vlSymsp->__Vcoverage[7925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x13U)))) {
        vlSymsp->__Vcoverage[7926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x14U)))) {
        vlSymsp->__Vcoverage[7927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x15U)))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x16U)))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x17U)))) {
        vlSymsp->__Vcoverage[7930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x18U)))) {
        vlSymsp->__Vcoverage[7931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x19U)))) {
        vlSymsp->__Vcoverage[7932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1aU)))) {
        vlSymsp->__Vcoverage[7933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1bU)))) {
        vlSymsp->__Vcoverage[7934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1cU)))) {
        vlSymsp->__Vcoverage[7935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1dU)))) {
        vlSymsp->__Vcoverage[7936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1eU)))) {
        vlSymsp->__Vcoverage[7937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1fU)))) {
        vlSymsp->__Vcoverage[7938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__1(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[7939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[7940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__2(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[7843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__3(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[7875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[7876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[7877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[7878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[7879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[7880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[7881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[7882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[7883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[7884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[7885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[7886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[7887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[7888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[7889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[7890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[7891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[7892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[7893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[7894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[7895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[7896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[7897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[7898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[7899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[7900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[7901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[7902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[7903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[7904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[7905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[7906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__4(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op1_byp_sel_mux_D__4\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7973].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[7974].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[7975].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in3;
        vlSymsp->__Vcoverage[7976].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[7977].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7978].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_sequent__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0U)))) {
        vlSymsp->__Vcoverage[7907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 1U)))) {
        vlSymsp->__Vcoverage[7908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 2U)))) {
        vlSymsp->__Vcoverage[7909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 3U)))) {
        vlSymsp->__Vcoverage[7910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 4U)))) {
        vlSymsp->__Vcoverage[7911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 5U)))) {
        vlSymsp->__Vcoverage[7912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 6U)))) {
        vlSymsp->__Vcoverage[7913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 7U)))) {
        vlSymsp->__Vcoverage[7914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 8U)))) {
        vlSymsp->__Vcoverage[7915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 9U)))) {
        vlSymsp->__Vcoverage[7916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xaU)))) {
        vlSymsp->__Vcoverage[7917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xbU)))) {
        vlSymsp->__Vcoverage[7918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xcU)))) {
        vlSymsp->__Vcoverage[7919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xdU)))) {
        vlSymsp->__Vcoverage[7920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xeU)))) {
        vlSymsp->__Vcoverage[7921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xfU)))) {
        vlSymsp->__Vcoverage[7922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x10U)))) {
        vlSymsp->__Vcoverage[7923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x11U)))) {
        vlSymsp->__Vcoverage[7924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x12U)))) {
        vlSymsp->__Vcoverage[7925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x13U)))) {
        vlSymsp->__Vcoverage[7926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x14U)))) {
        vlSymsp->__Vcoverage[7927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x15U)))) {
        vlSymsp->__Vcoverage[7928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x16U)))) {
        vlSymsp->__Vcoverage[7929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x17U)))) {
        vlSymsp->__Vcoverage[7930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x18U)))) {
        vlSymsp->__Vcoverage[7931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x19U)))) {
        vlSymsp->__Vcoverage[7932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1aU)))) {
        vlSymsp->__Vcoverage[7933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1bU)))) {
        vlSymsp->__Vcoverage[7934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1cU)))) {
        vlSymsp->__Vcoverage[7935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1dU)))) {
        vlSymsp->__Vcoverage[7936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1eU)))) {
        vlSymsp->__Vcoverage[7937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1fU)))) {
        vlSymsp->__Vcoverage[7938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__1(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[7939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[7940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__2(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[7843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__3(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[7875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[7876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[7877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[7878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[7879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[7880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[7881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[7882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[7883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[7884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[7885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[7886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[7887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[7888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[7889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[7890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[7891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[7892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[7893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[7894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[7895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[7896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[7897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[7898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[7899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[7900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[7901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[7902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[7903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[7904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[7905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[7906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__4(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___nba_comb__TOP__top__DUT__dpath__op2_byp_sel_mux_D__4\n"); );
    // Body
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7973].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[7974].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[7975].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in3;
        vlSymsp->__Vcoverage[7976].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[7977].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7978].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}
