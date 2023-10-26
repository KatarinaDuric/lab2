// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[5893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[5898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[5891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[5889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[5897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[5900].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[5893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[5898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[5891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[5889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[5897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[5900].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[5893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[5898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[5891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[5889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[5897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[5900].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[5893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    if (((IData)(vlSelf->__PVT__do_pipe) ^ (IData)(vlSelf->__Vtogcov__do_pipe))) {
        vlSymsp->__Vcoverage[5899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_pipe = vlSelf->__PVT__do_pipe;
    }
    vlSelf->__PVT__num_free_entries = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__empty = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[5898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[5891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[5896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl1__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___stl_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[5889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[5897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[5900].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[5890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_ATTR_COLD void Vtop_vc_QueueCtrl1__Pz1___configure_coverage(Vtop_vc_QueueCtrl1__Pz1* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl1__Pz1___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5884]), first, "../vc/queues.v", 38, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5885]), first, "../vc/queues.v", 39, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5886]), first, "../vc/queues.v", 41, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5887]), first, "../vc/queues.v", 42, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5888]), first, "../vc/queues.v", 44, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5889]), first, "../vc/queues.v", 45, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5890]), first, "../vc/queues.v", 47, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "write_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5891]), first, "../vc/queues.v", 48, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "bypass_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5892]), first, "../vc/queues.v", 49, 16, "", "v_toggle/vc_QueueCtrl1__Pz1", "num_free_entries", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5893]), first, "../vc/queues.v", 54, 9, "", "v_toggle/vc_QueueCtrl1__Pz1", "full", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5894]), first, "../vc/queues.v", 55, 9, "", "v_toggle/vc_QueueCtrl1__Pz1", "full_next", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5895]), first, "../vc/queues.v", 57, 3, "", "v_line/vc_QueueCtrl1__Pz1", "block", "57-58");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5896]), first, "../vc/queues.v", 70, 10, "", "v_toggle/vc_QueueCtrl1__Pz1", "do_enq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5897]), first, "../vc/queues.v", 73, 10, "", "v_toggle/vc_QueueCtrl1__Pz1", "do_deq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5898]), first, "../vc/queues.v", 79, 10, "", "v_toggle/vc_QueueCtrl1__Pz1", "empty", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5899]), first, "../vc/queues.v", 82, 10, "", "v_toggle/vc_QueueCtrl1__Pz1", "do_pipe", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5900]), first, "../vc/queues.v", 85, 10, "", "v_toggle/vc_QueueCtrl1__Pz1", "do_bypass", "");
}
