// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__DUT__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__DUT__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__DUT__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__DUT__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__DUT__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__DUT__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__DUT__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__DUT__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__DUT__imem_reqstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__DUT__imem_reqstream_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__DUT__dmem_reqstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__DUT__dmem_reqstream_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__DUT__imem_respstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__DUT__imem_respstream_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__DUT__dmem_respstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__DUT__dmem_respstream_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memreq0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memreq0_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memreq1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memreq1_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memresp0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memresp0_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memresp1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__memresp1_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__mem__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__mem__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__mem__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__mem__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__memreq0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__memreq0_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__memreq1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__memreq1_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memreq1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__memresp0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__memresp0_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__memresp1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__memresp1_trace__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__memresp1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___eval_initial__TOP__top__mem__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_initial__TOP__top__mem__vc_trace\n"); );
    // Body
    VL_CONST_W_1X(4096,vlSelf->__PVT__storage,0x00000000);
    VL_ASSIGNSEL_WI(4096,32,0U, vlSelf->__PVT__storage, 0x1ffU);
    vlSelf->__PVT__level = 3U;
    vlSymsp->__Vcoverage[5851].fetch_add(1, std::memory_order_relaxed);
}

VL_INLINE_OPT void Vtop_vc_Trace___ico_sequent__TOP__top__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___ico_sequent__TOP__top__mem__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___act_sequent__TOP__top__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___act_sequent__TOP__top__mem__vc_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__vc_trace__0\n"); );
    // Body
    vlSelf->__Vdly__cycles = vlSelf->__PVT__cycles;
    vlSelf->__Vdly__cycles = ((IData)(vlSelf->__PVT__reset)
                               ? 0U : vlSelf->__PVT__cycles_next);
    vlSymsp->__Vcoverage[5852].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = vlSelf->__Vdly__cycles;
}

VL_INLINE_OPT void Vtop_vc_Trace___nba_sequent__TOP__top__mem__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___nba_sequent__TOP__top__mem__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}
