// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P2f.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___ico_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___ico_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__qstore_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___act_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__qstore_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___act_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___act_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSelf->__PVT__qstore_reg->__PVT__en = vlSelf->__PVT__write_en;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__qstore_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSelf->__PVT__qstore_reg->__PVT__en = vlSelf->__PVT__write_en;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___ico_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___ico_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__qstore_reg->__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___act_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___act_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__qstore_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___act_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___act_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSelf->__PVT__qstore_reg->__PVT__en = vlSelf->__PVT__write_en;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__qstore_reg->__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSelf->__PVT__qstore_reg->__PVT__en = vlSelf->__PVT__write_en;
}
