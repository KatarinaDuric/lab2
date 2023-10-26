// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P2f.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[11593].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[11594].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[11592].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11595].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11544].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[11593].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[11594].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[11592].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11595].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU)));
    }
}
