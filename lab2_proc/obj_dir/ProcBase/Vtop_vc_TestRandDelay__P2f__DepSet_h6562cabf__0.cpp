// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P2f.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[6169].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[6148].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6150].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6152].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6154].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6156].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6158].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6160].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6162].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6164].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6166].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6168].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6170].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[6130].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[6131].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6132].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[6059].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[6060].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6061].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[6129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[6027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[6028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[6029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[6030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[6031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[6032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[6033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[6034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[6035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[6036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[6037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[6038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[6039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[6040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[6041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[6042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[6043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[6044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[6045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[6046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[6047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[6048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[6049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[6050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[6051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[6052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[6053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[6054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[6055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[6056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[6057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[6058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[5929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__1\n"); );
    // Body
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[6145].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[6146].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[6144].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6147].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[5978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__2(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[5931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[5932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[5933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[5934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[5935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[5936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[5937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[5938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[5939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[5940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__3(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__3\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0ULL);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[5980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[5981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[5982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[5983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[5984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[5985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[5986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[5987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[5988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[5989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__4(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[5979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__5(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__5\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[6127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[6169].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[6148].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6150].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6152].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6154].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6156].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6158].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6160].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6162].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6164].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6166].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[6168].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6170].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[6130].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[6131].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6132].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[6059].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[6060].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6061].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[6129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[6027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[6028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[6029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[6030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[6031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[6032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[6033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[6034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[6035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[6036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[6037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[6038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[6039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[6040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[6041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[6042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[6043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[6044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[6045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[6046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[6047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[6048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[6049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[6050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[6051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[6052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[6053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[6054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[6055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[6056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[6057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[6058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[5979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[5929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__2(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__2\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[6127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__3(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__3\n"); );
    // Body
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[6145].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[6146].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[6144].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6147].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[5978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__4(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__4\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[5931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[5932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[5933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[5934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[5935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[5936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[5937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[5938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[5939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[5940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__6(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__6\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0ULL);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[5980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[5981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[5982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[5983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[5984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[5985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[5986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[5987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[5988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[5989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU)));
    }
}
