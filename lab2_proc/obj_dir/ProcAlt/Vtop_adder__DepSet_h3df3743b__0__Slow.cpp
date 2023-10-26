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
        vlSymsp->__Vcoverage[10453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 1U)))) {
        vlSymsp->__Vcoverage[10454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 2U)))) {
        vlSymsp->__Vcoverage[10455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 3U)))) {
        vlSymsp->__Vcoverage[10456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 4U)))) {
        vlSymsp->__Vcoverage[10457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 5U)))) {
        vlSymsp->__Vcoverage[10458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 6U)))) {
        vlSymsp->__Vcoverage[10459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 7U)))) {
        vlSymsp->__Vcoverage[10460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 8U)))) {
        vlSymsp->__Vcoverage[10461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 9U)))) {
        vlSymsp->__Vcoverage[10462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xaU)))) {
        vlSymsp->__Vcoverage[10463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xbU)))) {
        vlSymsp->__Vcoverage[10464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xcU)))) {
        vlSymsp->__Vcoverage[10465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xdU)))) {
        vlSymsp->__Vcoverage[10466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xeU)))) {
        vlSymsp->__Vcoverage[10467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0xfU)))) {
        vlSymsp->__Vcoverage[10468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x10U)))) {
        vlSymsp->__Vcoverage[10469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x11U)))) {
        vlSymsp->__Vcoverage[10470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x12U)))) {
        vlSymsp->__Vcoverage[10471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x13U)))) {
        vlSymsp->__Vcoverage[10472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x14U)))) {
        vlSymsp->__Vcoverage[10473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x15U)))) {
        vlSymsp->__Vcoverage[10474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x16U)))) {
        vlSymsp->__Vcoverage[10475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x17U)))) {
        vlSymsp->__Vcoverage[10476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x18U)))) {
        vlSymsp->__Vcoverage[10477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x19U)))) {
        vlSymsp->__Vcoverage[10478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1aU)))) {
        vlSymsp->__Vcoverage[10479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1bU)))) {
        vlSymsp->__Vcoverage[10480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1cU)))) {
        vlSymsp->__Vcoverage[10481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1dU)))) {
        vlSymsp->__Vcoverage[10482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1eU)))) {
        vlSymsp->__Vcoverage[10483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b, 0x1fU)))) {
        vlSymsp->__Vcoverage[10484].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[10421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[10422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[10423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[10424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[10425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[10426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[10427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[10428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[10429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[10430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[10431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[10432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[10433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[10434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[10435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[10436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[10437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[10438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[10439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[10440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[10441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[10442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[10443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[10444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[10445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[10446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[10447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[10448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[10449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[10450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[10451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[10452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    vlSelf->__PVT__sum = (vlSelf->__PVT__a + vlSelf->__PVT__b);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0U)))) {
        vlSymsp->__Vcoverage[10485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 1U)))) {
        vlSymsp->__Vcoverage[10486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 2U)))) {
        vlSymsp->__Vcoverage[10487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 3U)))) {
        vlSymsp->__Vcoverage[10488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 4U)))) {
        vlSymsp->__Vcoverage[10489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 5U)))) {
        vlSymsp->__Vcoverage[10490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 6U)))) {
        vlSymsp->__Vcoverage[10491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 7U)))) {
        vlSymsp->__Vcoverage[10492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 8U)))) {
        vlSymsp->__Vcoverage[10493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 9U)))) {
        vlSymsp->__Vcoverage[10494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xaU)))) {
        vlSymsp->__Vcoverage[10495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xbU)))) {
        vlSymsp->__Vcoverage[10496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xcU)))) {
        vlSymsp->__Vcoverage[10497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xdU)))) {
        vlSymsp->__Vcoverage[10498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xeU)))) {
        vlSymsp->__Vcoverage[10499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0xfU)))) {
        vlSymsp->__Vcoverage[10500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x10U)))) {
        vlSymsp->__Vcoverage[10501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x11U)))) {
        vlSymsp->__Vcoverage[10502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x12U)))) {
        vlSymsp->__Vcoverage[10503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x13U)))) {
        vlSymsp->__Vcoverage[10504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x14U)))) {
        vlSymsp->__Vcoverage[10505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x15U)))) {
        vlSymsp->__Vcoverage[10506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x16U)))) {
        vlSymsp->__Vcoverage[10507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x17U)))) {
        vlSymsp->__Vcoverage[10508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x18U)))) {
        vlSymsp->__Vcoverage[10509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x19U)))) {
        vlSymsp->__Vcoverage[10510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1aU)))) {
        vlSymsp->__Vcoverage[10511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1bU)))) {
        vlSymsp->__Vcoverage[10512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1cU)))) {
        vlSymsp->__Vcoverage[10513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1dU)))) {
        vlSymsp->__Vcoverage[10514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1eU)))) {
        vlSymsp->__Vcoverage[10515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__sum, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__sum, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__sum, 0x1fU)))) {
        vlSymsp->__Vcoverage[10516].fetch_add(1, std::memory_order_relaxed);
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
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10421]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10422]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10423]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10424]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10425]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10426]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10427]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10428]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10429]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10430]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10431]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10432]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10433]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10434]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10435]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10436]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10437]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10438]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10439]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10440]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10441]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10442]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10443]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10444]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10445]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10446]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10447]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10448]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10449]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10450]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10451]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10452]), first, "lab1_imul/IntMulAlt.v", 163, 15, "", "v_toggle/adder", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10453]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10454]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10455]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10456]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10457]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10458]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10459]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10460]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10461]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10462]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10463]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10464]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10465]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10466]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10467]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10468]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10469]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10470]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10471]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10472]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10473]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10474]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10475]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10476]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10477]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10478]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10479]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10480]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10481]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10482]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10483]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10484]), first, "lab1_imul/IntMulAlt.v", 164, 15, "", "v_toggle/adder", "b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10485]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10486]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10487]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10488]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10489]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10490]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10491]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10492]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10493]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10494]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10495]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10496]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10497]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10498]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10499]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10500]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10501]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10502]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10503]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10504]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10505]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10506]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10507]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10508]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10509]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10510]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10511]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10512]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10513]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10514]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10515]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10516]), first, "lab1_imul/IntMulAlt.v", 165, 16, "", "v_toggle/adder", "sum[31]", "");
}
