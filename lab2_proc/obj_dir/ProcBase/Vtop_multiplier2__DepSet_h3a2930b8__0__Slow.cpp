// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_multiplier2.h"

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__0(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__istream_rdy) ^ (IData)(vlSelf->__Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[8692].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_rdy = vlSelf->__PVT__istream_rdy;
    }
    if (((IData)(vlSelf->__PVT__ostream_val) ^ (IData)(vlSelf->__Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[8757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_val = vlSelf->__PVT__ostream_val;
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 0U)))) {
        vlSymsp->__Vcoverage[8855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 1U)))) {
        vlSymsp->__Vcoverage[8856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 2U)))) {
        vlSymsp->__Vcoverage[8857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 3U)))) {
        vlSymsp->__Vcoverage[8858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 4U)))) {
        vlSymsp->__Vcoverage[8859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 5U)))) {
        vlSymsp->__Vcoverage[8860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[8759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[8760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[8761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[8763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[8764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[8765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[8766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[8767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[8768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0U)))) {
        vlSymsp->__Vcoverage[8861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 1U)))) {
        vlSymsp->__Vcoverage[8862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 2U)))) {
        vlSymsp->__Vcoverage[8863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 3U)))) {
        vlSymsp->__Vcoverage[8864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 4U)))) {
        vlSymsp->__Vcoverage[8865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 5U)))) {
        vlSymsp->__Vcoverage[8866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 6U)))) {
        vlSymsp->__Vcoverage[8867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 7U)))) {
        vlSymsp->__Vcoverage[8868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 8U)))) {
        vlSymsp->__Vcoverage[8869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 9U)))) {
        vlSymsp->__Vcoverage[8870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xaU)))) {
        vlSymsp->__Vcoverage[8871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xbU)))) {
        vlSymsp->__Vcoverage[8872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xcU)))) {
        vlSymsp->__Vcoverage[8873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xdU)))) {
        vlSymsp->__Vcoverage[8874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xeU)))) {
        vlSymsp->__Vcoverage[8875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xfU)))) {
        vlSymsp->__Vcoverage[8876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x10U)))) {
        vlSymsp->__Vcoverage[8877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x11U)))) {
        vlSymsp->__Vcoverage[8878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x12U)))) {
        vlSymsp->__Vcoverage[8879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x13U)))) {
        vlSymsp->__Vcoverage[8880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x14U)))) {
        vlSymsp->__Vcoverage[8881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x15U)))) {
        vlSymsp->__Vcoverage[8882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x16U)))) {
        vlSymsp->__Vcoverage[8883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x17U)))) {
        vlSymsp->__Vcoverage[8884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x18U)))) {
        vlSymsp->__Vcoverage[8885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x19U)))) {
        vlSymsp->__Vcoverage[8886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0U)))) {
        vlSymsp->__Vcoverage[8893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 1U)))) {
        vlSymsp->__Vcoverage[8894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 2U)))) {
        vlSymsp->__Vcoverage[8895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 3U)))) {
        vlSymsp->__Vcoverage[8896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 4U)))) {
        vlSymsp->__Vcoverage[8897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 5U)))) {
        vlSymsp->__Vcoverage[8898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 6U)))) {
        vlSymsp->__Vcoverage[8899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 7U)))) {
        vlSymsp->__Vcoverage[8900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 8U)))) {
        vlSymsp->__Vcoverage[8901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 9U)))) {
        vlSymsp->__Vcoverage[8902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xaU)))) {
        vlSymsp->__Vcoverage[8903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xbU)))) {
        vlSymsp->__Vcoverage[8904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xcU)))) {
        vlSymsp->__Vcoverage[8905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xdU)))) {
        vlSymsp->__Vcoverage[8906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xeU)))) {
        vlSymsp->__Vcoverage[8907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xfU)))) {
        vlSymsp->__Vcoverage[8908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x10U)))) {
        vlSymsp->__Vcoverage[8909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x11U)))) {
        vlSymsp->__Vcoverage[8910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x12U)))) {
        vlSymsp->__Vcoverage[8911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x13U)))) {
        vlSymsp->__Vcoverage[8912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x14U)))) {
        vlSymsp->__Vcoverage[8913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x15U)))) {
        vlSymsp->__Vcoverage[8914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x16U)))) {
        vlSymsp->__Vcoverage[8915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x17U)))) {
        vlSymsp->__Vcoverage[8916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x18U)))) {
        vlSymsp->__Vcoverage[8917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x19U)))) {
        vlSymsp->__Vcoverage[8918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__b 
        = vlSelf->__PVT__ostream_msg;
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__1(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[8690].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__2(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[8689].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__3(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[8693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[8694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[8695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[8697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[8698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[8699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[8700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[8701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[8702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[8740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[8741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[8742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[8743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[8744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[8745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[8746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[8747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[8748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[8749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[8750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[8751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[8752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[8753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[8754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[8755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[8756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
    vlSelf->__PVT__req_msg_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
    vlSelf->__PVT__req_msg_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0U)))) {
        vlSymsp->__Vcoverage[8791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 1U)))) {
        vlSymsp->__Vcoverage[8792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 2U)))) {
        vlSymsp->__Vcoverage[8793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 3U)))) {
        vlSymsp->__Vcoverage[8794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 4U)))) {
        vlSymsp->__Vcoverage[8795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 5U)))) {
        vlSymsp->__Vcoverage[8796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 6U)))) {
        vlSymsp->__Vcoverage[8797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 7U)))) {
        vlSymsp->__Vcoverage[8798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 8U)))) {
        vlSymsp->__Vcoverage[8799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 9U)))) {
        vlSymsp->__Vcoverage[8800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xaU)))) {
        vlSymsp->__Vcoverage[8801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xbU)))) {
        vlSymsp->__Vcoverage[8802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xcU)))) {
        vlSymsp->__Vcoverage[8803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xdU)))) {
        vlSymsp->__Vcoverage[8804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xeU)))) {
        vlSymsp->__Vcoverage[8805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xfU)))) {
        vlSymsp->__Vcoverage[8806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x10U)))) {
        vlSymsp->__Vcoverage[8807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x11U)))) {
        vlSymsp->__Vcoverage[8808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x12U)))) {
        vlSymsp->__Vcoverage[8809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x13U)))) {
        vlSymsp->__Vcoverage[8810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x14U)))) {
        vlSymsp->__Vcoverage[8811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x15U)))) {
        vlSymsp->__Vcoverage[8812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x16U)))) {
        vlSymsp->__Vcoverage[8813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x17U)))) {
        vlSymsp->__Vcoverage[8814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x18U)))) {
        vlSymsp->__Vcoverage[8815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x19U)))) {
        vlSymsp->__Vcoverage[8816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1aU)))) {
        vlSymsp->__Vcoverage[8817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1bU)))) {
        vlSymsp->__Vcoverage[8818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1cU)))) {
        vlSymsp->__Vcoverage[8819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1dU)))) {
        vlSymsp->__Vcoverage[8820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1eU)))) {
        vlSymsp->__Vcoverage[8821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1fU)))) {
        vlSymsp->__Vcoverage[8822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1fU)));
    }
    vlSelf->__Vcellinp__ls_block____pinNumber1 = ((IData)(vlSelf->__PVT__istream_rdy)
                                                   ? vlSelf->__PVT__req_msg_a
                                                   : vlSelf->__PVT__a_reg);
    vlSelf->__Vcellinp__add_mul_block____pinNumber1 
        = ((IData)(vlSelf->__PVT__istream_rdy) ? vlSelf->__PVT__req_msg_a
            : vlSelf->__PVT__a_reg);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0U)))) {
        vlSymsp->__Vcoverage[8823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 1U)))) {
        vlSymsp->__Vcoverage[8824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 2U)))) {
        vlSymsp->__Vcoverage[8825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 3U)))) {
        vlSymsp->__Vcoverage[8826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 4U)))) {
        vlSymsp->__Vcoverage[8827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 5U)))) {
        vlSymsp->__Vcoverage[8828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 6U)))) {
        vlSymsp->__Vcoverage[8829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 7U)))) {
        vlSymsp->__Vcoverage[8830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 8U)))) {
        vlSymsp->__Vcoverage[8831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 9U)))) {
        vlSymsp->__Vcoverage[8832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xaU)))) {
        vlSymsp->__Vcoverage[8833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xbU)))) {
        vlSymsp->__Vcoverage[8834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xcU)))) {
        vlSymsp->__Vcoverage[8835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xdU)))) {
        vlSymsp->__Vcoverage[8836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xeU)))) {
        vlSymsp->__Vcoverage[8837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xfU)))) {
        vlSymsp->__Vcoverage[8838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x10U)))) {
        vlSymsp->__Vcoverage[8839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x11U)))) {
        vlSymsp->__Vcoverage[8840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x12U)))) {
        vlSymsp->__Vcoverage[8841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x13U)))) {
        vlSymsp->__Vcoverage[8842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x14U)))) {
        vlSymsp->__Vcoverage[8843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x15U)))) {
        vlSymsp->__Vcoverage[8844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x16U)))) {
        vlSymsp->__Vcoverage[8845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x17U)))) {
        vlSymsp->__Vcoverage[8846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x18U)))) {
        vlSymsp->__Vcoverage[8847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x19U)))) {
        vlSymsp->__Vcoverage[8848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1aU)))) {
        vlSymsp->__Vcoverage[8849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1bU)))) {
        vlSymsp->__Vcoverage[8850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1cU)))) {
        vlSymsp->__Vcoverage[8851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1dU)))) {
        vlSymsp->__Vcoverage[8852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1eU)))) {
        vlSymsp->__Vcoverage[8853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1fU)))) {
        vlSymsp->__Vcoverage[8854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1fU)));
    }
    vlSelf->__Vfunc_jump__0__b = (0x7fU & ((IData)(vlSelf->__PVT__istream_rdy)
                                            ? VL_SEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U, 7U)
                                            : VL_SEL_IIII(32, vlSelf->__PVT__b_reg, 1U, 7U)));
    if ((0U == (IData)(vlSelf->__Vfunc_jump__0__b))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 8U;
        vlSymsp->__Vcoverage[9026].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x40U == (IData)(vlSelf->__Vfunc_jump__0__b))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 7U;
        vlSymsp->__Vcoverage[9027].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x20U == (0x3fU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 6U;
        vlSymsp->__Vcoverage[9028].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 5U;
        vlSymsp->__Vcoverage[9029].fetch_add(1, std::memory_order_relaxed);
    } else if ((8U == (0xfU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 4U;
        vlSymsp->__Vcoverage[9030].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (7U & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 3U;
        vlSymsp->__Vcoverage[9031].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (3U & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 2U;
        vlSymsp->__Vcoverage[9032].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vfunc_jump__0__Vfuncout = 1U;
        vlSymsp->__Vcoverage[9033].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9034].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__ls_block____pinNumber2 = vlSelf->__Vfunc_jump__0__Vfuncout;
    vlSelf->__Vfunc_jump__1__b = (0x7fU & ((IData)(vlSelf->__PVT__istream_rdy)
                                            ? VL_SEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U, 7U)
                                            : VL_SEL_IIII(32, vlSelf->__PVT__b_reg, 1U, 7U)));
    if ((0U == (IData)(vlSelf->__Vfunc_jump__1__b))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 8U;
        vlSymsp->__Vcoverage[9026].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x40U == (IData)(vlSelf->__Vfunc_jump__1__b))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 7U;
        vlSymsp->__Vcoverage[9027].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x20U == (0x3fU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 6U;
        vlSymsp->__Vcoverage[9028].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 5U;
        vlSymsp->__Vcoverage[9029].fetch_add(1, std::memory_order_relaxed);
    } else if ((8U == (0xfU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 4U;
        vlSymsp->__Vcoverage[9030].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (7U & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 3U;
        vlSymsp->__Vcoverage[9031].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (3U & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 2U;
        vlSymsp->__Vcoverage[9032].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vfunc_jump__1__Vfuncout = 1U;
        vlSymsp->__Vcoverage[9033].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9034].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__rs_block____pinNumber2 = vlSelf->__Vfunc_jump__1__Vfuncout;
    vlSelf->__Vcellinp__rs_block____pinNumber1 = ((IData)(vlSelf->__PVT__istream_rdy)
                                                   ? vlSelf->__PVT__req_msg_b
                                                   : vlSelf->__PVT__b_reg);
    vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__a 
        = vlSelf->__Vcellinp__ls_block____pinNumber1;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__a 
        = vlSelf->__Vcellinp__add_mul_block____pinNumber1;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__shamt 
        = vlSelf->__Vcellinp__ls_block____pinNumber2;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__shamt 
        = vlSelf->__Vcellinp__rs_block____pinNumber2;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__a 
        = vlSelf->__Vcellinp__rs_block____pinNumber1;
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__4(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[8758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[8691].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
    vlSelf->__PVT__a_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__result;
    vlSelf->__PVT__msg_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__sum;
    vlSelf->__PVT__b_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__result;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0U)))) {
        vlSymsp->__Vcoverage[8925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 1U)))) {
        vlSymsp->__Vcoverage[8926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 2U)))) {
        vlSymsp->__Vcoverage[8927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 3U)))) {
        vlSymsp->__Vcoverage[8928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 4U)))) {
        vlSymsp->__Vcoverage[8929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 5U)))) {
        vlSymsp->__Vcoverage[8930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 6U)))) {
        vlSymsp->__Vcoverage[8931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 7U)))) {
        vlSymsp->__Vcoverage[8932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 8U)))) {
        vlSymsp->__Vcoverage[8933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 9U)))) {
        vlSymsp->__Vcoverage[8934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xaU)))) {
        vlSymsp->__Vcoverage[8935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xbU)))) {
        vlSymsp->__Vcoverage[8936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xcU)))) {
        vlSymsp->__Vcoverage[8937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xdU)))) {
        vlSymsp->__Vcoverage[8938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xeU)))) {
        vlSymsp->__Vcoverage[8939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xfU)))) {
        vlSymsp->__Vcoverage[8940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x10U)))) {
        vlSymsp->__Vcoverage[8941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x11U)))) {
        vlSymsp->__Vcoverage[8942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x12U)))) {
        vlSymsp->__Vcoverage[8943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x13U)))) {
        vlSymsp->__Vcoverage[8944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x14U)))) {
        vlSymsp->__Vcoverage[8945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x15U)))) {
        vlSymsp->__Vcoverage[8946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x16U)))) {
        vlSymsp->__Vcoverage[8947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x17U)))) {
        vlSymsp->__Vcoverage[8948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x18U)))) {
        vlSymsp->__Vcoverage[8949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x19U)))) {
        vlSymsp->__Vcoverage[8950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[8951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[8952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[8953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[8954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[8955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[8956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0U)))) {
        vlSymsp->__Vcoverage[8989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 1U)))) {
        vlSymsp->__Vcoverage[8990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 2U)))) {
        vlSymsp->__Vcoverage[8991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 3U)))) {
        vlSymsp->__Vcoverage[8992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 4U)))) {
        vlSymsp->__Vcoverage[8993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 5U)))) {
        vlSymsp->__Vcoverage[8994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 6U)))) {
        vlSymsp->__Vcoverage[8995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 7U)))) {
        vlSymsp->__Vcoverage[8996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 8U)))) {
        vlSymsp->__Vcoverage[8997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 9U)))) {
        vlSymsp->__Vcoverage[8998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xaU)))) {
        vlSymsp->__Vcoverage[8999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xbU)))) {
        vlSymsp->__Vcoverage[9000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xcU)))) {
        vlSymsp->__Vcoverage[9001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xdU)))) {
        vlSymsp->__Vcoverage[9002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xeU)))) {
        vlSymsp->__Vcoverage[9003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xfU)))) {
        vlSymsp->__Vcoverage[9004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x10U)))) {
        vlSymsp->__Vcoverage[9005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x11U)))) {
        vlSymsp->__Vcoverage[9006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x12U)))) {
        vlSymsp->__Vcoverage[9007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x13U)))) {
        vlSymsp->__Vcoverage[9008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x14U)))) {
        vlSymsp->__Vcoverage[9009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x15U)))) {
        vlSymsp->__Vcoverage[9010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x16U)))) {
        vlSymsp->__Vcoverage[9011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x17U)))) {
        vlSymsp->__Vcoverage[9012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x18U)))) {
        vlSymsp->__Vcoverage[9013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x19U)))) {
        vlSymsp->__Vcoverage[9014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[9015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[9016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[9017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[9018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[9019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[9020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0U)))) {
        vlSymsp->__Vcoverage[8957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 1U)))) {
        vlSymsp->__Vcoverage[8958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 2U)))) {
        vlSymsp->__Vcoverage[8959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 3U)))) {
        vlSymsp->__Vcoverage[8960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 4U)))) {
        vlSymsp->__Vcoverage[8961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 5U)))) {
        vlSymsp->__Vcoverage[8962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 6U)))) {
        vlSymsp->__Vcoverage[8963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 7U)))) {
        vlSymsp->__Vcoverage[8964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 8U)))) {
        vlSymsp->__Vcoverage[8965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 9U)))) {
        vlSymsp->__Vcoverage[8966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xaU)))) {
        vlSymsp->__Vcoverage[8967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xbU)))) {
        vlSymsp->__Vcoverage[8968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xcU)))) {
        vlSymsp->__Vcoverage[8969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xdU)))) {
        vlSymsp->__Vcoverage[8970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xeU)))) {
        vlSymsp->__Vcoverage[8971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xfU)))) {
        vlSymsp->__Vcoverage[8972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x10U)))) {
        vlSymsp->__Vcoverage[8973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x11U)))) {
        vlSymsp->__Vcoverage[8974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x12U)))) {
        vlSymsp->__Vcoverage[8975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x13U)))) {
        vlSymsp->__Vcoverage[8976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x14U)))) {
        vlSymsp->__Vcoverage[8977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x15U)))) {
        vlSymsp->__Vcoverage[8978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x16U)))) {
        vlSymsp->__Vcoverage[8979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x17U)))) {
        vlSymsp->__Vcoverage[8980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x18U)))) {
        vlSymsp->__Vcoverage[8981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x19U)))) {
        vlSymsp->__Vcoverage[8982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[8983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[8984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[8985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[8986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[8987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[8988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_multiplier2___configure_coverage(Vtop_multiplier2* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8689]), first, "lab1_imul/IntMulAlt.v", 90, 23, "", "v_toggle/multiplier2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8690]), first, "lab1_imul/IntMulAlt.v", 91, 23, "", "v_toggle/multiplier2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8691]), first, "lab1_imul/IntMulAlt.v", 93, 23, "", "v_toggle/multiplier2", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8692]), first, "lab1_imul/IntMulAlt.v", 94, 23, "", "v_toggle/multiplier2", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8693]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8694]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8695]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8696]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8697]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8698]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8699]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8700]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8701]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8702]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8703]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8704]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8705]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8706]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8707]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8708]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8709]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8710]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8711]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8712]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8713]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8714]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8715]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8716]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8717]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8718]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8719]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8720]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8721]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8722]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8723]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8724]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8725]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8726]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8727]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8728]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8729]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8730]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8731]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8732]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8733]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8734]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8735]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8736]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8737]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8738]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8739]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8740]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8741]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8742]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8743]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8744]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8745]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8746]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8747]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8748]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8749]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8750]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8751]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8752]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8753]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8754]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8755]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8756]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8757]), first, "lab1_imul/IntMulAlt.v", 97, 23, "", "v_toggle/multiplier2", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8758]), first, "lab1_imul/IntMulAlt.v", 98, 23, "", "v_toggle/multiplier2", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8759]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8760]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8761]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8762]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8763]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8764]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8765]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8766]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8767]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8768]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8769]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8770]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8771]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8772]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8773]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8774]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8775]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8776]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8777]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8778]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8779]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8780]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8781]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8782]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8783]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8784]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8785]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8786]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8787]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8788]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8789]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8790]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8791]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8792]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8793]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8794]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8795]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8796]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8797]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8798]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8799]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8800]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8801]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8802]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8803]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8804]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8805]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8806]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8807]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8808]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8809]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8810]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8811]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8812]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8813]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8814]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8815]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8816]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8817]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8818]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8819]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8820]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8821]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8822]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8823]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8824]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8825]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8826]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8827]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8828]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8829]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8830]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8831]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8832]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8833]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8834]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8835]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8836]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8837]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8838]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8839]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8840]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8841]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8842]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8843]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8844]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8845]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8846]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8847]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8848]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8849]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8850]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8851]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8852]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8853]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8854]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8855]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8856]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8857]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8858]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8859]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8860]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8861]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8862]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8863]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8864]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8865]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8866]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8867]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8868]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8869]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8870]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8871]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8872]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8873]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8874]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8875]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8876]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8877]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8878]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8879]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8880]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8881]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8882]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8883]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8884]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8885]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8886]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8887]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8888]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8889]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8890]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8891]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8892]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8893]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8894]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8895]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8896]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8897]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8898]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8899]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8900]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8901]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8902]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8903]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8904]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8905]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8906]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8907]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8908]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8909]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8910]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8911]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8912]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8913]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8914]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8915]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8916]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8917]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8918]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8919]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8920]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8921]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8922]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8923]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8924]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8925]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8926]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8927]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8928]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8929]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8930]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8931]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8932]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8933]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8934]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8935]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8936]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8937]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8938]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8939]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8940]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8941]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8942]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8943]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8944]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8945]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8946]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8947]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8948]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8949]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8950]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8951]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8952]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8953]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8954]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8955]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8956]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8957]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8958]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8959]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8960]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8961]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8962]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8963]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8964]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8965]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8966]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8967]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8968]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8969]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8970]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8971]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8972]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8973]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8974]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8975]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8976]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8977]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8978]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8979]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8980]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8981]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8982]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8983]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8984]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8985]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8986]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8987]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8988]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8989]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8990]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8991]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8992]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8993]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8994]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8995]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8996]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8997]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8998]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8999]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9000]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9001]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9002]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9003]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9004]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9005]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9006]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9007]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9008]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9009]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9010]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9011]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9012]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9013]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9014]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9015]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9016]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9017]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9018]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9019]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9020]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9021]), first, "lab1_imul/IntMulAlt.v", 131, 8, "", "v_line/multiplier2", "if", "131-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9022]), first, "lab1_imul/IntMulAlt.v", 131, 9, "", "v_line/multiplier2", "else", "139-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9023]), first, "lab1_imul/IntMulAlt.v", 122, 8, "", "v_line/multiplier2", "elsif", "122-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9024]), first, "lab1_imul/IntMulAlt.v", 113, 3, "", "v_line/multiplier2", "elsif", "113-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9025]), first, "lab1_imul/IntMulAlt.v", 112, 2, "", "v_line/multiplier2", "block", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9026]), first, "lab1_imul/IntMulAlt.v", 149, 14, "", "v_line/multiplier2", "case", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9027]), first, "lab1_imul/IntMulAlt.v", 150, 14, "", "v_line/multiplier2", "case", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9028]), first, "lab1_imul/IntMulAlt.v", 151, 14, "", "v_line/multiplier2", "case", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9029]), first, "lab1_imul/IntMulAlt.v", 152, 14, "", "v_line/multiplier2", "case", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9030]), first, "lab1_imul/IntMulAlt.v", 153, 14, "", "v_line/multiplier2", "case", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9031]), first, "lab1_imul/IntMulAlt.v", 154, 14, "", "v_line/multiplier2", "case", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9032]), first, "lab1_imul/IntMulAlt.v", 155, 14, "", "v_line/multiplier2", "case", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9033]), first, "lab1_imul/IntMulAlt.v", 156, 4, "", "v_line/multiplier2", "case", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9034]), first, "lab1_imul/IntMulAlt.v", 146, 17, "", "v_line/multiplier2", "block", "146,148");
}
