// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelay__P4d.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay0__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU)));
    }
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
    VL_CONST_W_1X(77,__Vtemp_1,0x00000000);
    VL_COND_WIWW(77, __Vtemp_2, (IData)(vlSelf->__PVT__out_val), vlSelf->__PVT__in_msg, __Vtemp_1);
    VL_ASSIGN_W(77,vlSelf->__PVT__out_msg, __Vtemp_2);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__1(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay0__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__1(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__1\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__3(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay0__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
    vlSelf->__PVT__state_next = vlSelf->__PVT__state;
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            if ((((IData)(vlSelf->__PVT__in_val) & (IData)(vlSelf->__PVT__out_rdy)) 
                 & (0U == vlSelf->__PVT__rand_delay))) {
                vlSelf->__PVT__state_next = 0U;
                vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
            } else {
                vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
            }
            vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        if (((IData)(vlSelf->__PVT__in_val) & (~ (IData)(vlSelf->__PVT__zero_cycle_delay)))) {
            vlSelf->__PVT__state_next = 1U;
            vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU)));
    }
    if (((IData)(vlSelf->__PVT__state_next) ^ (IData)(vlSelf->__Vtogcov__state_next))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state_next = vlSelf->__PVT__state_next;
    }
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
    VL_CONST_W_1X(77,__Vtemp_1,0x00000000);
    VL_COND_WIWW(77, __Vtemp_2, (IData)(vlSelf->__PVT__out_val), vlSelf->__PVT__in_msg, __Vtemp_1);
    VL_ASSIGN_W(77,vlSelf->__PVT__out_msg, __Vtemp_2);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay1__1(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___act_comb__TOP__top__mem__rand_req_delay1__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU)));
    }
    VL_CONST_W_1X(77,__Vtemp_1,0x00000000);
    VL_COND_WIWW(77, __Vtemp_2, (IData)(vlSelf->__PVT__out_val), vlSelf->__PVT__in_msg, __Vtemp_1);
    VL_ASSIGN_W(77,vlSelf->__PVT__out_msg, __Vtemp_2);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__1(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_sequent__TOP__top__mem__rand_req_delay1__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__0(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__out_rdy) ^ (IData)(vlSelf->__Vtogcov__out_rdy))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_rdy = vlSelf->__PVT__out_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__1(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__2(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__3(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__3\n"); );
    // Body
    vlSelf->__PVT__zero_cycle_delay = (((IData)(vlSelf->__PVT__in_val) 
                                        & (IData)(vlSelf->__PVT__out_rdy)) 
                                       & (0U == vlSelf->__PVT__rand_num));
    if (((IData)(vlSelf->__PVT__zero_cycle_delay) ^ (IData)(vlSelf->__Vtogcov__zero_cycle_delay))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__zero_cycle_delay = vlSelf->__PVT__zero_cycle_delay;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__5(Vtop_vc_TestRandDelay__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P4d___nba_comb__TOP__top__mem__rand_req_delay1__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    VL_CONST_W_1X(77,__Vtemp_1,0x00000000);
    VL_COND_WIWW(77, __Vtemp_2, (IData)(vlSelf->__PVT__out_val), vlSelf->__PVT__in_msg, __Vtemp_1);
    VL_ASSIGN_W(77,vlSelf->__PVT__out_msg, __Vtemp_2);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out_msg, 0x4cU)));
    }
}
