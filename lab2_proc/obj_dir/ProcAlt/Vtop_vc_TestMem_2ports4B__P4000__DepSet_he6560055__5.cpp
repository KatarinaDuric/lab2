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
    vlSymsp->__Vcoverage[5953].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__15(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__15\n"); );
    // Body
    vlSelf->__PVT__memresp1_msg = vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0U)))) {
        vlSymsp->__Vcoverage[5242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 1U)))) {
        vlSymsp->__Vcoverage[5243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 2U)))) {
        vlSymsp->__Vcoverage[5244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 3U)))) {
        vlSymsp->__Vcoverage[5245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 4U)))) {
        vlSymsp->__Vcoverage[5246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 5U)))) {
        vlSymsp->__Vcoverage[5247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 6U)))) {
        vlSymsp->__Vcoverage[5248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 7U)))) {
        vlSymsp->__Vcoverage[5249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 8U)))) {
        vlSymsp->__Vcoverage[5250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 9U)))) {
        vlSymsp->__Vcoverage[5251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5288].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp1_rdy = vlSelf->__PVT__memresp1_rdy;
    }
    vlSymsp->TOP__top__mem__mem__memresp1_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp1_rdy;
    vlSymsp->TOP__top__mem__mem__memresp1_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__memresp1_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__17(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__17\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq1_val) ^ (IData)(vlSelf->__Vtogcov__memreq1_val))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 1U)))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 2U)))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 3U)))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 4U)))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 5U)))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 6U)))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 7U)))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 8U)))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 9U)))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[5161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[5162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[5163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[5164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[5165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[5166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[5167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[5168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[5169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[5170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[5171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[5172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[5173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[5174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[5175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[5176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[5177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[5178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[5179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[5180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[5181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[5182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[5183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[5184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[5185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[5186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[5187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[5188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[5189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[5190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq1_trace__msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq1_queue.__PVT__enq_msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq1_trace.__PVT__msg, vlSelf->__Vcellinp__memreq1_trace__msg);
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__19(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__19\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp0_rdy))) {
        vlSymsp->__Vcoverage[5192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp0_rdy = vlSelf->__PVT__memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__mem__memresp0_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp0_rdy;
    vlSymsp->TOP__top__mem__mem__memresp0_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__memresp0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__20(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__20\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq0_val) ^ (IData)(vlSelf->__Vtogcov__memreq0_val))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_val = vlSelf->__PVT__memreq0_val;
    }
    vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__val 
        = vlSelf->__PVT__memreq0_val;
    vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_val 
        = vlSelf->__PVT__memreq0_val;
}

VL_INLINE_OPT void Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__21(Vtop_vc_TestMem_2ports4B__P4000* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestMem_2ports4B__P4000___nba_comb__TOP__top__mem__mem__21\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0U)))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 1U)))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 2U)))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 3U)))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 4U)))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 5U)))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 6U)))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 7U)))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 8U)))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 9U)))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq0_trace__msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq0_queue.__PVT__enq_msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem__memreq0_trace.__PVT__msg, vlSelf->__Vcellinp__memreq0_trace__msg);
}
