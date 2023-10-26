// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_ResetReg.h"

VL_INLINE_OPT void Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    vlSelf->__Vdly__q = (1U & VL_BITSEL_IIII(32, ((IData)(vlSelf->__PVT__reset)
                                                   ? 0U
                                                   : 
                                                  VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__d))), 0U));
    vlSymsp->__Vcoverage[10234].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    vlSelf->__Vdly__q = (1U & VL_BITSEL_IIII(32, ((IData)(vlSelf->__PVT__reset)
                                                   ? 0U
                                                   : 
                                                  VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__d))), 0U));
    vlSymsp->__Vcoverage[10234].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    vlSelf->__Vdly__q = (1U & VL_BITSEL_IIII(32, ((IData)(vlSelf->__PVT__reset)
                                                   ? 0U
                                                   : 
                                                  VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__d))), 0U));
    vlSymsp->__Vcoverage[10234].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}
