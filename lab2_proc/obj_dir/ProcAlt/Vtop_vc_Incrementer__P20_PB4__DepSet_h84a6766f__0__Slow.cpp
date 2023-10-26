// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Incrementer__P20_PB4.h"

VL_ATTR_COLD void Vtop_vc_Incrementer__P20_PB4___stl_sequent__TOP__top__DUT__dpath__pc_incr_F__0(Vtop_vc_Incrementer__P20_PB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Incrementer__P20_PB4___stl_sequent__TOP__top__DUT__dpath__pc_incr_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0U)))) {
        vlSymsp->__Vcoverage[7747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 1U)))) {
        vlSymsp->__Vcoverage[7748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 2U)))) {
        vlSymsp->__Vcoverage[7749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 3U)))) {
        vlSymsp->__Vcoverage[7750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 4U)))) {
        vlSymsp->__Vcoverage[7751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 5U)))) {
        vlSymsp->__Vcoverage[7752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 6U)))) {
        vlSymsp->__Vcoverage[7753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 7U)))) {
        vlSymsp->__Vcoverage[7754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 8U)))) {
        vlSymsp->__Vcoverage[7755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 9U)))) {
        vlSymsp->__Vcoverage[7756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xaU)))) {
        vlSymsp->__Vcoverage[7757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xbU)))) {
        vlSymsp->__Vcoverage[7758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xcU)))) {
        vlSymsp->__Vcoverage[7759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xdU)))) {
        vlSymsp->__Vcoverage[7760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xeU)))) {
        vlSymsp->__Vcoverage[7761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xfU)))) {
        vlSymsp->__Vcoverage[7762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x10U)))) {
        vlSymsp->__Vcoverage[7763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x11U)))) {
        vlSymsp->__Vcoverage[7764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x12U)))) {
        vlSymsp->__Vcoverage[7765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x13U)))) {
        vlSymsp->__Vcoverage[7766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x14U)))) {
        vlSymsp->__Vcoverage[7767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x15U)))) {
        vlSymsp->__Vcoverage[7768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x16U)))) {
        vlSymsp->__Vcoverage[7769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x17U)))) {
        vlSymsp->__Vcoverage[7770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x18U)))) {
        vlSymsp->__Vcoverage[7771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x19U)))) {
        vlSymsp->__Vcoverage[7772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1aU)))) {
        vlSymsp->__Vcoverage[7773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1bU)))) {
        vlSymsp->__Vcoverage[7774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1cU)))) {
        vlSymsp->__Vcoverage[7775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1dU)))) {
        vlSymsp->__Vcoverage[7776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1eU)))) {
        vlSymsp->__Vcoverage[7777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1fU)))) {
        vlSymsp->__Vcoverage[7778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU)));
    }
    vlSelf->__PVT__out = ((IData)(4U) + vlSelf->__PVT__in);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Incrementer__P20_PB4___stl_sequent__TOP__top__DUT__dpath__pc_incr_X__0(Vtop_vc_Incrementer__P20_PB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Incrementer__P20_PB4___stl_sequent__TOP__top__DUT__dpath__pc_incr_X__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0U)))) {
        vlSymsp->__Vcoverage[7747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 1U)))) {
        vlSymsp->__Vcoverage[7748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 2U)))) {
        vlSymsp->__Vcoverage[7749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 3U)))) {
        vlSymsp->__Vcoverage[7750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 4U)))) {
        vlSymsp->__Vcoverage[7751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 5U)))) {
        vlSymsp->__Vcoverage[7752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 6U)))) {
        vlSymsp->__Vcoverage[7753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 7U)))) {
        vlSymsp->__Vcoverage[7754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 8U)))) {
        vlSymsp->__Vcoverage[7755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 9U)))) {
        vlSymsp->__Vcoverage[7756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xaU)))) {
        vlSymsp->__Vcoverage[7757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xbU)))) {
        vlSymsp->__Vcoverage[7758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xcU)))) {
        vlSymsp->__Vcoverage[7759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xdU)))) {
        vlSymsp->__Vcoverage[7760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xeU)))) {
        vlSymsp->__Vcoverage[7761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xfU)))) {
        vlSymsp->__Vcoverage[7762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x10U)))) {
        vlSymsp->__Vcoverage[7763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x11U)))) {
        vlSymsp->__Vcoverage[7764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x12U)))) {
        vlSymsp->__Vcoverage[7765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x13U)))) {
        vlSymsp->__Vcoverage[7766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x14U)))) {
        vlSymsp->__Vcoverage[7767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x15U)))) {
        vlSymsp->__Vcoverage[7768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x16U)))) {
        vlSymsp->__Vcoverage[7769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x17U)))) {
        vlSymsp->__Vcoverage[7770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x18U)))) {
        vlSymsp->__Vcoverage[7771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x19U)))) {
        vlSymsp->__Vcoverage[7772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1aU)))) {
        vlSymsp->__Vcoverage[7773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1bU)))) {
        vlSymsp->__Vcoverage[7774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1cU)))) {
        vlSymsp->__Vcoverage[7775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1dU)))) {
        vlSymsp->__Vcoverage[7776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1eU)))) {
        vlSymsp->__Vcoverage[7777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1fU)))) {
        vlSymsp->__Vcoverage[7778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU)));
    }
    vlSelf->__PVT__out = ((IData)(4U) + vlSelf->__PVT__in);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Incrementer__P20_PB4___configure_coverage(Vtop_vc_Incrementer__P20_PB4* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Incrementer__P20_PB4___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7747]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7748]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7749]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7750]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7751]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7752]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7753]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7754]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7755]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7756]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7757]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7758]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7759]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7760]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7761]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7762]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7763]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7764]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7765]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7766]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7767]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7768]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7769]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7770]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7771]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7772]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7773]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7774]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7775]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7776]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7777]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7778]), first, "../vc/arithmetic.v", 69, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "in[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7779]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7780]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7781]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7782]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7783]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7784]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7785]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7786]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7787]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7788]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7789]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7790]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7791]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7792]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7793]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7794]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7795]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7796]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7797]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7798]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7799]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7800]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7801]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7802]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7803]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7804]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7805]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7806]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7807]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7808]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7809]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7810]), first, "../vc/arithmetic.v", 70, 30, "", "v_toggle/vc_Incrementer__P20_PB4", "out[31]", "");
}
