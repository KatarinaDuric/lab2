// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20.h"
#include "Vtop_vc_TestRandDelay__P2f.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___ico_sequent__TOP__top__mem__rand_resp_delay0__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___ico_sequent__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay0__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay0__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay0__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[5979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[6127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[6136].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[6137].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[6138].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[6133].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[6134].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[6135].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6139].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[6141].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[6142].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__rand_delay_en = ((IData)(vlSelf->__PVT__in_val) 
                                        & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)));
        vlSelf->__PVT__rand_delay_next = ((0U < vlSelf->__PVT__rand_num)
                                           ? (vlSelf->__PVT__rand_num 
                                              - (IData)(1U))
                                           : vlSelf->__PVT__rand_num);
        vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                 & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[6140].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6143].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[6128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[5930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[6069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[6070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[6071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[6072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[6073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[6074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[6075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[6076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[6077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[6078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[6079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[6080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[6081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[6082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[6083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[6084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[6085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[6086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[6087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[6088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[6089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[6090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[6091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[6092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[6093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[6094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__2(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay0__2\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSelf->__PVT__rand_delay_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0U)))) {
        vlSymsp->__Vcoverage[6095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 1U)))) {
        vlSymsp->__Vcoverage[6096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 2U)))) {
        vlSymsp->__Vcoverage[6097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 3U)))) {
        vlSymsp->__Vcoverage[6098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 4U)))) {
        vlSymsp->__Vcoverage[6099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 5U)))) {
        vlSymsp->__Vcoverage[6100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 6U)))) {
        vlSymsp->__Vcoverage[6101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 7U)))) {
        vlSymsp->__Vcoverage[6102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 8U)))) {
        vlSymsp->__Vcoverage[6103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 9U)))) {
        vlSymsp->__Vcoverage[6104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[6105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[6106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[6107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[6108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[6109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[6110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[6111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[6112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[6113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[6114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[6115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[6116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[6117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[6118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[6119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[6120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[6121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[6122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[6123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[6124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[6125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[6126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__6(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__6\n"); );
    // Body
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[6136].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[6137].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[6138].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[6133].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[6134].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[6135].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6139].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[6141].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[6142].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__rand_delay_en = ((IData)(vlSelf->__PVT__in_val) 
                                        & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)));
        vlSelf->__PVT__rand_delay_next = ((0U < vlSelf->__PVT__rand_num)
                                           ? (vlSelf->__PVT__rand_num 
                                              - (IData)(1U))
                                           : vlSelf->__PVT__rand_num);
        vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                 & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[6140].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6143].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[6128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[5930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[6069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[6070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[6071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[6072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[6073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[6074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[6075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[6076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[6077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[6078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[6079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[6080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[6081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[6082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[6083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[6084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[6085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[6086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[6087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[6088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[6089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[6090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[6091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[6092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[6093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[6094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___ico_sequent__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___ico_sequent__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___act_sequent__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__2(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__2\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSelf->__PVT__rand_delay_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0U)))) {
        vlSymsp->__Vcoverage[6095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 1U)))) {
        vlSymsp->__Vcoverage[6096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 2U)))) {
        vlSymsp->__Vcoverage[6097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 3U)))) {
        vlSymsp->__Vcoverage[6098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 4U)))) {
        vlSymsp->__Vcoverage[6099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 5U)))) {
        vlSymsp->__Vcoverage[6100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 6U)))) {
        vlSymsp->__Vcoverage[6101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 7U)))) {
        vlSymsp->__Vcoverage[6102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 8U)))) {
        vlSymsp->__Vcoverage[6103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 9U)))) {
        vlSymsp->__Vcoverage[6104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[6105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[6106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[6107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[6108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[6109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[6110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[6111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[6112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[6113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[6114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[6115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[6116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[6117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[6118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[6119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[6120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[6121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[6122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[6123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[6124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[6125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[6126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__5(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__5\n"); );
    // Body
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[6136].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[6137].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[6138].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[6133].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[6134].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[6135].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6139].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[6141].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[6142].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__rand_delay_en = ((IData)(vlSelf->__PVT__in_val) 
                                        & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)));
        vlSelf->__PVT__rand_delay_next = ((0U < vlSelf->__PVT__rand_num)
                                           ? (vlSelf->__PVT__rand_num 
                                              - (IData)(1U))
                                           : vlSelf->__PVT__rand_num);
        vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                 & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[6140].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6143].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[6128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[6062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[5930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[6063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[6064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[6065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[6066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[6067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[6068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[6069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[6070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[6071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[6072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[6073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[6074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[6075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[6076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[6077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[6078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[6079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[6080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[6081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[6082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[6083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[6084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[6085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[6086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[6087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[6088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[6089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[6090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[6091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[6092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[6093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[6094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
}
