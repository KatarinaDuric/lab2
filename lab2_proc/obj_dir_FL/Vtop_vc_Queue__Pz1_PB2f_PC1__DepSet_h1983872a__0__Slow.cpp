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

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__0\n"); );
    // Body
    vlSelf->__PVT__num_free_entries = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__reset 
        = vlSelf->__PVT__reset;
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__2(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp0_queue__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__clk = vlSelf->__PVT__clk;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__deq_val = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__0(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__0\n"); );
    // Body
    vlSelf->__PVT__num_free_entries = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5745].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__reset 
        = vlSelf->__PVT__reset;
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5744].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__2(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_sequent__TOP__top__mem__mem__memresp1_queue__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5742].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__clk = vlSelf->__PVT__clk;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__deq_val = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5793].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}
