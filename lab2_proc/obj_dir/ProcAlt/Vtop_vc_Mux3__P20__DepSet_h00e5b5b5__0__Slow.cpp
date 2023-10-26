// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux3__P20.h"

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__0(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[8011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[8012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[8013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[8014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[8015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[8016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[8017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[8018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[8019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[8020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[8021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[8022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[8023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[8024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[8025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[8026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[8027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[8028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[8029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[8030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[8031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[8032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[8033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[8034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[8035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[8036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[8037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[8038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[8039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[8040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[8041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[8042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[8043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[8044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[8045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[8046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[8047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[8048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[8049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[8050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[8051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[8052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[8053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[8054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[8055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[8056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[8057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[8058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[8059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[8060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[8061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[8062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[8063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[8064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[8065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[8066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[8067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[8068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[8069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[8070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[8071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[8072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[8073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[8074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__1(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[8000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[8001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[8002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[8003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[8004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[8005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[8006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[8007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[8008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[8009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[8010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__2(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__csrr_sel_mux_D__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[8075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[8076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[8109].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[8110].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[8111].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[8112].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[8113].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[8077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[8078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[8079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[8080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[8081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[8082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[8083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[8084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[8085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[8086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[8087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[8088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[8089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[8090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[8091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[8092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[8093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[8094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[8095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[8096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[8097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[8098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[8099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[8100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[8101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[8102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[8103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[8104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[8105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[8106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[8107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[8108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__0(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[8075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[8076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__1(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[8011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[8012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[8013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[8014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[8015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[8016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[8017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[8018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[8019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[8020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[8021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[8022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[8023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[8024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[8025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[8026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[8027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[8028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[8029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[8030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[8031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[8032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[8033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[8034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[8035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[8036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[8037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[8038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[8039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[8040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[8041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[8042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__2(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[8043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[8044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[8045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[8046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[8047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[8048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[8049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[8050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[8051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[8052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[8053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[8054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[8055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[8056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[8057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[8058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[8059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[8060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[8061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[8062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[8063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[8064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[8065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[8066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[8067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[8068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[8069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[8070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[8071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[8072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[8073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[8074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__3(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__op2_sel_mux_D__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[8000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[8001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[8002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[8003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[8004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[8005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[8006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[8007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[8008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[8009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[8010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[8109].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[8110].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[8111].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[8112].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[8113].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[8077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[8078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[8079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[8080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[8081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[8082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[8083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[8084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[8085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[8086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[8087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[8088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[8089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[8090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[8091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[8092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[8093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[8094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[8095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[8096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[8097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[8098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[8099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[8100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[8101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[8102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[8103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[8104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[8105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[8106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[8107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[8108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__ex_result_sel_mux_X__0(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__ex_result_sel_mux_X__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[8075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[8076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[8000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[8001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[8002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[8003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[8004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[8005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[8006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[8007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[8008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[8009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[8010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__ex_result_sel_mux_X__1(Vtop_vc_Mux3__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___stl_sequent__TOP__top__DUT__dpath__ex_result_sel_mux_X__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[8043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[8044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[8045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[8046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[8047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[8048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[8049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[8050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[8051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[8052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[8053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[8054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[8055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[8056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[8057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[8058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[8059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[8060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[8061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[8062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[8063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[8064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[8065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[8066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[8067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[8068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[8069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[8070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[8071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[8072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[8073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[8074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[8011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[8012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[8013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[8014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[8015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[8016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[8017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[8018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[8019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[8020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[8021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[8022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[8023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[8024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[8025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[8026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[8027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[8028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[8029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[8030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[8031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[8032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[8033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[8034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[8035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[8036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[8037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[8038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[8039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[8040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[8041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[8042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[8109].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[8110].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[8111].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[8112].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[8113].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[8077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[8078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[8079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[8080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[8081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[8082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[8083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[8084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[8085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[8086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[8087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[8088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[8089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[8090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[8091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[8092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[8093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[8094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[8095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[8096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[8097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[8098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[8099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[8100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[8101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[8102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[8103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[8104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[8105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[8106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[8107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[8108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux3__P20___configure_coverage(Vtop_vc_Mux3__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux3__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7979]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7980]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7981]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7982]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7983]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7984]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7985]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7986]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7987]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7988]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7989]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7990]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7991]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7992]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7993]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7994]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7995]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7996]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7997]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7998]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7999]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8000]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8001]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8002]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8003]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8004]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8005]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8006]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8007]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8008]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8009]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8010]), first, "../vc/muxes.v", 40, 30, "", "v_toggle/vc_Mux3__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8011]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8012]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8013]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8014]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8015]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8016]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8017]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8018]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8019]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8020]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8021]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8022]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8023]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8024]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8025]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8026]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8027]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8028]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8029]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8030]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8031]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8032]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8033]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8034]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8035]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8036]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8037]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8038]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8039]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8040]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8041]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8042]), first, "../vc/muxes.v", 40, 35, "", "v_toggle/vc_Mux3__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8043]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8044]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8045]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8046]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8047]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8048]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8049]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8050]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8051]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8052]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8053]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8054]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8055]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8056]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8057]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8058]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8059]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8060]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8061]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8062]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8063]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8064]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8065]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8066]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8067]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8068]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8069]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8070]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8071]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8072]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8073]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8074]), first, "../vc/muxes.v", 40, 40, "", "v_toggle/vc_Mux3__P20", "in2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8075]), first, "../vc/muxes.v", 41, 30, "", "v_toggle/vc_Mux3__P20", "sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8076]), first, "../vc/muxes.v", 41, 30, "", "v_toggle/vc_Mux3__P20", "sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8077]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8078]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8079]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8080]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8081]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8082]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8083]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8084]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8085]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8086]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8087]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8088]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8089]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8090]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8091]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8092]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8093]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8094]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8095]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8096]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8097]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8098]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8099]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8100]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8101]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8102]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8103]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8104]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8105]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8106]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8107]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8108]), first, "../vc/muxes.v", 42, 30, "", "v_toggle/vc_Mux3__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8109]), first, "../vc/muxes.v", 48, 12, "", "v_line/vc_Mux3__P20", "case", "48");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8110]), first, "../vc/muxes.v", 49, 12, "", "v_line/vc_Mux3__P20", "case", "49");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8111]), first, "../vc/muxes.v", 50, 12, "", "v_line/vc_Mux3__P20", "case", "50");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8112]), first, "../vc/muxes.v", 51, 7, "", "v_line/vc_Mux3__P20", "case", "51");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8113]), first, "../vc/muxes.v", 45, 3, "", "v_line/vc_Mux3__P20", "block", "45-47");
}
