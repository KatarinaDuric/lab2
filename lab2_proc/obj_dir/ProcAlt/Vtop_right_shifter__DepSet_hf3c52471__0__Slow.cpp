// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_right_shifter.h"

VL_ATTR_COLD void Vtop_right_shifter___stl_sequent__TOP__top__DUT__dpath__imul__multi__rs_block__0(Vtop_right_shifter* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_right_shifter___stl_sequent__TOP__top__DUT__dpath__imul__multi__rs_block__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 0U)))) {
        vlSymsp->__Vcoverage[10617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 1U)))) {
        vlSymsp->__Vcoverage[10618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 2U)))) {
        vlSymsp->__Vcoverage[10619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__shamt), 3U)))) {
        vlSymsp->__Vcoverage[10620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__shamt, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__shamt), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0U)))) {
        vlSymsp->__Vcoverage[10585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 1U)))) {
        vlSymsp->__Vcoverage[10586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 2U)))) {
        vlSymsp->__Vcoverage[10587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 3U)))) {
        vlSymsp->__Vcoverage[10588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 4U)))) {
        vlSymsp->__Vcoverage[10589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 5U)))) {
        vlSymsp->__Vcoverage[10590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 6U)))) {
        vlSymsp->__Vcoverage[10591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 7U)))) {
        vlSymsp->__Vcoverage[10592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 8U)))) {
        vlSymsp->__Vcoverage[10593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 9U)))) {
        vlSymsp->__Vcoverage[10594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xaU)))) {
        vlSymsp->__Vcoverage[10595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xbU)))) {
        vlSymsp->__Vcoverage[10596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xcU)))) {
        vlSymsp->__Vcoverage[10597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xdU)))) {
        vlSymsp->__Vcoverage[10598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xeU)))) {
        vlSymsp->__Vcoverage[10599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0xfU)))) {
        vlSymsp->__Vcoverage[10600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x10U)))) {
        vlSymsp->__Vcoverage[10601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x11U)))) {
        vlSymsp->__Vcoverage[10602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x12U)))) {
        vlSymsp->__Vcoverage[10603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x13U)))) {
        vlSymsp->__Vcoverage[10604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x14U)))) {
        vlSymsp->__Vcoverage[10605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x15U)))) {
        vlSymsp->__Vcoverage[10606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x16U)))) {
        vlSymsp->__Vcoverage[10607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x17U)))) {
        vlSymsp->__Vcoverage[10608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x18U)))) {
        vlSymsp->__Vcoverage[10609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x19U)))) {
        vlSymsp->__Vcoverage[10610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1aU)))) {
        vlSymsp->__Vcoverage[10611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1bU)))) {
        vlSymsp->__Vcoverage[10612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1cU)))) {
        vlSymsp->__Vcoverage[10613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1dU)))) {
        vlSymsp->__Vcoverage[10614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1eU)))) {
        vlSymsp->__Vcoverage[10615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a, 0x1fU)))) {
        vlSymsp->__Vcoverage[10616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a, 0x1fU)));
    }
    vlSelf->__PVT__result = (vlSelf->__PVT__a >> (IData)(vlSelf->__PVT__shamt));
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0U)))) {
        vlSymsp->__Vcoverage[10621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 1U)))) {
        vlSymsp->__Vcoverage[10622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 2U)))) {
        vlSymsp->__Vcoverage[10623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 3U)))) {
        vlSymsp->__Vcoverage[10624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 4U)))) {
        vlSymsp->__Vcoverage[10625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 5U)))) {
        vlSymsp->__Vcoverage[10626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 6U)))) {
        vlSymsp->__Vcoverage[10627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 7U)))) {
        vlSymsp->__Vcoverage[10628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 8U)))) {
        vlSymsp->__Vcoverage[10629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 9U)))) {
        vlSymsp->__Vcoverage[10630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xaU)))) {
        vlSymsp->__Vcoverage[10631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xbU)))) {
        vlSymsp->__Vcoverage[10632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xcU)))) {
        vlSymsp->__Vcoverage[10633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xdU)))) {
        vlSymsp->__Vcoverage[10634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xeU)))) {
        vlSymsp->__Vcoverage[10635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0xfU)))) {
        vlSymsp->__Vcoverage[10636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x10U)))) {
        vlSymsp->__Vcoverage[10637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x11U)))) {
        vlSymsp->__Vcoverage[10638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x12U)))) {
        vlSymsp->__Vcoverage[10639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x13U)))) {
        vlSymsp->__Vcoverage[10640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x14U)))) {
        vlSymsp->__Vcoverage[10641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x15U)))) {
        vlSymsp->__Vcoverage[10642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x16U)))) {
        vlSymsp->__Vcoverage[10643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x17U)))) {
        vlSymsp->__Vcoverage[10644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x18U)))) {
        vlSymsp->__Vcoverage[10645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x19U)))) {
        vlSymsp->__Vcoverage[10646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1aU)))) {
        vlSymsp->__Vcoverage[10647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1bU)))) {
        vlSymsp->__Vcoverage[10648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1cU)))) {
        vlSymsp->__Vcoverage[10649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1dU)))) {
        vlSymsp->__Vcoverage[10650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1eU)))) {
        vlSymsp->__Vcoverage[10651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__result, 0x1fU)))) {
        vlSymsp->__Vcoverage[10652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__result, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__result, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_right_shifter___configure_coverage(Vtop_right_shifter* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_right_shifter___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10585]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10586]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10587]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10588]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10589]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10590]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10591]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10592]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10593]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10594]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10595]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10596]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10597]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10598]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10599]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10600]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10601]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10602]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10603]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10604]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10605]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10606]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10607]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10608]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10609]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10610]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10611]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10612]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10613]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10614]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10615]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10616]), first, "lab1_imul/IntMulAlt.v", 185, 15, "", "v_toggle/right_shifter", "a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10617]), first, "lab1_imul/IntMulAlt.v", 186, 14, "", "v_toggle/right_shifter", "shamt[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10618]), first, "lab1_imul/IntMulAlt.v", 186, 14, "", "v_toggle/right_shifter", "shamt[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10619]), first, "lab1_imul/IntMulAlt.v", 186, 14, "", "v_toggle/right_shifter", "shamt[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10620]), first, "lab1_imul/IntMulAlt.v", 186, 14, "", "v_toggle/right_shifter", "shamt[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10621]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10622]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10623]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10624]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10625]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10626]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10627]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10628]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10629]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10630]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10631]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10632]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10633]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10634]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10635]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10636]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10637]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10638]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10639]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10640]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10641]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10642]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10643]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10644]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10645]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10646]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10647]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10648]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10649]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10650]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10651]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10652]), first, "lab1_imul/IntMulAlt.v", 187, 16, "", "v_toggle/right_shifter", "result[31]", "");
}
