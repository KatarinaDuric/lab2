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
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[4575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay0__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[4375].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[4424].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[4378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[4379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[4380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[4381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[4382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[4384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[4385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[4386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4423].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[4427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[4428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[4431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[4432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_sequent__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[4615].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[4594].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4596].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4598].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4600].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4602].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4604].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4606].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4608].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4610].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4612].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4614].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4616].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__state = vlSelf->__PVT__state;
    vlSelf->__Vdly__rand_num = vlSelf->__PVT__rand_num;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__state = 0U;
        vlSymsp->__Vcoverage[4576].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__state = vlSelf->__PVT__state_next;
        vlSymsp->__Vcoverage[4577].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4578].fetch_add(1, std::memory_order_relaxed);
    if ((0U == vlSelf->__PVT__max_delay)) {
        vlSelf->__Vdly__rand_num = 0U;
        vlSymsp->__Vcoverage[4505].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vdly__rand_num = VL_MODDIV_III(32, (IData)(
                                                             VL_RANDOM_I()), vlSelf->__PVT__max_delay);
        vlSymsp->__Vcoverage[4506].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4507].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__state = vlSelf->__Vdly__state;
    vlSelf->__PVT__rand_num = vlSelf->__Vdly__rand_num;
    if (((IData)(vlSelf->__PVT__state) ^ (IData)(vlSelf->__Vtogcov__state))) {
        vlSymsp->__Vcoverage[4575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__state = vlSelf->__PVT__state;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0U)))) {
        vlSymsp->__Vcoverage[4473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 1U)))) {
        vlSymsp->__Vcoverage[4474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 2U)))) {
        vlSymsp->__Vcoverage[4475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 3U)))) {
        vlSymsp->__Vcoverage[4476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 4U)))) {
        vlSymsp->__Vcoverage[4477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 5U)))) {
        vlSymsp->__Vcoverage[4478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 6U)))) {
        vlSymsp->__Vcoverage[4479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 7U)))) {
        vlSymsp->__Vcoverage[4480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 8U)))) {
        vlSymsp->__Vcoverage[4481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 9U)))) {
        vlSymsp->__Vcoverage[4482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xaU)))) {
        vlSymsp->__Vcoverage[4483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xbU)))) {
        vlSymsp->__Vcoverage[4484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xcU)))) {
        vlSymsp->__Vcoverage[4485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xdU)))) {
        vlSymsp->__Vcoverage[4486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xeU)))) {
        vlSymsp->__Vcoverage[4487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0xfU)))) {
        vlSymsp->__Vcoverage[4488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x10U)))) {
        vlSymsp->__Vcoverage[4489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x11U)))) {
        vlSymsp->__Vcoverage[4490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x12U)))) {
        vlSymsp->__Vcoverage[4491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x13U)))) {
        vlSymsp->__Vcoverage[4492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x14U)))) {
        vlSymsp->__Vcoverage[4493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x15U)))) {
        vlSymsp->__Vcoverage[4494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x16U)))) {
        vlSymsp->__Vcoverage[4495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x17U)))) {
        vlSymsp->__Vcoverage[4496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x18U)))) {
        vlSymsp->__Vcoverage[4497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x19U)))) {
        vlSymsp->__Vcoverage[4498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1aU)))) {
        vlSymsp->__Vcoverage[4499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1bU)))) {
        vlSymsp->__Vcoverage[4500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1cU)))) {
        vlSymsp->__Vcoverage[4501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1dU)))) {
        vlSymsp->__Vcoverage[4502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1eU)))) {
        vlSymsp->__Vcoverage[4503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rand_num, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rand_num, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rand_num, 0x1fU)))) {
        vlSymsp->__Vcoverage[4504].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__0(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__in_val) ^ (IData)(vlSelf->__Vtogcov__in_val))) {
        vlSymsp->__Vcoverage[4375].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__in_val = vlSelf->__PVT__in_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__1(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__1\n"); );
    // Body
    if (vlSelf->__PVT__state) {
        if (vlSelf->__PVT__state) {
            vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                      & (0U == vlSelf->__PVT__rand_delay));
            vlSymsp->__Vcoverage[4591].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out_val = 0U;
            vlSymsp->__Vcoverage[4592].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out_val = ((IData)(vlSelf->__PVT__in_val) 
                                  & (0U == vlSelf->__PVT__rand_num));
        vlSymsp->__Vcoverage[4590].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4593].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__out_val) ^ (IData)(vlSelf->__Vtogcov__out_val))) {
        vlSymsp->__Vcoverage[4424].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__out_val = vlSelf->__PVT__out_val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__2(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0U)))) {
        vlSymsp->__Vcoverage[4377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 1U)))) {
        vlSymsp->__Vcoverage[4378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 2U)))) {
        vlSymsp->__Vcoverage[4379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 3U)))) {
        vlSymsp->__Vcoverage[4380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 4U)))) {
        vlSymsp->__Vcoverage[4381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 5U)))) {
        vlSymsp->__Vcoverage[4382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 6U)))) {
        vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 7U)))) {
        vlSymsp->__Vcoverage[4384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 8U)))) {
        vlSymsp->__Vcoverage[4385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 9U)))) {
        vlSymsp->__Vcoverage[4386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in_msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__3(Vtop_vc_TestRandDelay__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestRandDelay__P2f___nba_comb__TOP__top__mem__rand_resp_delay1__3\n"); );
    // Body
    vlSelf->__PVT__out_msg = ((IData)(vlSelf->__PVT__out_val)
                               ? vlSelf->__PVT__in_msg
                               : 0ULL);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0U)))) {
        vlSymsp->__Vcoverage[4426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 1U)))) {
        vlSymsp->__Vcoverage[4427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 2U)))) {
        vlSymsp->__Vcoverage[4428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 3U)))) {
        vlSymsp->__Vcoverage[4429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 4U)))) {
        vlSymsp->__Vcoverage[4430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 5U)))) {
        vlSymsp->__Vcoverage[4431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 6U)))) {
        vlSymsp->__Vcoverage[4432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 7U)))) {
        vlSymsp->__Vcoverage[4433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 8U)))) {
        vlSymsp->__Vcoverage[4434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 9U)))) {
        vlSymsp->__Vcoverage[4435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out_msg, 0x2eU)));
    }
}
