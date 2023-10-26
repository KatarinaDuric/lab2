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
        vlSymsp->__Vcoverage[1260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 1U)))) {
        vlSymsp->__Vcoverage[1261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 2U)))) {
        vlSymsp->__Vcoverage[1262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 3U)))) {
        vlSymsp->__Vcoverage[1263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 4U)))) {
        vlSymsp->__Vcoverage[1264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 5U)))) {
        vlSymsp->__Vcoverage[1265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 6U)))) {
        vlSymsp->__Vcoverage[1266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 7U)))) {
        vlSymsp->__Vcoverage[1267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 8U)))) {
        vlSymsp->__Vcoverage[1268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 9U)))) {
        vlSymsp->__Vcoverage[1269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[1270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[1271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[1272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[1273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[1274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[1275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[1276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[1277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[1278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[1279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[1280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[1281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[1282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[1283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[1284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[1285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[1286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[1287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[1288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[1289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[1290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__max_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[1291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__max_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__max_delay, 0x1fU)));
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__max_delay 
        = vlSelf->__PVT__max_delay;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__sink__sink.__PVT__reset = vlSelf->__PVT__reset;
    vlSelf->__PVT__done = vlSymsp->TOP__top__sink__sink.__PVT__done;
    vlSelf->__PVT__sink_rdy = vlSymsp->TOP__top__sink__sink.__PVT__rdy;
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[1326].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    if (((IData)(vlSelf->__PVT__sink_rdy) ^ (IData)(vlSelf->__Vtogcov__sink_rdy))) {
        vlSymsp->__Vcoverage[1328].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[1258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__sink__sink.__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__2(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[1292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_val 
        = vlSelf->__PVT__val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[1295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[1296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[1297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[1298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[1299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[1300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[1301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[1302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[1303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSymsp->TOP__top__sink__msg_delay.__PVT__in_msg 
        = vlSelf->__PVT__msg;
}

VL_ATTR_COLD void Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__3(Vtop_vc_TestRandDelaySinkFile__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelaySinkFile__pi2___stl_sequent__TOP__top__sink__3\n"); );
    // Body
    vlSelf->__PVT__sink_val = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_val;
    vlSelf->__PVT__rdy = vlSymsp->TOP__top__sink__msg_delay.__PVT__in_rdy;
    vlSelf->__PVT__sink_msg = vlSymsp->TOP__top__sink__msg_delay.__PVT__out_msg;
    if (((IData)(vlSelf->__PVT__sink_val) ^ (IData)(vlSelf->__Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[1327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sink_val = vlSelf->__PVT__sink_val;
    }
    vlSymsp->TOP__top__sink__sink.__PVT__val = vlSelf->__PVT__sink_val;
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[1293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0U)))) {
        vlSymsp->__Vcoverage[1329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 1U)))) {
        vlSymsp->__Vcoverage[1330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 2U)))) {
        vlSymsp->__Vcoverage[1331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 3U)))) {
        vlSymsp->__Vcoverage[1332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 4U)))) {
        vlSymsp->__Vcoverage[1333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 5U)))) {
        vlSymsp->__Vcoverage[1334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 6U)))) {
        vlSymsp->__Vcoverage[1335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 7U)))) {
        vlSymsp->__Vcoverage[1336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 8U)))) {
        vlSymsp->__Vcoverage[1337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 9U)))) {
        vlSymsp->__Vcoverage[1338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__sink_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sink_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sink_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1360].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1258]), first, "../vc/TestRandDelaySinkFile.v", 17, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1259]), first, "../vc/TestRandDelaySinkFile.v", 18, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1260]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1261]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1262]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1263]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1264]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1265]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1266]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1267]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1268]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1269]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1270]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1271]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1272]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1273]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1274]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1275]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1276]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1277]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1278]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1279]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1280]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1281]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1282]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1283]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1284]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1285]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1286]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1287]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1288]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1289]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1290]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1291]), first, "../vc/TestRandDelaySinkFile.v", 22, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "max_delay[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1292]), first, "../vc/TestRandDelaySinkFile.v", 26, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1293]), first, "../vc/TestRandDelaySinkFile.v", 27, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1294]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1295]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1296]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1297]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1298]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1299]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1300]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1301]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1302]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1303]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1304]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1305]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1306]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1307]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1308]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1309]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1310]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1311]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1312]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1313]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1314]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1315]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1316]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1317]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1318]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1319]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1320]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1321]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1322]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1323]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1324]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1325]), first, "../vc/TestRandDelaySinkFile.v", 28, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1326]), first, "../vc/TestRandDelaySinkFile.v", 32, 34, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "done", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1327]), first, "../vc/TestRandDelaySinkFile.v", 39, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1328]), first, "../vc/TestRandDelaySinkFile.v", 40, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1329]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1330]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1331]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1332]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1333]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1334]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1335]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1336]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1337]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1338]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1339]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1340]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1341]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1342]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1343]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1344]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1345]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1346]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1347]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1348]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1349]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1350]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1351]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1352]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1353]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1354]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1355]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1356]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1357]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1358]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1359]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1360]), first, "../vc/TestRandDelaySinkFile.v", 41, 27, "", "v_toggle/vc_TestRandDelaySinkFile__pi2", "sink_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1361]), first, "../vc/TestRandDelaySinkFile.v", 75, 7, "", "v_line/vc_TestRandDelaySinkFile__pi2", "block", "75-77");
}
