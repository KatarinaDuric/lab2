// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_adder.h"

VL_ATTR_COLD void Vtop_adder___stl_sequent__TOP__top__DUT__dpath__imul__multi__add_mul_block__0(Vtop_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_adder___stl_sequent__TOP__top__DUT__dpath__imul__multi__add_mul_block__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0U)))) {
        vlSymsp->__Vcoverage[10267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[10268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[10269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[10270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[10271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[10272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[10273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[10274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[10275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[10276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[10277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[10278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[10279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[10280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[10281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[10282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[10283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[10284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[10285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[10286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[10287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[10288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[10289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[10290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[10291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[10292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[10293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[10294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[10295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[10296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[10297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[10298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_adder___stl_sequent__TOP__top__DUT__dpath__imul__multi__add_mul_block__1(Vtop_adder* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_adder___stl_sequent__TOP__top__DUT__dpath__imul__multi__add_mul_block__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[10235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[10236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[10237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[10238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[10239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[10240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[10241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[10242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[10243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[10244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[10245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[10246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[10247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[10248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[10249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[10250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[10251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[10252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[10253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[10254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[10255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[10256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[10257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[10258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[10259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[10260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[10261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[10262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[10263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[10264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[10265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[10266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    vlSelf->__PVT__sum = (vlSelf->__PVT__a + vlSelf->__PVT__b);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0U)))) {
        vlSymsp->__Vcoverage[10299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 1U)))) {
        vlSymsp->__Vcoverage[10300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 2U)))) {
        vlSymsp->__Vcoverage[10301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 3U)))) {
        vlSymsp->__Vcoverage[10302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 4U)))) {
        vlSymsp->__Vcoverage[10303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 5U)))) {
        vlSymsp->__Vcoverage[10304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 6U)))) {
        vlSymsp->__Vcoverage[10305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 7U)))) {
        vlSymsp->__Vcoverage[10306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 8U)))) {
        vlSymsp->__Vcoverage[10307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 9U)))) {
        vlSymsp->__Vcoverage[10308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xaU)))) {
        vlSymsp->__Vcoverage[10309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xbU)))) {
        vlSymsp->__Vcoverage[10310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xcU)))) {
        vlSymsp->__Vcoverage[10311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xdU)))) {
        vlSymsp->__Vcoverage[10312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xeU)))) {
        vlSymsp->__Vcoverage[10313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xfU)))) {
        vlSymsp->__Vcoverage[10314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x10U)))) {
        vlSymsp->__Vcoverage[10315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x11U)))) {
        vlSymsp->__Vcoverage[10316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x12U)))) {
        vlSymsp->__Vcoverage[10317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x13U)))) {
        vlSymsp->__Vcoverage[10318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x14U)))) {
        vlSymsp->__Vcoverage[10319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x15U)))) {
        vlSymsp->__Vcoverage[10320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x16U)))) {
        vlSymsp->__Vcoverage[10321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x17U)))) {
        vlSymsp->__Vcoverage[10322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x18U)))) {
        vlSymsp->__Vcoverage[10323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x19U)))) {
        vlSymsp->__Vcoverage[10324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1aU)))) {
        vlSymsp->__Vcoverage[10325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1bU)))) {
        vlSymsp->__Vcoverage[10326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1cU)))) {
        vlSymsp->__Vcoverage[10327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1dU)))) {
        vlSymsp->__Vcoverage[10328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1eU)))) {
        vlSymsp->__Vcoverage[10329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1fU)))) {
        vlSymsp->__Vcoverage[10330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_adder___configure_coverage(Vtop_adder* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_adder___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10235]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10236]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10237]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10238]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10239]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10240]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10241]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10242]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10243]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10244]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10245]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10246]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10247]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10248]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10249]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10250]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10251]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10252]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10253]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10254]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10255]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10256]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10257]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10258]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10259]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10260]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10261]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10262]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10263]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10264]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10265]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10266]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10267]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10268]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10269]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10270]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10271]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10272]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10273]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10274]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10275]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10276]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10277]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10278]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10279]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10280]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10281]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10282]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10283]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10284]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10285]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10286]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10287]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10288]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10289]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10290]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10291]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10292]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10293]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10294]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10295]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10296]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10297]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10298]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10299]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10300]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10301]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10302]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10303]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10304]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10305]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10306]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10307]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10308]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10309]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10310]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10311]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10312]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10313]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10314]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10315]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10316]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10317]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10318]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10319]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10320]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10321]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10322]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10323]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10324]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10325]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10326]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10327]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10328]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10329]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10330]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[31]", "");
}
