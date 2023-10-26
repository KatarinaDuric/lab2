// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    vlSelf->__Vdly__full = vlSelf->__PVT__full;
    vlSelf->__Vdly__full = ((~ (IData)(vlSelf->__PVT__reset)) 
                            & (IData)(vlSelf->__PVT__full_next));
    vlSymsp->__Vcoverage[9310].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__full = vlSelf->__Vdly__full;
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[9308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[9307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[9313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[9302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    vlSelf->__Vdly__full = vlSelf->__PVT__full;
    vlSelf->__Vdly__full = ((~ (IData)(vlSelf->__PVT__reset)) 
                            & (IData)(vlSelf->__PVT__full_next));
    vlSymsp->__Vcoverage[9310].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__full = vlSelf->__Vdly__full;
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[9308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[9307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[9313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[9302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    vlSelf->__Vdly__full = vlSelf->__PVT__full;
    vlSelf->__Vdly__full = ((~ (IData)(vlSelf->__PVT__reset)) 
                            & (IData)(vlSelf->__PVT__full_next));
    vlSymsp->__Vcoverage[9310].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__full = vlSelf->__Vdly__full;
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[9308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[9307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[9302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[9313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___ico_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___act_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    vlSelf->__Vdly__full = vlSelf->__PVT__full;
    vlSelf->__Vdly__full = ((~ (IData)(vlSelf->__PVT__reset)) 
                            & (IData)(vlSelf->__PVT__full_next));
    vlSymsp->__Vcoverage[9310].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__full = vlSelf->__Vdly__full;
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[9308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[9307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[9302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[9313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__full_next = ((~ ((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                & (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass))) 
                                   | (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}
