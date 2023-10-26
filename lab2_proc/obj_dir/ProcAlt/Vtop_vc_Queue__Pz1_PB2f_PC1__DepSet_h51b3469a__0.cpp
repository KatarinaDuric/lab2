// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp0_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___act_sequent__TOP__top__mem__mem__memresp0_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[8797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_rdy 
        = vlSelf->__PVT__deq_rdy;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp0_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp0_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[8747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp0_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Body
    vlSelf->__PVT__deq_val = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[8796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp0_queue__3(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp0_queue__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[8797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_rdy 
        = vlSelf->__PVT__deq_rdy;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp1_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_sequent__TOP__top__mem__mem__memresp1_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[8747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp1_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Body
    vlSelf->__PVT__deq_val = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[8796].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp1_queue__3(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___nba_comb__TOP__top__mem__mem__memresp1_queue__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[8797].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_rdy 
        = vlSelf->__PVT__deq_rdy;
}
