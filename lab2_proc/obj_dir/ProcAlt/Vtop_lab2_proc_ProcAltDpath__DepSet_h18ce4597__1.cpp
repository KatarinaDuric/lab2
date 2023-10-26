// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcAltDpath.h"

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__3(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__3\n"); );
    // Body
    vlSelf->__PVT__jal_target_D = vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0U)))) {
        vlSymsp->__Vcoverage[3098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 1U)))) {
        vlSymsp->__Vcoverage[3099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 2U)))) {
        vlSymsp->__Vcoverage[3100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 3U)))) {
        vlSymsp->__Vcoverage[3101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 4U)))) {
        vlSymsp->__Vcoverage[3102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 5U)))) {
        vlSymsp->__Vcoverage[3103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 6U)))) {
        vlSymsp->__Vcoverage[3104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 7U)))) {
        vlSymsp->__Vcoverage[3105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 8U)))) {
        vlSymsp->__Vcoverage[3106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 9U)))) {
        vlSymsp->__Vcoverage[3107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jal_target_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__jal_target_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jal_target_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__d 
        = vlSelf->__PVT__jal_target_D;
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in2 
        = vlSelf->__PVT__jal_target_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__4(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__4\n"); );
    // Body
    vlSelf->__PVT__br_cond_lt_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_lt;
    vlSelf->__PVT__br_cond_ltu_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_ltu;
    if (((IData)(vlSelf->__PVT__br_cond_lt_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_lt_X = vlSelf->__PVT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->__PVT__br_cond_ltu_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_ltu_X = vlSelf->__PVT__br_cond_ltu_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__5(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__5\n"); );
    // Body
    vlSelf->__PVT__br_cond_eq_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_eq;
    if (((IData)(vlSelf->__PVT__br_cond_eq_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_eq_X = vlSelf->__PVT__br_cond_eq_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__6(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__6\n"); );
    // Body
    vlSelf->__PVT__alu_result_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0U)))) {
        vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 1U)))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 2U)))) {
        vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 3U)))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 4U)))) {
        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 5U)))) {
        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 6U)))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 7U)))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 8U)))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 9U)))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in2 
        = vlSelf->__PVT__alu_result_X;
    vlSelf->__PVT__dmem_reqstream_msg_addr = vlSelf->__PVT__alu_result_X;
    vlSelf->__PVT__jalr_target_X = vlSelf->__PVT__alu_result_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0U)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 1U)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 2U)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 3U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 4U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 5U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 6U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 7U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 8U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 9U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in3 
        = vlSelf->__PVT__jalr_target_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__7(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__7\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0U)))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 1U)))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 2U)))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 3U)))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 4U)))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 5U)))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 6U)))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 7U)))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 8U)))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 9U)))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__mngr2proc_data;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__8(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__8\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[2657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[2658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[2659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[2660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[2661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[2662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[2663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[2664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[2665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[2666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[2667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[2668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[2669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[2670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[2671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[2672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[2673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[2674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[2675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[2676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[2677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[2678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[2679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[2680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[2681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU)));
    }
    vlSelf->__Vcellinp__inst_D_reg__d = VL_SEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U, 0x20U);
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__d 
        = vlSelf->__Vcellinp__inst_D_reg__d;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__9(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__9\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op1_byp_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op1_byp_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op1_byp_sel_D;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_byp_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_byp_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op2_byp_sel_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__10(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__10\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[2768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[2769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[2770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[2771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[2772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[2773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[2774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[2775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[2776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[2777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_respstream_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_respstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_respstream_msg_data, 0x1fU)));
    }
    vlSelf->__PVT__dmem_result_M = vlSelf->__PVT__dmem_respstream_msg_data;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0U)))) {
        vlSymsp->__Vcoverage[3945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 1U)))) {
        vlSymsp->__Vcoverage[3946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 2U)))) {
        vlSymsp->__Vcoverage[3947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 3U)))) {
        vlSymsp->__Vcoverage[3948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 4U)))) {
        vlSymsp->__Vcoverage[3949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 5U)))) {
        vlSymsp->__Vcoverage[3950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 6U)))) {
        vlSymsp->__Vcoverage[3951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 7U)))) {
        vlSymsp->__Vcoverage[3952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 8U)))) {
        vlSymsp->__Vcoverage[3953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 9U)))) {
        vlSymsp->__Vcoverage[3954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xaU)))) {
        vlSymsp->__Vcoverage[3955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xbU)))) {
        vlSymsp->__Vcoverage[3956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xcU)))) {
        vlSymsp->__Vcoverage[3957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xdU)))) {
        vlSymsp->__Vcoverage[3958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xeU)))) {
        vlSymsp->__Vcoverage[3959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0xfU)))) {
        vlSymsp->__Vcoverage[3960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x10U)))) {
        vlSymsp->__Vcoverage[3961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x11U)))) {
        vlSymsp->__Vcoverage[3962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x12U)))) {
        vlSymsp->__Vcoverage[3963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x13U)))) {
        vlSymsp->__Vcoverage[3964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x14U)))) {
        vlSymsp->__Vcoverage[3965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x15U)))) {
        vlSymsp->__Vcoverage[3966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x16U)))) {
        vlSymsp->__Vcoverage[3967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x17U)))) {
        vlSymsp->__Vcoverage[3968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x18U)))) {
        vlSymsp->__Vcoverage[3969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x19U)))) {
        vlSymsp->__Vcoverage[3970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_result_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_result_M, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in1 
        = vlSelf->__PVT__dmem_result_M;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__11(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__11\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 0U)))) {
        vlSymsp->__Vcoverage[2866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 1U)))) {
        vlSymsp->__Vcoverage[2867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__sel 
        = vlSelf->__PVT__pc_sel_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__12(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__12\n"); );
    // Body
    vlSelf->__PVT__ex_result_X = vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0U)))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 1U)))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 2U)))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 3U)))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 4U)))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 5U)))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 6U)))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 7U)))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 8U)))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 9U)))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__d 
        = vlSelf->__PVT__ex_result_X;
    vlSelf->__PVT__bypass_from_X = vlSelf->__PVT__ex_result_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0U)))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 1U)))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 2U)))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 3U)))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 4U)))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 5U)))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 6U)))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 7U)))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 8U)))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 9U)))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__bypass_from_X;
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__bypass_from_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__13(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__13\n"); );
    // Body
    vlSelf->__PVT__csrr_data_D = vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0U)))) {
        vlSymsp->__Vcoverage[3497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 1U)))) {
        vlSymsp->__Vcoverage[3498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 2U)))) {
        vlSymsp->__Vcoverage[3499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 3U)))) {
        vlSymsp->__Vcoverage[3500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 4U)))) {
        vlSymsp->__Vcoverage[3501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 5U)))) {
        vlSymsp->__Vcoverage[3502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 6U)))) {
        vlSymsp->__Vcoverage[3503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 7U)))) {
        vlSymsp->__Vcoverage[3504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 8U)))) {
        vlSymsp->__Vcoverage[3505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 9U)))) {
        vlSymsp->__Vcoverage[3506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__csrr_data_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__csrr_data_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__csrr_data_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in2 
        = vlSelf->__PVT__csrr_data_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__14(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__14\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reg_en_M) ^ (IData)(vlSelf->__Vtogcov__reg_en_M))) {
        vlSymsp->__Vcoverage[2892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M = vlSelf->__PVT__reg_en_M;
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__en 
        = vlSelf->__PVT__reg_en_M;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__15(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__15\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imul_resp_rdy_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[2889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_rdy_X = vlSelf->__PVT__imul_resp_rdy_X;
    }
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_rdy 
        = vlSelf->__PVT__imul_resp_rdy_X;
    if (((IData)(vlSelf->__PVT__reg_en_X) ^ (IData)(vlSelf->__Vtogcov__reg_en_X))) {
        vlSymsp->__Vcoverage[2881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_X = vlSelf->__PVT__reg_en_X;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__en 
        = vlSelf->__PVT__reg_en_X;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__en 
        = vlSelf->__PVT__reg_en_X;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__en 
        = vlSelf->__PVT__reg_en_X;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__en 
        = vlSelf->__PVT__reg_en_X;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__en 
        = vlSelf->__PVT__reg_en_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__16(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__16\n"); );
    // Body
    vlSelf->__PVT__wb_result_M = vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0U)))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 1U)))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 2U)))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 3U)))) {
        vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 4U)))) {
        vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 5U)))) {
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 6U)))) {
        vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 7U)))) {
        vlSymsp->__Vcoverage[3984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 8U)))) {
        vlSymsp->__Vcoverage[3985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 9U)))) {
        vlSymsp->__Vcoverage[3986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xaU)))) {
        vlSymsp->__Vcoverage[3987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xbU)))) {
        vlSymsp->__Vcoverage[3988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xcU)))) {
        vlSymsp->__Vcoverage[3989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xdU)))) {
        vlSymsp->__Vcoverage[3990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xeU)))) {
        vlSymsp->__Vcoverage[3991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0xfU)))) {
        vlSymsp->__Vcoverage[3992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x10U)))) {
        vlSymsp->__Vcoverage[3993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x11U)))) {
        vlSymsp->__Vcoverage[3994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x12U)))) {
        vlSymsp->__Vcoverage[3995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x13U)))) {
        vlSymsp->__Vcoverage[3996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x14U)))) {
        vlSymsp->__Vcoverage[3997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x15U)))) {
        vlSymsp->__Vcoverage[3998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x16U)))) {
        vlSymsp->__Vcoverage[3999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x17U)))) {
        vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x18U)))) {
        vlSymsp->__Vcoverage[4001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x19U)))) {
        vlSymsp->__Vcoverage[4002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[4003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[4004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[4005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[4006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[4007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[4008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__wb_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_M, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__d 
        = vlSelf->__PVT__wb_result_M;
    vlSelf->__PVT__bypass_from_M = vlSelf->__PVT__wb_result_M;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0U)))) {
        vlSymsp->__Vcoverage[3273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 1U)))) {
        vlSymsp->__Vcoverage[3274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 2U)))) {
        vlSymsp->__Vcoverage[3275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 3U)))) {
        vlSymsp->__Vcoverage[3276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 4U)))) {
        vlSymsp->__Vcoverage[3277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 5U)))) {
        vlSymsp->__Vcoverage[3278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 6U)))) {
        vlSymsp->__Vcoverage[3279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 7U)))) {
        vlSymsp->__Vcoverage[3280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 8U)))) {
        vlSymsp->__Vcoverage[3281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 9U)))) {
        vlSymsp->__Vcoverage[3282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xaU)))) {
        vlSymsp->__Vcoverage[3283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xbU)))) {
        vlSymsp->__Vcoverage[3284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xcU)))) {
        vlSymsp->__Vcoverage[3285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xdU)))) {
        vlSymsp->__Vcoverage[3286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xeU)))) {
        vlSymsp->__Vcoverage[3287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0xfU)))) {
        vlSymsp->__Vcoverage[3288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x10U)))) {
        vlSymsp->__Vcoverage[3289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x11U)))) {
        vlSymsp->__Vcoverage[3290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x12U)))) {
        vlSymsp->__Vcoverage[3291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x13U)))) {
        vlSymsp->__Vcoverage[3292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x14U)))) {
        vlSymsp->__Vcoverage[3293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x15U)))) {
        vlSymsp->__Vcoverage[3294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x16U)))) {
        vlSymsp->__Vcoverage[3295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x17U)))) {
        vlSymsp->__Vcoverage[3296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x18U)))) {
        vlSymsp->__Vcoverage[3297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x19U)))) {
        vlSymsp->__Vcoverage[3298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[3299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[3300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[3301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[3302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[3303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[3304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__bypass_from_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_M, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in2 
        = vlSelf->__PVT__bypass_from_M;
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in2 
        = vlSelf->__PVT__bypass_from_M;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__17(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__17\n"); );
    // Body
    vlSelf->__PVT__pc_next_F = vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0U)))) {
        vlSymsp->__Vcoverage[3002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 1U)))) {
        vlSymsp->__Vcoverage[3003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 2U)))) {
        vlSymsp->__Vcoverage[3004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 3U)))) {
        vlSymsp->__Vcoverage[3005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 4U)))) {
        vlSymsp->__Vcoverage[3006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 5U)))) {
        vlSymsp->__Vcoverage[3007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 6U)))) {
        vlSymsp->__Vcoverage[3008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 7U)))) {
        vlSymsp->__Vcoverage[3009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 8U)))) {
        vlSymsp->__Vcoverage[3010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 9U)))) {
        vlSymsp->__Vcoverage[3011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xaU)))) {
        vlSymsp->__Vcoverage[3012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xbU)))) {
        vlSymsp->__Vcoverage[3013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xcU)))) {
        vlSymsp->__Vcoverage[3014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xdU)))) {
        vlSymsp->__Vcoverage[3015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xeU)))) {
        vlSymsp->__Vcoverage[3016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0xfU)))) {
        vlSymsp->__Vcoverage[3017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x10U)))) {
        vlSymsp->__Vcoverage[3018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x11U)))) {
        vlSymsp->__Vcoverage[3019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x12U)))) {
        vlSymsp->__Vcoverage[3020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x13U)))) {
        vlSymsp->__Vcoverage[3021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x14U)))) {
        vlSymsp->__Vcoverage[3022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x15U)))) {
        vlSymsp->__Vcoverage[3023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x16U)))) {
        vlSymsp->__Vcoverage[3024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x17U)))) {
        vlSymsp->__Vcoverage[3025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x18U)))) {
        vlSymsp->__Vcoverage[3026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x19U)))) {
        vlSymsp->__Vcoverage[3027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1aU)))) {
        vlSymsp->__Vcoverage[3028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1bU)))) {
        vlSymsp->__Vcoverage[3029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1cU)))) {
        vlSymsp->__Vcoverage[3030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1dU)))) {
        vlSymsp->__Vcoverage[3031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1eU)))) {
        vlSymsp->__Vcoverage[3032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_next_F, 0x1fU)))) {
        vlSymsp->__Vcoverage[3033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_next_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_next_F, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__d 
        = vlSelf->__PVT__pc_next_F;
    vlSelf->__PVT__imem_reqstream_msg_addr = vlSelf->__PVT__pc_next_F;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[2625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[2626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[2627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[2628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[2629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[2630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[2631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[2632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[2633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[2634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[2635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[2636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[2637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[2638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[2639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[2640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[2641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[2642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[2643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[2644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[2645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[2646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[2647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[2648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[2649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[2650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[2651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[2652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[2653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[2654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[2655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[2656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_msg_addr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__18(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__18\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_val 
        = vlSelf->__PVT__imul_req_val_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__19(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__19\n"); );
    // Body
    vlSelf->__PVT__op1_byp_mux_out = vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__out;
    vlSelf->__PVT__op2_byp_mux_out = vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0U)))) {
        vlSymsp->__Vcoverage[3561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 1U)))) {
        vlSymsp->__Vcoverage[3562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 2U)))) {
        vlSymsp->__Vcoverage[3563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 3U)))) {
        vlSymsp->__Vcoverage[3564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 4U)))) {
        vlSymsp->__Vcoverage[3565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 5U)))) {
        vlSymsp->__Vcoverage[3566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 6U)))) {
        vlSymsp->__Vcoverage[3567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 7U)))) {
        vlSymsp->__Vcoverage[3568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 8U)))) {
        vlSymsp->__Vcoverage[3569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 9U)))) {
        vlSymsp->__Vcoverage[3570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xaU)))) {
        vlSymsp->__Vcoverage[3571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xbU)))) {
        vlSymsp->__Vcoverage[3572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xcU)))) {
        vlSymsp->__Vcoverage[3573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xdU)))) {
        vlSymsp->__Vcoverage[3574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xeU)))) {
        vlSymsp->__Vcoverage[3575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0xfU)))) {
        vlSymsp->__Vcoverage[3576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x10U)))) {
        vlSymsp->__Vcoverage[3577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x11U)))) {
        vlSymsp->__Vcoverage[3578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x12U)))) {
        vlSymsp->__Vcoverage[3579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x13U)))) {
        vlSymsp->__Vcoverage[3580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x14U)))) {
        vlSymsp->__Vcoverage[3581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x15U)))) {
        vlSymsp->__Vcoverage[3582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x16U)))) {
        vlSymsp->__Vcoverage[3583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x17U)))) {
        vlSymsp->__Vcoverage[3584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x18U)))) {
        vlSymsp->__Vcoverage[3585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x19U)))) {
        vlSymsp->__Vcoverage[3586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1aU)))) {
        vlSymsp->__Vcoverage[3587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1bU)))) {
        vlSymsp->__Vcoverage[3588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1cU)))) {
        vlSymsp->__Vcoverage[3589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1dU)))) {
        vlSymsp->__Vcoverage[3590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1eU)))) {
        vlSymsp->__Vcoverage[3591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_byp_mux_out, 0x1fU)))) {
        vlSymsp->__Vcoverage[3592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op1_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_byp_mux_out, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__op1_byp_mux_out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0U)))) {
        vlSymsp->__Vcoverage[3593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 1U)))) {
        vlSymsp->__Vcoverage[3594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 2U)))) {
        vlSymsp->__Vcoverage[3595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 3U)))) {
        vlSymsp->__Vcoverage[3596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 4U)))) {
        vlSymsp->__Vcoverage[3597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 5U)))) {
        vlSymsp->__Vcoverage[3598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 6U)))) {
        vlSymsp->__Vcoverage[3599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 7U)))) {
        vlSymsp->__Vcoverage[3600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 8U)))) {
        vlSymsp->__Vcoverage[3601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 9U)))) {
        vlSymsp->__Vcoverage[3602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xaU)))) {
        vlSymsp->__Vcoverage[3603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xbU)))) {
        vlSymsp->__Vcoverage[3604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xcU)))) {
        vlSymsp->__Vcoverage[3605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xdU)))) {
        vlSymsp->__Vcoverage[3606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xeU)))) {
        vlSymsp->__Vcoverage[3607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0xfU)))) {
        vlSymsp->__Vcoverage[3608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x10U)))) {
        vlSymsp->__Vcoverage[3609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x11U)))) {
        vlSymsp->__Vcoverage[3610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x12U)))) {
        vlSymsp->__Vcoverage[3611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x13U)))) {
        vlSymsp->__Vcoverage[3612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x14U)))) {
        vlSymsp->__Vcoverage[3613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x15U)))) {
        vlSymsp->__Vcoverage[3614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x16U)))) {
        vlSymsp->__Vcoverage[3615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x17U)))) {
        vlSymsp->__Vcoverage[3616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x18U)))) {
        vlSymsp->__Vcoverage[3617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x19U)))) {
        vlSymsp->__Vcoverage[3618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1aU)))) {
        vlSymsp->__Vcoverage[3619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1bU)))) {
        vlSymsp->__Vcoverage[3620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1cU)))) {
        vlSymsp->__Vcoverage[3621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1dU)))) {
        vlSymsp->__Vcoverage[3622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1eU)))) {
        vlSymsp->__Vcoverage[3623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_byp_mux_out, 0x1fU)))) {
        vlSymsp->__Vcoverage[3624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op2_byp_mux_out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_byp_mux_out, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__d 
        = vlSelf->__PVT__op2_byp_mux_out;
    vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__op2_byp_mux_out;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__20(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__20\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_respstream_drop) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[2864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop = vlSelf->__PVT__imem_respstream_drop;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__21(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__21\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__en 
        = vlSelf->__PVT__reg_en_D;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__en 
        = vlSelf->__PVT__reg_en_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__22(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__22\n"); );
    // Body
    vlSelf->__PVT__op1_D = vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0U)))) {
        vlSymsp->__Vcoverage[3433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 1U)))) {
        vlSymsp->__Vcoverage[3434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 2U)))) {
        vlSymsp->__Vcoverage[3435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 3U)))) {
        vlSymsp->__Vcoverage[3436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 4U)))) {
        vlSymsp->__Vcoverage[3437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 5U)))) {
        vlSymsp->__Vcoverage[3438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 6U)))) {
        vlSymsp->__Vcoverage[3439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 7U)))) {
        vlSymsp->__Vcoverage[3440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 8U)))) {
        vlSymsp->__Vcoverage[3441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 9U)))) {
        vlSymsp->__Vcoverage[3442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__d 
        = vlSelf->__PVT__op1_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__23(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__23\n"); );
    // Body
    vlSelf->__PVT__op2_D = vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0U)))) {
        vlSymsp->__Vcoverage[3465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 1U)))) {
        vlSymsp->__Vcoverage[3466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 2U)))) {
        vlSymsp->__Vcoverage[3467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 3U)))) {
        vlSymsp->__Vcoverage[3468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 4U)))) {
        vlSymsp->__Vcoverage[3469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 5U)))) {
        vlSymsp->__Vcoverage[3470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 6U)))) {
        vlSymsp->__Vcoverage[3471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 7U)))) {
        vlSymsp->__Vcoverage[3472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 8U)))) {
        vlSymsp->__Vcoverage[3473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 9U)))) {
        vlSymsp->__Vcoverage[3474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op2_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__d 
        = vlSelf->__PVT__op2_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__24(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__24\n"); );
    // Body
    vlSelf->__PVT__istream_msg = VL_CONCAT_QII(64,32,32, vlSelf->__PVT__op1_D, vlSelf->__PVT__op2_D);
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[3625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[3626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[3627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[3628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[3629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[3630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[3631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[3632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[3633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[3634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[3657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[3658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[3659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[3660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[3661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[3662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[3663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[3664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[3665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[3666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[3667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[3668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[3669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[3670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[3671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[3672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[3673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[3674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[3675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[3676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[3677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[3678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[3679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[3680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[3681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[3682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[3683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[3684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[3685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[3686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[3687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[3688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_msg 
        = vlSelf->__PVT__istream_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__25(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__25\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__en 
        = vlSelf->__PVT__reg_en_F;
}
