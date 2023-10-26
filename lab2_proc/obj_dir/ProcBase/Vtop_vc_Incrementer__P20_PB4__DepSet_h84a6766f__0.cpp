// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Incrementer__P20_PB4.h"

VL_INLINE_OPT void Vtop_vc_Incrementer__P20_PB4___nba_sequent__TOP__top__DUT__dpath__pc_incr_F__0(Vtop_vc_Incrementer__P20_PB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Incrementer__P20_PB4___nba_sequent__TOP__top__DUT__dpath__pc_incr_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0U)))) {
        vlSymsp->__Vcoverage[7561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 1U)))) {
        vlSymsp->__Vcoverage[7562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 2U)))) {
        vlSymsp->__Vcoverage[7563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 3U)))) {
        vlSymsp->__Vcoverage[7564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 4U)))) {
        vlSymsp->__Vcoverage[7565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 5U)))) {
        vlSymsp->__Vcoverage[7566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 6U)))) {
        vlSymsp->__Vcoverage[7567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 7U)))) {
        vlSymsp->__Vcoverage[7568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 8U)))) {
        vlSymsp->__Vcoverage[7569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 9U)))) {
        vlSymsp->__Vcoverage[7570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xaU)))) {
        vlSymsp->__Vcoverage[7571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xbU)))) {
        vlSymsp->__Vcoverage[7572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xcU)))) {
        vlSymsp->__Vcoverage[7573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xdU)))) {
        vlSymsp->__Vcoverage[7574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xeU)))) {
        vlSymsp->__Vcoverage[7575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xfU)))) {
        vlSymsp->__Vcoverage[7576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x10U)))) {
        vlSymsp->__Vcoverage[7577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x11U)))) {
        vlSymsp->__Vcoverage[7578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x12U)))) {
        vlSymsp->__Vcoverage[7579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x13U)))) {
        vlSymsp->__Vcoverage[7580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x14U)))) {
        vlSymsp->__Vcoverage[7581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x15U)))) {
        vlSymsp->__Vcoverage[7582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x16U)))) {
        vlSymsp->__Vcoverage[7583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x17U)))) {
        vlSymsp->__Vcoverage[7584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x18U)))) {
        vlSymsp->__Vcoverage[7585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x19U)))) {
        vlSymsp->__Vcoverage[7586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1aU)))) {
        vlSymsp->__Vcoverage[7587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1bU)))) {
        vlSymsp->__Vcoverage[7588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1cU)))) {
        vlSymsp->__Vcoverage[7589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1dU)))) {
        vlSymsp->__Vcoverage[7590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1eU)))) {
        vlSymsp->__Vcoverage[7591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1fU)))) {
        vlSymsp->__Vcoverage[7592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU)));
    }
    vlSelf->__PVT__out = ((IData)(4U) + vlSelf->__PVT__in);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Incrementer__P20_PB4___nba_sequent__TOP__top__DUT__dpath__pc_incr_X__0(Vtop_vc_Incrementer__P20_PB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Incrementer__P20_PB4___nba_sequent__TOP__top__DUT__dpath__pc_incr_X__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0U)))) {
        vlSymsp->__Vcoverage[7561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 1U)))) {
        vlSymsp->__Vcoverage[7562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 2U)))) {
        vlSymsp->__Vcoverage[7563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 3U)))) {
        vlSymsp->__Vcoverage[7564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 4U)))) {
        vlSymsp->__Vcoverage[7565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 5U)))) {
        vlSymsp->__Vcoverage[7566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 6U)))) {
        vlSymsp->__Vcoverage[7567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 7U)))) {
        vlSymsp->__Vcoverage[7568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 8U)))) {
        vlSymsp->__Vcoverage[7569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 9U)))) {
        vlSymsp->__Vcoverage[7570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xaU)))) {
        vlSymsp->__Vcoverage[7571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xbU)))) {
        vlSymsp->__Vcoverage[7572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xcU)))) {
        vlSymsp->__Vcoverage[7573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xdU)))) {
        vlSymsp->__Vcoverage[7574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xeU)))) {
        vlSymsp->__Vcoverage[7575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0xfU)))) {
        vlSymsp->__Vcoverage[7576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x10U)))) {
        vlSymsp->__Vcoverage[7577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x11U)))) {
        vlSymsp->__Vcoverage[7578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x12U)))) {
        vlSymsp->__Vcoverage[7579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x13U)))) {
        vlSymsp->__Vcoverage[7580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x14U)))) {
        vlSymsp->__Vcoverage[7581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x15U)))) {
        vlSymsp->__Vcoverage[7582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x16U)))) {
        vlSymsp->__Vcoverage[7583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x17U)))) {
        vlSymsp->__Vcoverage[7584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x18U)))) {
        vlSymsp->__Vcoverage[7585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x19U)))) {
        vlSymsp->__Vcoverage[7586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1aU)))) {
        vlSymsp->__Vcoverage[7587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1bU)))) {
        vlSymsp->__Vcoverage[7588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1cU)))) {
        vlSymsp->__Vcoverage[7589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1dU)))) {
        vlSymsp->__Vcoverage[7590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1eU)))) {
        vlSymsp->__Vcoverage[7591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in, 0x1fU)))) {
        vlSymsp->__Vcoverage[7592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in, 0x1fU)));
    }
    vlSelf->__PVT__out = ((IData)(4U) + vlSelf->__PVT__in);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}
