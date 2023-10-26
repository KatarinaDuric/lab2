// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___ico_sequent__TOP__top__mem__mem__memresp0_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___ico_sequent__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__clk = vlSelf->__PVT__clk;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp0_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp0_queue__2(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp0_queue__2\n"); );
    // Body
    vlSelf->__PVT__num_free_entries = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___ico_sequent__TOP__top__mem__mem__memresp1_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___ico_sequent__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__clk = vlSelf->__PVT__clk;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp1_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp1_queue__2(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp1_queue__2\n"); );
    // Body
    vlSelf->__PVT__num_free_entries = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}
