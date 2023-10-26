// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P4d.h"

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[10884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[10885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[10886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[10887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[10888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[10889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[10890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[10891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[10892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[10893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[10894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[10895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[10896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[10897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[10898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[10899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[10900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[10901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[10902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[10903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[10904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[10905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[10906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[10907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[10908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[10909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[10910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[10911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[10912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[10913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[10914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[10915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[10916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[10917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[10918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[10919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[10920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[10921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[10922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[10923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[10924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[10925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[10926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[10927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[10928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[10929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[10930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2fU)))) {
        vlSymsp->__Vcoverage[10931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x30U)))) {
        vlSymsp->__Vcoverage[10932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x31U)))) {
        vlSymsp->__Vcoverage[10933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x32U)))) {
        vlSymsp->__Vcoverage[10934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x33U)))) {
        vlSymsp->__Vcoverage[10935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x34U)))) {
        vlSymsp->__Vcoverage[10936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x35U)))) {
        vlSymsp->__Vcoverage[10937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x36U)))) {
        vlSymsp->__Vcoverage[10938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x37U)))) {
        vlSymsp->__Vcoverage[10939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x38U)))) {
        vlSymsp->__Vcoverage[10940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x39U)))) {
        vlSymsp->__Vcoverage[10941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3aU)))) {
        vlSymsp->__Vcoverage[10942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3bU)))) {
        vlSymsp->__Vcoverage[10943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3cU)))) {
        vlSymsp->__Vcoverage[10944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3dU)))) {
        vlSymsp->__Vcoverage[10945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3eU)))) {
        vlSymsp->__Vcoverage[10946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3fU)))) {
        vlSymsp->__Vcoverage[10947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x40U)))) {
        vlSymsp->__Vcoverage[10948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x41U)))) {
        vlSymsp->__Vcoverage[10949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x42U)))) {
        vlSymsp->__Vcoverage[10950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x43U)))) {
        vlSymsp->__Vcoverage[10951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x44U)))) {
        vlSymsp->__Vcoverage[10952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x45U)))) {
        vlSymsp->__Vcoverage[10953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x46U)))) {
        vlSymsp->__Vcoverage[10954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x47U)))) {
        vlSymsp->__Vcoverage[10955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x48U)))) {
        vlSymsp->__Vcoverage[10956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x49U)))) {
        vlSymsp->__Vcoverage[10957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4aU)))) {
        vlSymsp->__Vcoverage[10958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4bU)))) {
        vlSymsp->__Vcoverage[10959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4cU)))) {
        vlSymsp->__Vcoverage[10960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[10961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[10962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[10963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[10964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[10965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[10966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[10967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[10968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[10969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[10970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[10971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[10972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[10973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[10974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[10975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[10976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[10977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[10978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[10979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[10980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[10981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[10982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[10983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[10984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[10985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[10986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[10987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[10988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[10989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[10990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[10991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[10992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[10993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[10994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[10995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[10996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[10997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[10998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[10999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2fU)))) {
        vlSymsp->__Vcoverage[11008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x30U)))) {
        vlSymsp->__Vcoverage[11009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x31U)))) {
        vlSymsp->__Vcoverage[11010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x32U)))) {
        vlSymsp->__Vcoverage[11011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x33U)))) {
        vlSymsp->__Vcoverage[11012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x34U)))) {
        vlSymsp->__Vcoverage[11013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x35U)))) {
        vlSymsp->__Vcoverage[11014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x36U)))) {
        vlSymsp->__Vcoverage[11015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x37U)))) {
        vlSymsp->__Vcoverage[11016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x38U)))) {
        vlSymsp->__Vcoverage[11017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x39U)))) {
        vlSymsp->__Vcoverage[11018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3aU)))) {
        vlSymsp->__Vcoverage[11019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3bU)))) {
        vlSymsp->__Vcoverage[11020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3cU)))) {
        vlSymsp->__Vcoverage[11021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3dU)))) {
        vlSymsp->__Vcoverage[11022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3eU)))) {
        vlSymsp->__Vcoverage[11023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3fU)))) {
        vlSymsp->__Vcoverage[11024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x40U)))) {
        vlSymsp->__Vcoverage[11025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x41U)))) {
        vlSymsp->__Vcoverage[11026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x42U)))) {
        vlSymsp->__Vcoverage[11027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x43U)))) {
        vlSymsp->__Vcoverage[11028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x44U)))) {
        vlSymsp->__Vcoverage[11029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x45U)))) {
        vlSymsp->__Vcoverage[11030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x46U)))) {
        vlSymsp->__Vcoverage[11031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x47U)))) {
        vlSymsp->__Vcoverage[11032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x48U)))) {
        vlSymsp->__Vcoverage[11033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x49U)))) {
        vlSymsp->__Vcoverage[11034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4aU)))) {
        vlSymsp->__Vcoverage[11035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4bU)))) {
        vlSymsp->__Vcoverage[11036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4cU)))) {
        vlSymsp->__Vcoverage[11037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[11117].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(77,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[11118].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[11116].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11119].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2fU)))) {
        vlSymsp->__Vcoverage[11086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x30U)))) {
        vlSymsp->__Vcoverage[11087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x31U)))) {
        vlSymsp->__Vcoverage[11088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x32U)))) {
        vlSymsp->__Vcoverage[11089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x33U)))) {
        vlSymsp->__Vcoverage[11090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x34U)))) {
        vlSymsp->__Vcoverage[11091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x35U)))) {
        vlSymsp->__Vcoverage[11092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x36U)))) {
        vlSymsp->__Vcoverage[11093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x37U)))) {
        vlSymsp->__Vcoverage[11094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x38U)))) {
        vlSymsp->__Vcoverage[11095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x39U)))) {
        vlSymsp->__Vcoverage[11096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3aU)))) {
        vlSymsp->__Vcoverage[11097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3bU)))) {
        vlSymsp->__Vcoverage[11098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3cU)))) {
        vlSymsp->__Vcoverage[11099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3dU)))) {
        vlSymsp->__Vcoverage[11100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3eU)))) {
        vlSymsp->__Vcoverage[11101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3fU)))) {
        vlSymsp->__Vcoverage[11102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x40U)))) {
        vlSymsp->__Vcoverage[11103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x41U)))) {
        vlSymsp->__Vcoverage[11104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x42U)))) {
        vlSymsp->__Vcoverage[11105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x43U)))) {
        vlSymsp->__Vcoverage[11106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x44U)))) {
        vlSymsp->__Vcoverage[11107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x45U)))) {
        vlSymsp->__Vcoverage[11108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x46U)))) {
        vlSymsp->__Vcoverage[11109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x47U)))) {
        vlSymsp->__Vcoverage[11110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x48U)))) {
        vlSymsp->__Vcoverage[11111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x49U)))) {
        vlSymsp->__Vcoverage[11112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4aU)))) {
        vlSymsp->__Vcoverage[11113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4bU)))) {
        vlSymsp->__Vcoverage[11114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4cU)))) {
        vlSymsp->__Vcoverage[11115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[10884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[10885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[10886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[10887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[10888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[10889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[10890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[10891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[10892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[10893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[10894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[10895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[10896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[10897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[10898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[10899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[10900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[10901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[10902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[10903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[10904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[10905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[10906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[10907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[10908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[10909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[10910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[10911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[10912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[10913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[10914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[10915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[10916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[10917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[10918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[10919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[10920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[10921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[10922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[10923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[10924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[10925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[10926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[10927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[10928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[10929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[10930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2fU)))) {
        vlSymsp->__Vcoverage[10931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x30U)))) {
        vlSymsp->__Vcoverage[10932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x31U)))) {
        vlSymsp->__Vcoverage[10933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x32U)))) {
        vlSymsp->__Vcoverage[10934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x33U)))) {
        vlSymsp->__Vcoverage[10935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x34U)))) {
        vlSymsp->__Vcoverage[10936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x35U)))) {
        vlSymsp->__Vcoverage[10937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x36U)))) {
        vlSymsp->__Vcoverage[10938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x37U)))) {
        vlSymsp->__Vcoverage[10939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x38U)))) {
        vlSymsp->__Vcoverage[10940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x39U)))) {
        vlSymsp->__Vcoverage[10941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3aU)))) {
        vlSymsp->__Vcoverage[10942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3bU)))) {
        vlSymsp->__Vcoverage[10943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3cU)))) {
        vlSymsp->__Vcoverage[10944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3dU)))) {
        vlSymsp->__Vcoverage[10945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3eU)))) {
        vlSymsp->__Vcoverage[10946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3fU)))) {
        vlSymsp->__Vcoverage[10947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x40U)))) {
        vlSymsp->__Vcoverage[10948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x41U)))) {
        vlSymsp->__Vcoverage[10949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x42U)))) {
        vlSymsp->__Vcoverage[10950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x43U)))) {
        vlSymsp->__Vcoverage[10951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x44U)))) {
        vlSymsp->__Vcoverage[10952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x45U)))) {
        vlSymsp->__Vcoverage[10953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x46U)))) {
        vlSymsp->__Vcoverage[10954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x47U)))) {
        vlSymsp->__Vcoverage[10955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x48U)))) {
        vlSymsp->__Vcoverage[10956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x49U)))) {
        vlSymsp->__Vcoverage[10957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4aU)))) {
        vlSymsp->__Vcoverage[10958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4bU)))) {
        vlSymsp->__Vcoverage[10959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4cU)))) {
        vlSymsp->__Vcoverage[10960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[10961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[10962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[10963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[10964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[10965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[10966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[10967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[10968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[10969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[10970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[10971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[10972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[10973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[10974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[10975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[10976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[10977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[10978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[10979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[10980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[10981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[10982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[10983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[10984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[10985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[10986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[10987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[10988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[10989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[10990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[10991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[10992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[10993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[10994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[10995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[10996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[10997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[10998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[10999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2fU)))) {
        vlSymsp->__Vcoverage[11008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x30U)))) {
        vlSymsp->__Vcoverage[11009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x31U)))) {
        vlSymsp->__Vcoverage[11010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x32U)))) {
        vlSymsp->__Vcoverage[11011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x33U)))) {
        vlSymsp->__Vcoverage[11012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x34U)))) {
        vlSymsp->__Vcoverage[11013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x35U)))) {
        vlSymsp->__Vcoverage[11014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x36U)))) {
        vlSymsp->__Vcoverage[11015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x37U)))) {
        vlSymsp->__Vcoverage[11016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x38U)))) {
        vlSymsp->__Vcoverage[11017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x39U)))) {
        vlSymsp->__Vcoverage[11018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3aU)))) {
        vlSymsp->__Vcoverage[11019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3bU)))) {
        vlSymsp->__Vcoverage[11020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3cU)))) {
        vlSymsp->__Vcoverage[11021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3dU)))) {
        vlSymsp->__Vcoverage[11022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3eU)))) {
        vlSymsp->__Vcoverage[11023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3fU)))) {
        vlSymsp->__Vcoverage[11024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x40U)))) {
        vlSymsp->__Vcoverage[11025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x41U)))) {
        vlSymsp->__Vcoverage[11026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x42U)))) {
        vlSymsp->__Vcoverage[11027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x43U)))) {
        vlSymsp->__Vcoverage[11028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x44U)))) {
        vlSymsp->__Vcoverage[11029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x45U)))) {
        vlSymsp->__Vcoverage[11030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x46U)))) {
        vlSymsp->__Vcoverage[11031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x47U)))) {
        vlSymsp->__Vcoverage[11032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x48U)))) {
        vlSymsp->__Vcoverage[11033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x49U)))) {
        vlSymsp->__Vcoverage[11034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4aU)))) {
        vlSymsp->__Vcoverage[11035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4bU)))) {
        vlSymsp->__Vcoverage[11036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4cU)))) {
        vlSymsp->__Vcoverage[11037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU)));
    }
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[11117].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(77,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[11118].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[11116].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11119].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2fU)))) {
        vlSymsp->__Vcoverage[11086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x30U)))) {
        vlSymsp->__Vcoverage[11087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x31U)))) {
        vlSymsp->__Vcoverage[11088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x32U)))) {
        vlSymsp->__Vcoverage[11089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x33U)))) {
        vlSymsp->__Vcoverage[11090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x34U)))) {
        vlSymsp->__Vcoverage[11091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x35U)))) {
        vlSymsp->__Vcoverage[11092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x36U)))) {
        vlSymsp->__Vcoverage[11093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x37U)))) {
        vlSymsp->__Vcoverage[11094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x38U)))) {
        vlSymsp->__Vcoverage[11095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x39U)))) {
        vlSymsp->__Vcoverage[11096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3aU)))) {
        vlSymsp->__Vcoverage[11097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3bU)))) {
        vlSymsp->__Vcoverage[11098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3cU)))) {
        vlSymsp->__Vcoverage[11099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3dU)))) {
        vlSymsp->__Vcoverage[11100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3eU)))) {
        vlSymsp->__Vcoverage[11101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3fU)))) {
        vlSymsp->__Vcoverage[11102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x40U)))) {
        vlSymsp->__Vcoverage[11103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x41U)))) {
        vlSymsp->__Vcoverage[11104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x42U)))) {
        vlSymsp->__Vcoverage[11105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x43U)))) {
        vlSymsp->__Vcoverage[11106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x44U)))) {
        vlSymsp->__Vcoverage[11107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x45U)))) {
        vlSymsp->__Vcoverage[11108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x46U)))) {
        vlSymsp->__Vcoverage[11109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x47U)))) {
        vlSymsp->__Vcoverage[11110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x48U)))) {
        vlSymsp->__Vcoverage[11111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x49U)))) {
        vlSymsp->__Vcoverage[11112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4aU)))) {
        vlSymsp->__Vcoverage[11113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4bU)))) {
        vlSymsp->__Vcoverage[11114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4cU)))) {
        vlSymsp->__Vcoverage[11115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux2__P4d___configure_coverage(Vtop_vc_Mux2__P4d* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10884]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10885]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10886]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10887]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10888]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10889]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10890]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10891]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10892]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10893]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10894]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10895]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10896]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10897]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10898]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10899]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10900]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10901]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10902]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10903]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10904]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10905]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10906]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10907]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10908]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10909]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10910]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10911]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10912]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10913]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10914]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10915]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10916]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10917]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10918]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10919]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10920]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10921]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10922]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10923]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10924]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10925]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10926]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10927]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10928]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10929]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10930]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10931]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10932]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10933]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10934]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10935]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10936]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10937]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10938]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10939]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10940]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10941]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10942]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10943]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10944]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10945]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10946]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10947]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10948]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10949]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10950]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10951]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10952]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10953]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10954]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10955]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10956]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10957]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10958]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10959]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10960]), first, "../vc/muxes.v", 16, 30, "", "v_toggle/vc_Mux2__P4d", "in0[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10961]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10962]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10963]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10964]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10965]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10966]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10967]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10968]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10969]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10970]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10971]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10972]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10973]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10974]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10975]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10976]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10977]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10978]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10979]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10980]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10981]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10982]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10983]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10984]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10985]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10986]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10987]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10988]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10989]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10990]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10991]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10992]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10993]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10994]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10995]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10996]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10997]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10998]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10999]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11000]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11001]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11002]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11003]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11004]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11005]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11006]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11007]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11008]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11009]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11010]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11011]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11012]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11013]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11014]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11015]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11016]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11017]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11018]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11019]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11020]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11021]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11022]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11023]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11024]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11025]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11026]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11027]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11028]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11029]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11030]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11031]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11032]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11033]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11034]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11035]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11036]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11037]), first, "../vc/muxes.v", 16, 35, "", "v_toggle/vc_Mux2__P4d", "in1[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11038]), first, "../vc/muxes.v", 17, 30, "", "v_toggle/vc_Mux2__P4d", "sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11039]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11040]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11041]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11042]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11043]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11044]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11045]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11046]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11047]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11048]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11049]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11050]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11051]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11052]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11053]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11054]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11055]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11056]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11057]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11058]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11059]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11060]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11061]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11062]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11063]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11064]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11065]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11066]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11067]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11068]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11069]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11070]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11071]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11072]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11073]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11074]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11075]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11076]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11077]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11078]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11079]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11080]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11081]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11082]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11083]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11084]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11085]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11086]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11087]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11088]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11089]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11090]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11091]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11092]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11093]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11094]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11095]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11096]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11097]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11098]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11099]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11100]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11101]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11102]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11103]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11104]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11105]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11106]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11107]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11108]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11109]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11110]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11111]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11112]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11113]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11114]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11115]), first, "../vc/muxes.v", 18, 30, "", "v_toggle/vc_Mux2__P4d", "out[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11116]), first, "../vc/muxes.v", 24, 12, "", "v_line/vc_Mux2__P4d", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11117]), first, "../vc/muxes.v", 25, 12, "", "v_line/vc_Mux2__P4d", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11118]), first, "../vc/muxes.v", 26, 7, "", "v_line/vc_Mux2__P4d", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11119]), first, "../vc/muxes.v", 21, 3, "", "v_line/vc_Mux2__P4d", "block", "21-23");
}
