// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz3.h"

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[10028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[10035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[10027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[10033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    vlSelf->__PVT__deq_val = (1U & (~ (IData)(vlSelf->__PVT__empty)));
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[10026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[10023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[10024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    vlSelf->__PVT__enq_rdy = (1U & ((~ (IData)(vlSelf->__PVT__full)) 
                                    | ((IData)(vlSelf->__PVT__full) 
                                       & (IData)(vlSelf->__PVT__deq_rdy))));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[10032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[10022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__3(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__ctrl__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[10021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[10031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    vlSelf->__PVT__do_pipe = (((IData)(vlSelf->__PVT__full) 
                               & (IData)(vlSelf->__PVT__do_enq)) 
                              & (IData)(vlSelf->__PVT__do_deq));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[10034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[10025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[10029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[10028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[10035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[10027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[10033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    vlSelf->__PVT__deq_val = (1U & (~ (IData)(vlSelf->__PVT__empty)));
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[10026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[10023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[10024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    vlSelf->__PVT__enq_rdy = (1U & ((~ (IData)(vlSelf->__PVT__full)) 
                                    | ((IData)(vlSelf->__PVT__full) 
                                       & (IData)(vlSelf->__PVT__deq_rdy))));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[10032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[10022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__3(Vtop_vc_QueueCtrl1__Pz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__ctrl__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[10021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[10031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    vlSelf->__PVT__do_pipe = (((IData)(vlSelf->__PVT__full) 
                               & (IData)(vlSelf->__PVT__do_enq)) 
                              & (IData)(vlSelf->__PVT__do_deq));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[10034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[10025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[10029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz3___configure_coverage(Vtop_vc_QueueCtrl1__Pz3* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz3___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10019]), first, "../vc/queues.v", 38, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10020]), first, "../vc/queues.v", 39, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10021]), first, "../vc/queues.v", 41, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10022]), first, "../vc/queues.v", 42, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10023]), first, "../vc/queues.v", 44, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10024]), first, "../vc/queues.v", 45, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10025]), first, "../vc/queues.v", 47, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "write_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10026]), first, "../vc/queues.v", 48, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "bypass_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10027]), first, "../vc/queues.v", 49, 16, "", "v_toggle/vc_QueueCtrl1__Pz3", "num_free_entries", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10028]), first, "../vc/queues.v", 54, 9, "", "v_toggle/vc_QueueCtrl1__Pz3", "full", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10029]), first, "../vc/queues.v", 55, 9, "", "v_toggle/vc_QueueCtrl1__Pz3", "full_next", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10030]), first, "../vc/queues.v", 57, 3, "", "v_line/vc_QueueCtrl1__Pz3", "block", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10031]), first, "../vc/queues.v", 70, 10, "", "v_toggle/vc_QueueCtrl1__Pz3", "do_enq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10032]), first, "../vc/queues.v", 73, 10, "", "v_toggle/vc_QueueCtrl1__Pz3", "do_deq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10033]), first, "../vc/queues.v", 79, 10, "", "v_toggle/vc_QueueCtrl1__Pz3", "empty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10034]), first, "../vc/queues.v", 82, 10, "", "v_toggle/vc_QueueCtrl1__Pz3", "do_pipe", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10035]), first, "../vc/queues.v", 85, 10, "", "v_toggle/vc_QueueCtrl1__Pz3", "do_bypass", "");
}
