// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcDpathAlu.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__0(Vtop_lab2_proc_ProcDpathAlu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 0U)))) {
        vlSymsp->__Vcoverage[6850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 1U)))) {
        vlSymsp->__Vcoverage[6851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 2U)))) {
        vlSymsp->__Vcoverage[6852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 3U)))) {
        vlSymsp->__Vcoverage[6853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[6790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[6791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[6792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[6793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[6794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[6795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[6796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[6797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[6798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[6799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[6800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[6801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[6802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[6803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[6804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[6805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[6806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[6807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[6808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[6809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[6810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[6811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[6814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[6815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[6816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[6817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in0 
        = vlSelf->__PVT__in0;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[6818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[6819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[6820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[6821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[6822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[6823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[6824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[6825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[6826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[6827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[6828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[6829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[6830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[6831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[6832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[6833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[6834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[6835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[6836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[6837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[6838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[6839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[6840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[6841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[6842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[6843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[6844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[6845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[6846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[6847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[6848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[6849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in1 
        = vlSelf->__PVT__in1;
    vlSelf->__PVT__ops_lt = VL_LTS_III(32, vlSelf->__PVT__in0, vlSelf->__PVT__in1);
    vlSelf->__PVT__ops_ltu = (vlSelf->__PVT__in0 < vlSelf->__PVT__in1);
    if (((IData)(vlSelf->__PVT__ops_lt) ^ (IData)(vlSelf->__Vtogcov__ops_lt))) {
        vlSymsp->__Vcoverage[6887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_lt = vlSelf->__PVT__ops_lt;
    }
    if (((IData)(vlSelf->__PVT__ops_ltu) ^ (IData)(vlSelf->__Vtogcov__ops_ltu))) {
        vlSymsp->__Vcoverage[6888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_ltu = vlSelf->__PVT__ops_ltu;
    }
    if (((((((((0U == (IData)(vlSelf->__PVT__fn)) | 
               (1U == (IData)(vlSelf->__PVT__fn))) 
              | (2U == (IData)(vlSelf->__PVT__fn))) 
             | (3U == (IData)(vlSelf->__PVT__fn))) 
            | (4U == (IData)(vlSelf->__PVT__fn))) | 
           (5U == (IData)(vlSelf->__PVT__fn))) | (6U 
                                                  == (IData)(vlSelf->__PVT__fn))) 
         | (7U == (IData)(vlSelf->__PVT__fn)))) {
        if ((0U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  + vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[6889].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  - vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[6890].fetch_add(1, std::memory_order_relaxed);
        } else if ((2U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  ^ vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[6891].fetch_add(1, std::memory_order_relaxed);
        } else if ((3U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  & vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[6892].fetch_add(1, std::memory_order_relaxed);
        } else if ((4U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  | vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[6893].fetch_add(1, std::memory_order_relaxed);
        } else if ((5U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  >> (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
            vlSymsp->__Vcoverage[6894].fetch_add(1, std::memory_order_relaxed);
        } else if ((6U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  << (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
            vlSymsp->__Vcoverage[6895].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = (0xfffffffeU & (vlSelf->__PVT__in0 
                                                 + vlSelf->__PVT__in1));
            vlSymsp->__Vcoverage[6896].fetch_add(1, std::memory_order_relaxed);
        }
    } else if ((8U == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__ops_lt));
        vlSymsp->__Vcoverage[6897].fetch_add(1, std::memory_order_relaxed);
    } else if ((9U == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__ops_ltu));
        vlSymsp->__Vcoverage[6898].fetch_add(1, std::memory_order_relaxed);
    } else if ((0xaU == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__in0, 
                                            (0x1fU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
        vlSymsp->__Vcoverage[6899].fetch_add(1, std::memory_order_relaxed);
    } else if ((0xbU == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[6900].fetch_add(1, std::memory_order_relaxed);
    } else if (VL_LIKELY((0xcU == (IData)(vlSelf->__PVT__fn)))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[6901].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_STOP_MT("ProcDpathAlu.v", 38, "");
    }
    vlSymsp->__Vcoverage[6902].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[6854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[6855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[6856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[6857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[6858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[6859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[6860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[6861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[6862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[6863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[6864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[6865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[6866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[6867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[6868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[6869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[6870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[6871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[6872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[6873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[6874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[6875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[6876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[6877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[6878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[6879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[6880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[6881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[6882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[6883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[6884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[6885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__1(Vtop_lab2_proc_ProcDpathAlu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__1\n"); );
    // Body
    vlSelf->__PVT__ops_eq = vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__out;
    if (((IData)(vlSelf->__PVT__ops_eq) ^ (IData)(vlSelf->__Vtogcov__ops_eq))) {
        vlSymsp->__Vcoverage[6886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_eq = vlSelf->__PVT__ops_eq;
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___configure_coverage(Vtop_lab2_proc_ProcDpathAlu* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6786]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6787]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6788]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6789]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6790]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6791]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6792]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6793]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6794]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6795]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6796]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6797]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6798]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6799]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6800]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6801]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6802]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6803]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6804]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6805]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6806]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6807]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6808]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6809]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6810]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6811]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6812]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6813]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6814]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6815]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6816]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6817]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6818]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6819]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6820]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6821]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6822]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6823]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6824]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6825]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6826]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6827]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6828]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6829]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6830]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6831]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6832]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6833]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6834]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6835]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6836]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6837]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6838]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6839]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6840]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6841]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6842]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6843]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6844]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6845]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6846]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6847]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6848]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6849]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6850]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6851]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6852]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6853]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6854]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6855]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6856]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6857]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6858]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6859]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6860]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6861]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6862]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6863]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6864]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6865]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6866]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6867]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6868]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6869]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6870]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6871]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6872]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6873]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6874]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6875]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6876]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6877]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6878]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6879]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6880]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6881]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6882]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6883]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6884]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6885]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6886]), first, "ProcDpathAlu.v", 16, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6887]), first, "ProcDpathAlu.v", 17, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6888]), first, "ProcDpathAlu.v", 18, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6889]), first, "ProcDpathAlu.v", 24, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6890]), first, "ProcDpathAlu.v", 25, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6891]), first, "ProcDpathAlu.v", 26, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6892]), first, "ProcDpathAlu.v", 27, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6893]), first, "ProcDpathAlu.v", 28, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6894]), first, "ProcDpathAlu.v", 29, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6895]), first, "ProcDpathAlu.v", 30, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6896]), first, "ProcDpathAlu.v", 31, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6897]), first, "ProcDpathAlu.v", 32, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6898]), first, "ProcDpathAlu.v", 33, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6899]), first, "ProcDpathAlu.v", 34, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6900]), first, "ProcDpathAlu.v", 35, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6901]), first, "ProcDpathAlu.v", 36, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6902]), first, "ProcDpathAlu.v", 21, 3, "", "v_line/lab2_proc_ProcDpathAlu", "block", "21,23");
}
