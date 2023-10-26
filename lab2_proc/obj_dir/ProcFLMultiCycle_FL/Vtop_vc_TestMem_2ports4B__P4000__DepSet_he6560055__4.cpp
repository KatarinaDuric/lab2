// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestMem_2ports4B__P4000.h"

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__14(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__14\n"); );
    // Body
    vlSymsp->__Vcoverage[4213].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__15(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__15\n"); );
    // Body
    vlSelf->__PVT__memresp1_msg = vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0U)))) {
        vlSymsp->__Vcoverage[3502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 1U)))) {
        vlSymsp->__Vcoverage[3503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 2U)))) {
        vlSymsp->__Vcoverage[3504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 3U)))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 4U)))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 5U)))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 6U)))) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 7U)))) {
        vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 8U)))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 9U)))) {
        vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2eU)));
    }
    vlSelf->__Vcellinp__memresp1_trace__msg = vlSelf->__PVT__memresp1_msg;
    vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__msg 
        = vlSelf->__Vcellinp__memresp1_trace__msg;
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__16(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__16\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memresp1_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp1_rdy))) {
        vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp1_rdy = vlSelf->__PVT__memresp1_rdy;
    }
    vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp1_rdy;
    vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__memresp1_rdy;
    if (((IData)(vlSelf->__PVT__memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp0_rdy))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp0_rdy = vlSelf->__PVT__memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp0_rdy;
    vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__memresp0_rdy;
    if (((IData)(vlSelf->__PVT__memreq0_val) ^ (IData)(vlSelf->__Vtogcov__memreq0_val))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_val = vlSelf->__PVT__memreq0_val;
    }
    vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val 
        = vlSelf->__PVT__memreq0_val;
    vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val 
        = vlSelf->__PVT__memreq0_val;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0U)))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 1U)))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 2U)))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 3U)))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 4U)))) {
        vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 5U)))) {
        vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 6U)))) {
        vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 7U)))) {
        vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 8U)))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 9U)))) {
        vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq0_trace__msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg, vlSelf->__Vcellinp__memreq0_trace__msg);
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__17(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__17\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq1_val) ^ (IData)(vlSelf->__Vtogcov__memreq1_val))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq1_val = vlSelf->__PVT__memreq1_val;
    }
    vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__val 
        = vlSelf->__PVT__memreq1_val;
    vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_val 
        = vlSelf->__PVT__memreq1_val;
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__18(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__18\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0U)))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 1U)))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 2U)))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 3U)))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 4U)))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 5U)))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 6U)))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 7U)))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 8U)))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 9U)))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq1_trace__msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg, vlSelf->__Vcellinp__memreq1_trace__msg);
}
