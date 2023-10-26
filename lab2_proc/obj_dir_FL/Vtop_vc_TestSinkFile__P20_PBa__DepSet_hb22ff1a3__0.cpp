// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSinkFile__P20_PBa.h"

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___ico_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___ico_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                           & ((IData)(vlSelf->__PVT__index) 
                              == (IData)(vlSelf->__PVT__index_max)));
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_comb__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_comb__TOP__top__sink__sink__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_comb__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_comb__TOP__top__sink__sink__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__failed = vlSelf->__PVT__failed;
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset_reg;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__failed = 0U;
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
    } else if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__go))) {
        if ((vlSelf->__PVT__msg == vlSelf->__PVT__m_curr)) {
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            VL_WRITEF("     [ passed ] expected = %x, actual = %x\n",
                      32,((9U >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        } else {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            vlSelf->__Vdly__failed = 1U;
            VL_WRITEF("     [ FAILED ] expected = %x, actual = %x\n",
                      32,((9U >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset;
    vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__failed = vlSelf->__Vdly__failed;
    vlSelf->__PVT__reset_reg = vlSelf->__Vdly__reset_reg;
    if (((IData)(vlSelf->__PVT__failed) ^ (IData)(vlSelf->__Vtogcov__failed))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__failed = vlSelf->__PVT__failed;
    }
    if (((IData)(vlSelf->__PVT__reset_reg) ^ (IData)(vlSelf->__Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_reg = vlSelf->__PVT__reset_reg;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__2(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__3(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__3\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 0U)))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 1U)))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 2U)))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 3U)))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U)));
    }
    vlSelf->__PVT__index_next = (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__m_curr = ((9U >= (IData)(vlSelf->__PVT__index))
                              ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                              : 0U);
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 0U)))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 1U)))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 2U)))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 3U)))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U)));
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0U)))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 1U)))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 2U)))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 3U)))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 4U)))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 5U)))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 6U)))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 7U)))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 8U)))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 9U)))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xaU)))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xbU)))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xcU)))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xdU)))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xeU)))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xfU)))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x10U)))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x11U)))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x12U)))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x13U)))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x14U)))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x15U)))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x16U)))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x17U)))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x18U)))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x19U)))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1aU)))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1bU)))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1cU)))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1dU)))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1eU)))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1fU)))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__4(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__4\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                           & ((IData)(vlSelf->__PVT__index) 
                              == (IData)(vlSelf->__PVT__index_max)));
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__2(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
}
