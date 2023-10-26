// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl__Pz1.h"

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__full_next = ((((IData)(vlSelf->__PVT__do_enq) 
                                  & (~ (IData)(vlSelf->__PVT__do_deq))) 
                                 & ((IData)(vlSelf->__PVT__enq_ptr_inc) 
                                    == (IData)(vlSelf->__PVT__deq_ptr))) 
                                | ((~ (((IData)(vlSelf->__PVT__do_deq) 
                                        & (IData)(vlSelf->__PVT__full)) 
                                       & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                   & (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__d 
        = vlSelf->__PVT__full_next;
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__deq_ptr_next = (((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass)))
                                    ? (IData)(vlSelf->__PVT__deq_ptr_inc)
                                    : (IData)(vlSelf->__PVT__deq_ptr));
    vlSelf->__PVT__enq_ptr_next = (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass)))
                                    ? (IData)(vlSelf->__PVT__enq_ptr_inc)
                                    : (IData)(vlSelf->__PVT__enq_ptr));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__deq_ptr_next) ^ (IData)(vlSelf->__Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[9236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_ptr_next = vlSelf->__PVT__deq_ptr_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__d 
        = vlSelf->__PVT__deq_ptr_next;
    if (((IData)(vlSelf->__PVT__enq_ptr_next) ^ (IData)(vlSelf->__Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[9234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_ptr_next = vlSelf->__PVT__enq_ptr_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__d 
        = vlSelf->__PVT__enq_ptr_next;
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    vlSelf->__PVT__enq_ptr = vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__q;
    if (((IData)(vlSelf->__PVT__enq_ptr) ^ (IData)(vlSelf->__Vtogcov__enq_ptr))) {
        vlSymsp->__Vcoverage[9233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_ptr = vlSelf->__PVT__enq_ptr;
    }
    vlSelf->__PVT__write_addr = vlSelf->__PVT__enq_ptr;
    vlSelf->__PVT__enq_ptr_plus1 = (1U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__enq_ptr)));
    if (((IData)(vlSelf->__PVT__write_addr) ^ (IData)(vlSelf->__Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[9228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_addr = vlSelf->__PVT__write_addr;
    }
    if (((IData)(vlSelf->__PVT__enq_ptr_plus1) ^ (IData)(vlSelf->__Vtogcov__enq_ptr_plus1))) {
        vlSymsp->__Vcoverage[9246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_ptr_plus1 = vlSelf->__PVT__enq_ptr_plus1;
    }
    vlSelf->__PVT__enq_ptr_inc = vlSelf->__PVT__enq_ptr_plus1;
    if (((IData)(vlSelf->__PVT__enq_ptr_inc) ^ (IData)(vlSelf->__Vtogcov__enq_ptr_inc))) {
        vlSymsp->__Vcoverage[9247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_ptr_inc = vlSelf->__PVT__enq_ptr_inc;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    vlSelf->__PVT__full = vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__q;
    if (((IData)(vlSelf->__PVT__full) ^ (IData)(vlSelf->__Vtogcov__full))) {
        vlSymsp->__Vcoverage[9237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full = vlSelf->__PVT__full;
    }
    vlSelf->__PVT__enq_rdy = (1U & (~ (IData)(vlSelf->__PVT__full)));
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[9224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__3(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__3\n"); );
    // Body
    vlSelf->__PVT__deq_ptr = vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__q;
    if (((IData)(vlSelf->__PVT__deq_ptr) ^ (IData)(vlSelf->__Vtogcov__deq_ptr))) {
        vlSymsp->__Vcoverage[9235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_ptr = vlSelf->__PVT__deq_ptr;
    }
    vlSelf->__PVT__deq_ptr_plus1 = (1U & ((IData)(1U) 
                                          + (IData)(vlSelf->__PVT__deq_ptr)));
    vlSelf->__PVT__read_addr = vlSelf->__PVT__deq_ptr;
    if (((IData)(vlSelf->__PVT__deq_ptr_plus1) ^ (IData)(vlSelf->__Vtogcov__deq_ptr_plus1))) {
        vlSymsp->__Vcoverage[9244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_ptr_plus1 = vlSelf->__PVT__deq_ptr_plus1;
    }
    vlSelf->__PVT__deq_ptr_inc = vlSelf->__PVT__deq_ptr_plus1;
    if (((IData)(vlSelf->__PVT__read_addr) ^ (IData)(vlSelf->__Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[9229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__read_addr = vlSelf->__PVT__read_addr;
    }
    if (((IData)(vlSelf->__PVT__deq_ptr_inc) ^ (IData)(vlSelf->__Vtogcov__deq_ptr_inc))) {
        vlSymsp->__Vcoverage[9245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_ptr_inc = vlSelf->__PVT__deq_ptr_inc;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__4(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__4\n"); );
    // Body
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__0\n"); );
    // Body
    vlSelf->__PVT__empty = ((~ (IData)(vlSelf->__PVT__full)) 
                            & ((IData)(vlSelf->__PVT__enq_ptr) 
                               == (IData)(vlSelf->__PVT__deq_ptr)));
    if (((IData)(vlSelf->__PVT__empty) ^ (IData)(vlSelf->__Vtogcov__empty))) {
        vlSymsp->__Vcoverage[9241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__empty = vlSelf->__PVT__empty;
    }
    vlSelf->__PVT__num_free_entries = (3U & ((IData)(vlSelf->__PVT__full)
                                              ? 0U : 
                                             ((IData)(vlSelf->__PVT__empty)
                                               ? 2U
                                               : (((IData)(vlSelf->__PVT__enq_ptr) 
                                                   > (IData)(vlSelf->__PVT__deq_ptr))
                                                   ? 
                                                  ((IData)(2U) 
                                                   - 
                                                   (VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__enq_ptr)) 
                                                    - 
                                                    VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__deq_ptr))))
                                                   : 
                                                  (((IData)(vlSelf->__PVT__deq_ptr) 
                                                    > (IData)(vlSelf->__PVT__enq_ptr))
                                                    ? 
                                                   (VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__deq_ptr)) 
                                                    - 
                                                    VL_EXTEND_II(2,1, (IData)(vlSelf->__PVT__enq_ptr)))
                                                    : 0U)))));
    vlSelf->__PVT__bypass_mux_sel = vlSelf->__PVT__empty;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__num_free_entries), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__num_free_entries), 0U)))) {
        vlSymsp->__Vcoverage[9231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__num_free_entries), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__num_free_entries), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__num_free_entries), 1U)))) {
        vlSymsp->__Vcoverage[9232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__num_free_entries), 1U)));
    }
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[9223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__2(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__2\n"); );
    // Body
    vlSelf->__PVT__do_enq = ((IData)(vlSelf->__PVT__enq_rdy) 
                             & (IData)(vlSelf->__PVT__enq_val));
    if (((IData)(vlSelf->__PVT__do_enq) ^ (IData)(vlSelf->__Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[9239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_enq = vlSelf->__PVT__do_enq;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__3(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__3\n"); );
    // Body
    vlSelf->__PVT__deq_val = (1U & ((~ (IData)(vlSelf->__PVT__empty)) 
                                    | ((IData)(vlSelf->__PVT__empty) 
                                       & (IData)(vlSelf->__PVT__enq_val))));
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[9225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_INLINE_OPT void Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__4(Vtop_vc_QueueCtrl__Pz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueCtrl__Pz1___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[9226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSelf->__PVT__do_deq = ((IData)(vlSelf->__PVT__deq_rdy) 
                             & (IData)(vlSelf->__PVT__deq_val));
    if (((IData)(vlSelf->__PVT__do_deq) ^ (IData)(vlSelf->__Vtogcov__do_deq))) {
        vlSymsp->__Vcoverage[9240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_deq = vlSelf->__PVT__do_deq;
    }
    vlSelf->__PVT__full_next = ((((IData)(vlSelf->__PVT__do_enq) 
                                  & (~ (IData)(vlSelf->__PVT__do_deq))) 
                                 & ((IData)(vlSelf->__PVT__enq_ptr_inc) 
                                    == (IData)(vlSelf->__PVT__deq_ptr))) 
                                | ((~ (((IData)(vlSelf->__PVT__do_deq) 
                                        & (IData)(vlSelf->__PVT__full)) 
                                       & (~ (IData)(vlSelf->__PVT__do_pipe)))) 
                                   & (IData)(vlSelf->__PVT__full)));
    vlSelf->__PVT__do_bypass = (((IData)(vlSelf->__PVT__empty) 
                                 & (IData)(vlSelf->__PVT__do_enq)) 
                                & (IData)(vlSelf->__PVT__do_deq));
    if (((IData)(vlSelf->__PVT__full_next) ^ (IData)(vlSelf->__Vtogcov__full_next))) {
        vlSymsp->__Vcoverage[9238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__full_next = vlSelf->__PVT__full_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg.__PVT__d 
        = vlSelf->__PVT__full_next;
    if (((IData)(vlSelf->__PVT__do_bypass) ^ (IData)(vlSelf->__Vtogcov__do_bypass))) {
        vlSymsp->__Vcoverage[9243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__do_bypass = vlSelf->__PVT__do_bypass;
    }
    vlSelf->__PVT__deq_ptr_next = (((IData)(vlSelf->__PVT__do_deq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass)))
                                    ? (IData)(vlSelf->__PVT__deq_ptr_inc)
                                    : (IData)(vlSelf->__PVT__deq_ptr));
    vlSelf->__PVT__enq_ptr_next = (((IData)(vlSelf->__PVT__do_enq) 
                                    & (~ (IData)(vlSelf->__PVT__do_bypass)))
                                    ? (IData)(vlSelf->__PVT__enq_ptr_inc)
                                    : (IData)(vlSelf->__PVT__enq_ptr));
    vlSelf->__PVT__write_en = ((IData)(vlSelf->__PVT__do_enq) 
                               & (~ (IData)(vlSelf->__PVT__do_bypass)));
    if (((IData)(vlSelf->__PVT__deq_ptr_next) ^ (IData)(vlSelf->__Vtogcov__deq_ptr_next))) {
        vlSymsp->__Vcoverage[9236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_ptr_next = vlSelf->__PVT__deq_ptr_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg.__PVT__d 
        = vlSelf->__PVT__deq_ptr_next;
    if (((IData)(vlSelf->__PVT__enq_ptr_next) ^ (IData)(vlSelf->__Vtogcov__enq_ptr_next))) {
        vlSymsp->__Vcoverage[9234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_ptr_next = vlSelf->__PVT__enq_ptr_next;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg.__PVT__d 
        = vlSelf->__PVT__enq_ptr_next;
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
}
