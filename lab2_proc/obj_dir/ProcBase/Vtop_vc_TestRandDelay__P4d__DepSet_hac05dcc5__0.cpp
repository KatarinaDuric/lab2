// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20.h"
#include "Vtop_vc_TestRandDelay__P4d.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___ico_sequent__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___ico_sequent__TOP__top__mem__rand_req_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___act_sequent__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___act_sequent__TOP__top__mem__rand_req_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay0__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[4542].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
    VL_CONST_W_1X(77,__Vtemp_1,0x00000000);
    VL_COND_WIWW(77, __Vtemp_2, (IData)(vlSelf->__PVT__out_val), vlSelf->__PVT__in_msg, __Vtemp_1);
    VL_ASSIGN_W(77,vlSelf->__PVT__out_msg, __Vtemp_2);
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[4742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[4623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[4624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[4625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[4626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[4627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[4628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[4629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[4630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[4631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[4632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[4670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[4671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[4672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[4673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[4674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[4675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[4676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[4677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[4678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[4679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[4680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[4681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[4682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[4683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[4684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[4685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[4686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[4687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[4688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[4689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[4690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[4691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[4692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[4693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[4694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[4695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[4696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[4697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[4698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[4699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__2(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__2\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSelf->__PVT__rand_delay_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0U)))) {
        vlSymsp->__Vcoverage[4768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 1U)))) {
        vlSymsp->__Vcoverage[4769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 2U)))) {
        vlSymsp->__Vcoverage[4770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 3U)))) {
        vlSymsp->__Vcoverage[4771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 4U)))) {
        vlSymsp->__Vcoverage[4772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 5U)))) {
        vlSymsp->__Vcoverage[4773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 6U)))) {
        vlSymsp->__Vcoverage[4774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 7U)))) {
        vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 8U)))) {
        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 9U)))) {
        vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[4778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[4779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[4780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__4(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__4\n"); );
    // Body
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[4742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___ico_sequent__TOP__top__mem__rand_req_delay1__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___ico_sequent__TOP__top__mem__rand_req_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4508].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___act_sequent__TOP__top__mem__rand_req_delay1__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___act_sequent__TOP__top__mem__rand_req_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4509].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__2(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__2\n"); );
    // Body
    vlSelf->__PVT__rand_delay = vlSelf->__PVT__rand_delay_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0U)))) {
        vlSymsp->__Vcoverage[4768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 1U)))) {
        vlSymsp->__Vcoverage[4769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 2U)))) {
        vlSymsp->__Vcoverage[4770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 3U)))) {
        vlSymsp->__Vcoverage[4771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 4U)))) {
        vlSymsp->__Vcoverage[4772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 5U)))) {
        vlSymsp->__Vcoverage[4773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 6U)))) {
        vlSymsp->__Vcoverage[4774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 7U)))) {
        vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 8U)))) {
        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 9U)))) {
        vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xaU)))) {
        vlSymsp->__Vcoverage[4778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xbU)))) {
        vlSymsp->__Vcoverage[4779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xcU)))) {
        vlSymsp->__Vcoverage[4780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xdU)))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xeU)))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0xfU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x10U)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x11U)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x12U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x13U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x14U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x15U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x16U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x17U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x18U)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x19U)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1aU)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1bU)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1cU)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1dU)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1eU)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay, 0x1fU)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__4(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__4\n"); );
    // Body
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__rand_delay_en = (0U < vlSelf->__PVT__rand_delay);
            vlSelf->__PVT__rand_delay_next = (vlSelf->__PVT__rand_delay 
                                              - (IData)(1U));
            vlSelf->__PVT__in_rdy = ((IData)(vlSelf->__PVT__out_rdy) 
                                     & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__rand_delay_en = 0U;
            vlSelf->__PVT__rand_delay_next = 0U;
            vlSelf->__PVT__in_rdy = 0U;
            vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[4621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__rand_delay_en) ^ (IData)(vlSelf->__Vtogcov__rand_delay_en))) {
        vlSymsp->__Vcoverage[4735].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rand_delay_en = vlSelf->__PVT__rand_delay_en;
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__en = vlSelf->__PVT__rand_delay_en;
    if (((IData)(vlSelf->__PVT__in_rdy) ^ (IData)(vlSelf->__Vtogcov__in_rdy))) {
        vlSymsp->__Vcoverage[4543].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_rdy = vlSelf->__PVT__in_rdy;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0U)))) {
        vlSymsp->__Vcoverage[4736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 1U)))) {
        vlSymsp->__Vcoverage[4737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 2U)))) {
        vlSymsp->__Vcoverage[4738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 3U)))) {
        vlSymsp->__Vcoverage[4739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 4U)))) {
        vlSymsp->__Vcoverage[4740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 5U)))) {
        vlSymsp->__Vcoverage[4741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 6U)))) {
        vlSymsp->__Vcoverage[4742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 7U)))) {
        vlSymsp->__Vcoverage[4743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 8U)))) {
        vlSymsp->__Vcoverage[4744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 9U)))) {
        vlSymsp->__Vcoverage[4745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xaU)))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xbU)))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xcU)))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xdU)))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xeU)))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0xfU)))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x10U)))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x11U)))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x12U)))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x13U)))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x14U)))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x15U)))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x16U)))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x17U)))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x18U)))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x19U)))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1aU)))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1bU)))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1cU)))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1dU)))) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1eU)))) {
        vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_delay_next, 0x1fU)))) {
        vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_delay_next, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_delay_next, 0x1fU)));
    }
    vlSelf->__PVT__rand_delay_reg->__PVT__d = vlSelf->__PVT__rand_delay_next;
}
