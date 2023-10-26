// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelaySinkFile__pi2.h"

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__0(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0U)))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 1U)))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 2U)))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 3U)))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 4U)))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 5U)))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 6U)))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 7U)))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 8U)))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 9U)))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1fU)));
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay 
        = vlSelf->__PVT__max_delay;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__done = vlSymsp->TOP__top__sink__sink.__PVT__done;
    vlSelf->__PVT__sink_rdy = vlSymsp->TOP__top__sink__sink.__PVT__rdy;
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    if (((IData)(vlSelf->__PVT__sink_rdy) ^ (IData)(vlSelf->__Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sink_rdy = vlSelf->__PVT__sink_rdy;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__out_rdy 
        = vlSelf->__PVT__sink_rdy;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__1(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__sink__sink.__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__0(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val 
        = vlSelf->__PVT__val;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__1(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg 
        = vlSelf->__PVT__msg;
    vlSelf->__PVT__rdy = vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy;
    vlSelf->__PVT__sink_val = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val;
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    if (((IData)(vlSelf->__PVT__sink_val) ^ (IData)(vlSelf->__Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sink_val = vlSelf->__PVT__sink_val;
    }
    vlSymsp->TOP__top__sink__sink.__PVT__val = vlSelf->__PVT__sink_val;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__2(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_comb__TOP__top__sink__2\n"); );
    // Body
    vlSelf->__PVT__sink_msg = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0U)))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 1U)))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 2U)))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 3U)))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 4U)))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 5U)))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 6U)))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 7U)))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 8U)))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 9U)))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__sink__sink.__PVT__msg = vlSelf->__PVT__sink_msg;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___configure_coverage(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1435]), first, "../vc/TestRandDelaySinkFile.v", 17, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1436]), first, "../vc/TestRandDelaySinkFile.v", 18, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1437]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1438]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1439]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1440]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1441]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1442]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1443]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1444]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1445]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1446]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1447]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1448]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1449]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1450]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1451]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1452]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1453]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1454]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1455]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1456]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1457]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1458]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1459]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1460]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1461]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1462]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1463]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1464]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1465]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1466]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1467]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1468]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1469]), first, "../vc/TestRandDelaySinkFile.v", 26, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1470]), first, "../vc/TestRandDelaySinkFile.v", 27, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1471]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1472]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1473]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1474]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1475]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1476]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1477]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1478]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1479]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1480]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1481]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1482]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1483]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1484]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1485]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1486]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1487]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1488]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1489]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1490]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1491]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1492]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1493]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1494]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1495]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1496]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1497]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1498]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1499]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1500]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1501]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1502]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1503]), first, "../vc/TestRandDelaySinkFile.v", 32, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1504]), first, "../vc/TestRandDelaySinkFile.v", 39, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1505]), first, "../vc/TestRandDelaySinkFile.v", 40, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1506]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1507]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1508]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1509]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1510]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1511]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1512]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1513]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1514]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1515]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1516]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1517]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1518]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1519]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1520]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1521]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1522]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1523]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1524]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1525]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1526]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1527]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1528]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1529]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1530]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1531]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1532]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1533]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1534]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1535]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1536]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1537]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1538]), first, "../vc/TestRandDelaySinkFile.v", 75, 7, "", "v_line/vc_TestRandDelaySinkFile__pi2", "block", "75-77");
}
