// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P2f.h"

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[11570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[11571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[11572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[11573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[11574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[11575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[11576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[11577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[11578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[11579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[11580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[11581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[11582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[11583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[11584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[11617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[11618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[11619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[11620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[11621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[11622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[11623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[11624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[11625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[11626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[11627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[11628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[11629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[11630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[11631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__4(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[11570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[11571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[11572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[11573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[11574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[11575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[11576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[11577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[11578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[11579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[11580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[11581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[11582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[11583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[11584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11537].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11536].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[11617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[11618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[11619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[11620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[11621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[11622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[11623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[11624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[11625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[11626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[11627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[11628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[11629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[11630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[11631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__4(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11632].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___configure_coverage(Vtop_vc_EnReg__P2f* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11536]), first, "../vc/regs.v", 61, 30, "", "v_toggle/vc_EnReg__P2f", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11537]), first, "../vc/regs.v", 62, 30, "", "v_toggle/vc_EnReg__P2f", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11538]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11539]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11540]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11541]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11542]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11543]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11544]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11545]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11546]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11547]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11548]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11549]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11550]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11551]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11552]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11553]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11554]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11555]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11556]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11557]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11558]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11559]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11560]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11561]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11562]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11563]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11564]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11565]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11566]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11567]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11568]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11569]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11570]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11571]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11572]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11573]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11574]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11575]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11576]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11577]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11578]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11579]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11580]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11581]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11582]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11583]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11584]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11585]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11586]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11587]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11588]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11589]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11590]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11591]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11592]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11593]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11594]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11595]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11596]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11597]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11598]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11599]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11600]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11601]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11602]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11603]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11604]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11605]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11606]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11607]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11608]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11609]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11610]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11611]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11612]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11613]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11614]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11615]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11616]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11617]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11618]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11619]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11620]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11621]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11622]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11623]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11624]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11625]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11626]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11627]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11628]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11629]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11630]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11631]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11632]), first, "../vc/regs.v", 65, 30, "", "v_toggle/vc_EnReg__P2f", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11633]), first, "../vc/regs.v", 69, 5, "", "v_branch/vc_EnReg__P2f", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11634]), first, "../vc/regs.v", 69, 6, "", "v_branch/vc_EnReg__P2f", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11635]), first, "../vc/regs.v", 68, 3, "", "v_line/vc_EnReg__P2f", "block", "68");
}
