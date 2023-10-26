// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_left_shifter.h"

VL_ATTR_COLD void Vtop_left_shifter___stl_sequent__TOP__top__DUT__dpath__imul__multi__ls_block__0(Vtop_left_shifter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_left_shifter___stl_sequent__TOP__top__DUT__dpath__imul__multi__ls_block__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[10517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[10518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[10519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[10520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[10521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[10522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[10523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[10524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[10525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[10526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[10527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[10528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[10529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[10530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[10531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[10532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[10533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[10534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[10535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[10536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[10537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[10538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[10539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[10540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[10541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[10542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[10543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[10544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[10545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[10546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[10547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[10548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 0U)))) {
        vlSymsp->__Vcoverage[10549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 1U)))) {
        vlSymsp->__Vcoverage[10550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 2U)))) {
        vlSymsp->__Vcoverage[10551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 3U)))) {
        vlSymsp->__Vcoverage[10552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 3U)));
    }
    vlSelf->__PVT__result = (vlSelf->__PVT__a << (IData)(vlSelf->__PVT__shamt));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0U)))) {
        vlSymsp->__Vcoverage[10553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 1U)))) {
        vlSymsp->__Vcoverage[10554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 2U)))) {
        vlSymsp->__Vcoverage[10555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 3U)))) {
        vlSymsp->__Vcoverage[10556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 4U)))) {
        vlSymsp->__Vcoverage[10557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 5U)))) {
        vlSymsp->__Vcoverage[10558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 6U)))) {
        vlSymsp->__Vcoverage[10559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 7U)))) {
        vlSymsp->__Vcoverage[10560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 8U)))) {
        vlSymsp->__Vcoverage[10561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 9U)))) {
        vlSymsp->__Vcoverage[10562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xaU)))) {
        vlSymsp->__Vcoverage[10563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xbU)))) {
        vlSymsp->__Vcoverage[10564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xcU)))) {
        vlSymsp->__Vcoverage[10565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xdU)))) {
        vlSymsp->__Vcoverage[10566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xeU)))) {
        vlSymsp->__Vcoverage[10567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xfU)))) {
        vlSymsp->__Vcoverage[10568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x10U)))) {
        vlSymsp->__Vcoverage[10569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x11U)))) {
        vlSymsp->__Vcoverage[10570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x12U)))) {
        vlSymsp->__Vcoverage[10571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x13U)))) {
        vlSymsp->__Vcoverage[10572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x14U)))) {
        vlSymsp->__Vcoverage[10573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x15U)))) {
        vlSymsp->__Vcoverage[10574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x16U)))) {
        vlSymsp->__Vcoverage[10575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x17U)))) {
        vlSymsp->__Vcoverage[10576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x18U)))) {
        vlSymsp->__Vcoverage[10577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x19U)))) {
        vlSymsp->__Vcoverage[10578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1aU)))) {
        vlSymsp->__Vcoverage[10579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1bU)))) {
        vlSymsp->__Vcoverage[10580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1cU)))) {
        vlSymsp->__Vcoverage[10581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1dU)))) {
        vlSymsp->__Vcoverage[10582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1eU)))) {
        vlSymsp->__Vcoverage[10583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1fU)))) {
        vlSymsp->__Vcoverage[10584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_left_shifter___configure_coverage(Vtop_left_shifter* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_left_shifter___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10517]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10518]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10519]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10520]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10521]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10522]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10523]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10524]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10525]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10526]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10527]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10528]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10529]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10530]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10531]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10532]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10533]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10534]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10535]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10536]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10537]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10538]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10539]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10540]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10541]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10542]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10543]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10544]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10545]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10546]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10547]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10548]), first, "lab1_imul/IntMulAlt.v", 174, 15, "", "v_toggle/left_shifter", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10549]), first, "lab1_imul/IntMulAlt.v", 175, 14, "", "v_toggle/left_shifter", "shamt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10550]), first, "lab1_imul/IntMulAlt.v", 175, 14, "", "v_toggle/left_shifter", "shamt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10551]), first, "lab1_imul/IntMulAlt.v", 175, 14, "", "v_toggle/left_shifter", "shamt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10552]), first, "lab1_imul/IntMulAlt.v", 175, 14, "", "v_toggle/left_shifter", "shamt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10553]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10554]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10555]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10556]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10557]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10558]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10559]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10560]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10561]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10562]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10563]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10564]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10565]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10566]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10567]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10568]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10569]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10570]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10571]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10572]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10573]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10574]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10575]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10576]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10577]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10578]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10579]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10580]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10581]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10582]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10583]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10584]), first, "lab1_imul/IntMulAlt.v", 176, 16, "", "v_toggle/left_shifter", "result[31]", "");
}
