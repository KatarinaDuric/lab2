// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB20.h"

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en 
        = vlSelf->__PVT__write_en;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9738].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    vlSelf->__PVT__qstore = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0U)))) {
        vlSymsp->__Vcoverage[9805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 1U)))) {
        vlSymsp->__Vcoverage[9806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 2U)))) {
        vlSymsp->__Vcoverage[9807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 3U)))) {
        vlSymsp->__Vcoverage[9808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 4U)))) {
        vlSymsp->__Vcoverage[9809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 5U)))) {
        vlSymsp->__Vcoverage[9810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 6U)))) {
        vlSymsp->__Vcoverage[9811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 7U)))) {
        vlSymsp->__Vcoverage[9812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 8U)))) {
        vlSymsp->__Vcoverage[9813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 9U)))) {
        vlSymsp->__Vcoverage[9814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xaU)))) {
        vlSymsp->__Vcoverage[9815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xbU)))) {
        vlSymsp->__Vcoverage[9816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xcU)))) {
        vlSymsp->__Vcoverage[9817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xdU)))) {
        vlSymsp->__Vcoverage[9818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xeU)))) {
        vlSymsp->__Vcoverage[9819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xfU)))) {
        vlSymsp->__Vcoverage[9820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x10U)))) {
        vlSymsp->__Vcoverage[9821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x11U)))) {
        vlSymsp->__Vcoverage[9822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x12U)))) {
        vlSymsp->__Vcoverage[9823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x13U)))) {
        vlSymsp->__Vcoverage[9824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x14U)))) {
        vlSymsp->__Vcoverage[9825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x15U)))) {
        vlSymsp->__Vcoverage[9826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x16U)))) {
        vlSymsp->__Vcoverage[9827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x17U)))) {
        vlSymsp->__Vcoverage[9828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x18U)))) {
        vlSymsp->__Vcoverage[9829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x19U)))) {
        vlSymsp->__Vcoverage[9830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1aU)))) {
        vlSymsp->__Vcoverage[9831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1bU)))) {
        vlSymsp->__Vcoverage[9832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1cU)))) {
        vlSymsp->__Vcoverage[9833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1dU)))) {
        vlSymsp->__Vcoverage[9834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1eU)))) {
        vlSymsp->__Vcoverage[9835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1fU)))) {
        vlSymsp->__Vcoverage[9836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0 
        = vlSelf->__PVT__qstore;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[9741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[9742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[9743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[9744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[9745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[9746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[9747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[9748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[9749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[9750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[9751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[9752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[9753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[9754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[9755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[9756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[9757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[9758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[9759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[9760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[9761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[9762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[9763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[9764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[9765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[9766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d 
        = vlSelf->__PVT__enq_msg;
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1 
        = vlSelf->__PVT__enq_msg;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__3(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9740].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel 
        = vlSelf->__PVT__bypass_mux_sel;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    vlSelf->__PVT__deq_msg = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[9773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[9774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[9775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[9776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[9777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[9778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[9779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[9780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[9781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[9782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[9783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[9784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[9785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[9786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[9787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[9788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[9789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[9790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[9791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[9792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[9793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[9794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[9795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[9796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[9797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[9798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9739].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en 
        = vlSelf->__PVT__write_en;
}
