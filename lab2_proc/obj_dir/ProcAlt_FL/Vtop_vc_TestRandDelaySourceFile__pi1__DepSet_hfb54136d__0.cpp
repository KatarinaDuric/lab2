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
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__src__src.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__src__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___act_comb__TOP__top__src__0(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___act_comb__TOP__top__src__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSymsp->TOP__top__src__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelaySourceFile__pi1___act_comb__TOP__top__src__1(Vtop_vc_TestRandDelaySourceFile__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySourceFile__pi1___act_comb__TOP__top__src__1\n"); );
    // Body
    vlSelf->__PVT__src_rdy = vlSymsp->TOP__top__src__msg_delay.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__src_rdy) ^ (IData)(vlSelf->__Vtogcov__src_rdy))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    if (((IData)(vlSelf->__PVT__src_val) ^ (IData)(vlSelf->__Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 1U)))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 2U)))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 3U)))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 4U)))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 5U)))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 6U)))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 7U)))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 8U)))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 9U)))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__src_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__src_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__src_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1365].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[1368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[1369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[1370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[1371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[1372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[1373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[1374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[1375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[1376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1366].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__src_rdy = vlSelf->__PVT__src_rdy;
    }
    vlSymsp->TOP__top__src__src.__PVT__rdy = vlSelf->__PVT__src_rdy;
}
