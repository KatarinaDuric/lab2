// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcAltDpath.h"

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___eval_initial__TOP__top__DUT__dpath(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___eval_initial__TOP__top__DUT__dpath\n"); );
    // Body
    vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__cin = 0U;
    vlSelf->__PVT__num_cores = 1U;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___ico_sequent__TOP__top__DUT__dpath__0(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___ico_sequent__TOP__top__DUT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__0(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__1(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__1\n"); );
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

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__2(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__2\n"); );
    // Body
    vlSelf->__PVT__csrr_data_D = vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__out;
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[2868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__en 
        = vlSelf->__PVT__reg_en_D;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__en 
        = vlSelf->__PVT__reg_en_D;
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[2888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_val 
        = vlSelf->__PVT__imul_req_val_D;
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[2865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__en 
        = vlSelf->__PVT__reg_en_F;
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

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__3(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___act_sequent__TOP__top__DUT__dpath__3\n"); );
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

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__0(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__0\n"); );
    // Body
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[3692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[3693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[3694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[3695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in0 
        = vlSelf->__PVT__ostream_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__1(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__2(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__2\n"); );
    // Body
    vlSelf->__PVT__stats_en_W = vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__q;
    vlSelf->__PVT__stats_en = VL_REDOR_I(vlSelf->__PVT__stats_en_W);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0U)))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 1U)))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 2U)))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 3U)))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 4U)))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 5U)))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 6U)))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 7U)))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 8U)))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 9U)))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xaU)))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xbU)))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xcU)))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xdU)))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xeU)))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xfU)))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x10U)))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x11U)))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x12U)))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x13U)))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x14U)))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x15U)))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x16U)))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x17U)))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x18U)))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x19U)))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[4069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[4070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[4071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__stats_en) ^ (IData)(vlSelf->__Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en = vlSelf->__PVT__stats_en;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__3(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__3\n"); );
    // Body
    vlSelf->__PVT__ex_result_M = vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0U)))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 1U)))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 2U)))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 3U)))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 4U)))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 5U)))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 6U)))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 7U)))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 8U)))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 9U)))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xaU)))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xbU)))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xcU)))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xdU)))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xeU)))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xfU)))) {
        vlSymsp->__Vcoverage[3928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x10U)))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x11U)))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x12U)))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x13U)))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x14U)))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x15U)))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x16U)))) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x17U)))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x18U)))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x19U)))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in0 
        = vlSelf->__PVT__ex_result_M;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__4(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__4\n"); );
    // Body
    vlSelf->__PVT__pc_X = vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0U)))) {
        vlSymsp->__Vcoverage[3785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 1U)))) {
        vlSymsp->__Vcoverage[3786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 2U)))) {
        vlSymsp->__Vcoverage[3787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 3U)))) {
        vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 4U)))) {
        vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 5U)))) {
        vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 6U)))) {
        vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 7U)))) {
        vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 8U)))) {
        vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 9U)))) {
        vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__in 
        = vlSelf->__PVT__pc_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__5(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__5\n"); );
    // Body
    vlSelf->__PVT__pc_plus4_X = vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0U)))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 1U)))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 2U)))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 3U)))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 4U)))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 5U)))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 6U)))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 7U)))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 8U)))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 9U)))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in1 
        = vlSelf->__PVT__pc_plus4_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__6(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__6\n"); );
    // Body
    vlSelf->__PVT__wb_result_W = vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0U)))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 1U)))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 2U)))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 3U)))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 4U)))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 5U)))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 6U)))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 7U)))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 8U)))) {
        vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 9U)))) {
        vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xaU)))) {
        vlSymsp->__Vcoverage[4019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xbU)))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xcU)))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xdU)))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xeU)))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xfU)))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x10U)))) {
        vlSymsp->__Vcoverage[4025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x11U)))) {
        vlSymsp->__Vcoverage[4026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x12U)))) {
        vlSymsp->__Vcoverage[4027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x13U)))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x14U)))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x15U)))) {
        vlSymsp->__Vcoverage[4030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x16U)))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x17U)))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x18U)))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x19U)))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__d 
        = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__rf_wdata_W = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__proc2mngr_data = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__bypass_from_W = vlSelf->__PVT__wb_result_W;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0U)))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 1U)))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 2U)))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 3U)))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 4U)))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 5U)))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 6U)))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 7U)))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 8U)))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 9U)))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xaU)))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xbU)))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xcU)))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xdU)))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xeU)))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xfU)))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x10U)))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x11U)))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x12U)))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x13U)))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x14U)))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x15U)))) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x16U)))) {
        vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x17U)))) {
        vlSymsp->__Vcoverage[3424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x18U)))) {
        vlSymsp->__Vcoverage[3425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x19U)))) {
        vlSymsp->__Vcoverage[3426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[3427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[3429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[3430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[3431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[3432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_data 
        = vlSelf->__PVT__rf_wdata_W;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0U)))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 1U)))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 2U)))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 3U)))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 4U)))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 5U)))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 6U)))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 7U)))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 8U)))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 9U)))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0U)))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 1U)))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 2U)))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 3U)))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 4U)))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 5U)))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 6U)))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 7U)))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 8U)))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 9U)))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xaU)))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xbU)))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xcU)))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xdU)))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xeU)))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xfU)))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x10U)))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x11U)))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x12U)))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x13U)))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x14U)))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x15U)))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x16U)))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x17U)))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x18U)))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x19U)))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in3 
        = vlSelf->__PVT__bypass_from_W;
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in3 
        = vlSelf->__PVT__bypass_from_W;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__7(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__7\n"); );
    // Body
    vlSelf->__PVT__dmem_reqstream_msg_data = vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__8(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__8\n"); );
    // Body
    vlSelf->__PVT__br_target_X = vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0U)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 1U)))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 2U)))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 3U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 4U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 5U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 6U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 7U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 8U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 9U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in1 
        = vlSelf->__PVT__br_target_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__9(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__9\n"); );
    // Body
    vlSelf->__PVT__pc_F = vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0U)))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 1U)))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 2U)))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 3U)))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 4U)))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 5U)))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 6U)))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 7U)))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 8U)))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 9U)))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xaU)))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xbU)))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xcU)))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xdU)))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xeU)))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xfU)))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x10U)))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x11U)))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x12U)))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x13U)))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x14U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x15U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x16U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x17U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x18U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x19U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1aU)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1bU)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1cU)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1dU)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1eU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1fU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__in 
        = vlSelf->__PVT__pc_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__10(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__10\n"); );
    // Body
    vlSelf->__PVT__pc_plus4_F = vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0U)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 1U)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 2U)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 3U)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 4U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 5U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 6U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 7U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 8U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 9U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xaU)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xbU)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xcU)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xdU)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xeU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xfU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x10U)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x11U)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x12U)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x13U)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x14U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x15U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x16U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x17U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x18U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x19U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1aU)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1bU)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1cU)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1dU)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1eU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1fU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in0 
        = vlSelf->__PVT__pc_plus4_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__11(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__11\n"); );
    // Body
    vlSelf->__PVT__pc_D = vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0U)))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 1U)))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 2U)))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 3U)))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 4U)))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 5U)))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 6U)))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 7U)))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 8U)))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 9U)))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__d 
        = vlSelf->__PVT__pc_D;
    vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__pc_D;
    vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in0 
        = vlSelf->__PVT__pc_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__12(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__12\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 0U)))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 1U)))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 2U)))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 3U)))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 4U)))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_addr 
        = vlSelf->__PVT__rf_waddr_W;
    if (((IData)(vlSelf->__PVT__stats_en_wen_W) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_W = vlSelf->__PVT__stats_en_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__en 
        = vlSelf->__PVT__stats_en_wen_W;
    if (((IData)(vlSelf->__PVT__rf_wen_W) ^ (IData)(vlSelf->__Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_W = vlSelf->__PVT__rf_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_en 
        = vlSelf->__PVT__rf_wen_W;
    if (((IData)(vlSelf->__PVT__wb_result_sel_M) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_M;
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__sel 
        = vlSelf->__PVT__wb_result_sel_M;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 0U)))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 1U)))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 2U)))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 3U)))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__fn = vlSelf->__PVT__alu_fn_X;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 0U)))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 1U)))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__sel 
        = vlSelf->__PVT__ex_result_sel_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__13(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__13\n"); );
    // Body
    vlSelf->__PVT__inst_D = vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0U)))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 1U)))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 2U)))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 3U)))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 4U)))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 5U)))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 6U)))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 7U)))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 8U)))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 9U)))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xaU)))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xbU)))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xcU)))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xdU)))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xeU)))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xfU)))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x10U)))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x11U)))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x12U)))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x13U)))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x14U)))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x15U)))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x16U)))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x17U)))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x18U)))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x19U)))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__inst 
        = vlSelf->__PVT__inst_D;
    vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__inst 
        = vlSelf->__PVT__inst_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__14(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__14\n"); );
    // Body
    vlSelf->__PVT__inst_rd_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rd;
    vlSelf->__PVT__inst_rs1_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs1;
    vlSelf->__PVT__inst_rs2_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs2;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 0U)))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 1U)))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 2U)))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 3U)))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 4U)))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 0U)))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 1U)))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 2U)))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 3U)))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 4U)))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr0 
        = vlSelf->__PVT__inst_rs1_D;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 0U)))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 1U)))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 2U)))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 3U)))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 4U)))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr1 
        = vlSelf->__PVT__inst_rs2_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__15(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__15\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__op1_sel_D) ^ (IData)(vlSelf->__Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__op1_sel_D = vlSelf->__PVT__op1_sel_D;
    }
    vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op1_sel_D;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op2_sel_D;
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 0U)))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 1U)))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 2U)))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U)));
    }
    vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm_type 
        = vlSelf->__PVT__imm_type_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__16(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__16\n"); );
    // Body
    vlSelf->__PVT__imm_D = vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__csrr_sel_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0U)))) {
        vlSymsp->__Vcoverage[3209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 1U)))) {
        vlSymsp->__Vcoverage[3210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 2U)))) {
        vlSymsp->__Vcoverage[3211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 3U)))) {
        vlSymsp->__Vcoverage[3212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 4U)))) {
        vlSymsp->__Vcoverage[3213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 5U)))) {
        vlSymsp->__Vcoverage[3214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 6U)))) {
        vlSymsp->__Vcoverage[3215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 7U)))) {
        vlSymsp->__Vcoverage[3216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 8U)))) {
        vlSymsp->__Vcoverage[3217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 9U)))) {
        vlSymsp->__Vcoverage[3218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imm_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__imm_D;
    vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in1 
        = vlSelf->__PVT__imm_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__17(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__17\n"); );
    // Body
    vlSelf->__PVT__op1_X = vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0U)))) {
        vlSymsp->__Vcoverage[3721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 1U)))) {
        vlSymsp->__Vcoverage[3722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 2U)))) {
        vlSymsp->__Vcoverage[3723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 3U)))) {
        vlSymsp->__Vcoverage[3724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 4U)))) {
        vlSymsp->__Vcoverage[3725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 5U)))) {
        vlSymsp->__Vcoverage[3726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 6U)))) {
        vlSymsp->__Vcoverage[3727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 7U)))) {
        vlSymsp->__Vcoverage[3728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 8U)))) {
        vlSymsp->__Vcoverage[3729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 9U)))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in0 = vlSelf->__PVT__op1_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__18(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__18\n"); );
    // Body
    vlSelf->__PVT__op2_X = vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0U)))) {
        vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 1U)))) {
        vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 2U)))) {
        vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 3U)))) {
        vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 4U)))) {
        vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 5U)))) {
        vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 6U)))) {
        vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 7U)))) {
        vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 8U)))) {
        vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 9U)))) {
        vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in1 = vlSelf->__PVT__op2_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__19(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__19\n"); );
    // Body
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__20(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_sequent__TOP__top__DUT__dpath__20\n"); );
    // Body
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__d 
        = vlSelf->__PVT__pc_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__0(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reg_en_W) ^ (IData)(vlSelf->__Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_W = vlSelf->__PVT__reg_en_W;
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__en 
        = vlSelf->__PVT__reg_en_W;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__1(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__1\n"); );
    // Body
    vlSelf->__PVT__imul_req_rdy_D = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_rdy;
    vlSelf->__PVT__imul_resp_val_X = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_val;
    if (((IData)(vlSelf->__PVT__imul_req_rdy_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_rdy_D = vlSelf->__PVT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->__PVT__imul_resp_val_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_val_X = vlSelf->__PVT__imul_resp_val_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__2(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___nba_comb__TOP__top__DUT__dpath__2\n"); );
    // Body
    vlSelf->__PVT__rf_rdata0_D = vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data0;
    vlSelf->__PVT__rf_rdata1_D = vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_data1;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0U)))) {
        vlSymsp->__Vcoverage[3337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 1U)))) {
        vlSymsp->__Vcoverage[3338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 2U)))) {
        vlSymsp->__Vcoverage[3339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 3U)))) {
        vlSymsp->__Vcoverage[3340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 4U)))) {
        vlSymsp->__Vcoverage[3341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 5U)))) {
        vlSymsp->__Vcoverage[3342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 6U)))) {
        vlSymsp->__Vcoverage[3343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 7U)))) {
        vlSymsp->__Vcoverage[3344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 8U)))) {
        vlSymsp->__Vcoverage[3345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 9U)))) {
        vlSymsp->__Vcoverage[3346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata0_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_rdata0_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata0_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__rf_rdata0_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0U)))) {
        vlSymsp->__Vcoverage[3369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 1U)))) {
        vlSymsp->__Vcoverage[3370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 2U)))) {
        vlSymsp->__Vcoverage[3371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 3U)))) {
        vlSymsp->__Vcoverage[3372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 4U)))) {
        vlSymsp->__Vcoverage[3373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 5U)))) {
        vlSymsp->__Vcoverage[3374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 6U)))) {
        vlSymsp->__Vcoverage[3375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 7U)))) {
        vlSymsp->__Vcoverage[3376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 8U)))) {
        vlSymsp->__Vcoverage[3377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 9U)))) {
        vlSymsp->__Vcoverage[3378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_rdata1_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_rdata1_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_rdata1_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__rf_rdata1_D;
}
