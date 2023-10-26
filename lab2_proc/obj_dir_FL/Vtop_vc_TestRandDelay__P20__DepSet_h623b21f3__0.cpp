// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P20.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___act_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___act_sequent__TOP__top__src__msg_delay__1\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__1\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__2(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__4(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__src__msg_delay__4\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__0\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__2(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__src__msg_delay__2\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___act_comb__TOP__top__sink__msg_delay__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_sequent__TOP__top__sink__msg_delay__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__0(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__3(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__3\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__5(Vtop_vc_TestRandDelay__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P20___nba_comb__TOP__top__sink__msg_delay__5\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out_msg, 0x1fU)));
    }
}
