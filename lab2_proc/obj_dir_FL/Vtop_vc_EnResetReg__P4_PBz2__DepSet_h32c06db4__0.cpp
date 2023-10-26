// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P4_PBz2.h"

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___ico_sequent__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___ico_sequent__TOP__top__src__src__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___act_sequent__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___act_sequent__TOP__top__src__src__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___act_comb__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___act_comb__TOP__top__src__src__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (((IData)(vlSelf->__PVT__reset) | (IData)(vlSelf->__PVT__en))) {
        vlSelf->__Vdly__q = ((IData)(vlSelf->__PVT__reset)
                              ? 0U : (IData)(vlSelf->__PVT__d));
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 0U)))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 1U)))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 2U)))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 3U)))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__1(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 0U)))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 1U)))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 2U)))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 3U)))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__2(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__src__src__index_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_comb__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_comb__TOP__top__src__src__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___ico_sequent__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___ico_sequent__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___act_sequent__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___act_sequent__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___act_comb__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___act_comb__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    vlSelf->__Vdly__q = vlSelf->__PVT__q;
    if (((IData)(vlSelf->__PVT__reset) | (IData)(vlSelf->__PVT__en))) {
        vlSelf->__Vdly__q = ((IData)(vlSelf->__PVT__reset)
                              ? 0U : (IData)(vlSelf->__PVT__d));
        vlSymsp->__Vcoverage[5136].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[5137].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[5138].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__q = vlSelf->__Vdly__q;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 0U)))) {
        vlSymsp->__Vcoverage[5127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 1U)))) {
        vlSymsp->__Vcoverage[5128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 2U)))) {
        vlSymsp->__Vcoverage[5129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 3U)))) {
        vlSymsp->__Vcoverage[5130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__1(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 0U)))) {
        vlSymsp->__Vcoverage[5131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 1U)))) {
        vlSymsp->__Vcoverage[5132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 2U)))) {
        vlSymsp->__Vcoverage[5133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 3U)))) {
        vlSymsp->__Vcoverage[5134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__2(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_sequent__TOP__top__sink__sink__index_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnResetReg__P4_PBz2___nba_comb__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___nba_comb__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[5135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}
