// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelaySourceFile__pi1.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___ico_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___ico_sequent__TOP__top__src__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[1158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__src__src.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__src__msg_delay.__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__src__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__1(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__2(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___act_sequent__TOP__top__src__2\n"); );
    // Body
    vlSelf->__PVT__src_rdy = vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__src_rdy) ^ (IData)(vlSelf->__Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__src_rdy = vlSelf->__PVT__src_rdy;
    }
    vlSymsp->TOP__top__src__src.__PVT__rdy = vlSelf->__PVT__src_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__0(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__0\n"); );
    // Body
    vlSelf->__PVT__done = vlSymsp->TOP__top__src__src.__PVT__done;
    vlSelf->__PVT__src_val = vlSymsp->TOP__top__src__src.__PVT__val;
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[1226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    if (((IData)(vlSelf->__PVT__src_val) ^ (IData)(vlSelf->__Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[1227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__src_val = vlSelf->__PVT__src_val;
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__in_val 
        = vlSelf->__PVT__src_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__1(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__src.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__2(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_sequent__TOP__top__src__2\n"); );
    // Body
    vlSelf->__PVT__src_msg = vlSymsp->TOP__top__src__src.__PVT__msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0U)))) {
        vlSymsp->__Vcoverage[1229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 1U)))) {
        vlSymsp->__Vcoverage[1230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 2U)))) {
        vlSymsp->__Vcoverage[1231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 3U)))) {
        vlSymsp->__Vcoverage[1232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 4U)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 5U)))) {
        vlSymsp->__Vcoverage[1234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 6U)))) {
        vlSymsp->__Vcoverage[1235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 7U)))) {
        vlSymsp->__Vcoverage[1236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 8U)))) {
        vlSymsp->__Vcoverage[1237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 9U)))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__in_msg 
        = vlSelf->__PVT__src_msg;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__0(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__0\n"); );
    // Body
    vlSelf->__PVT__val = vlSymsp->TOP__top__src__msg_delay.__PVT__out_val;
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[1192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__1(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__1\n"); );
    // Body
    vlSelf->__PVT__msg = vlSymsp->TOP__top__src__msg_delay.__PVT__out_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[1194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[1195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[1196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[1197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[1198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[1199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[1200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[1201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[1202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[1203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__2(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[1193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__3(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___nba_comb__TOP__top__src__3\n"); );
    // Body
    vlSelf->__PVT__src_rdy = vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__src_rdy) ^ (IData)(vlSelf->__Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[1228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__src_rdy = vlSelf->__PVT__src_rdy;
    }
    vlSymsp->TOP__top__src__src.__PVT__rdy = vlSelf->__PVT__src_rdy;
}
