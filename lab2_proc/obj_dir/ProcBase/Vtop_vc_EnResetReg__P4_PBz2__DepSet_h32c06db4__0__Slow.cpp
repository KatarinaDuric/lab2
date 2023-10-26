// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P4_PBz2.h"

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 0U)))) {
        vlSymsp->__Vcoverage[7409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 1U)))) {
        vlSymsp->__Vcoverage[7410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 2U)))) {
        vlSymsp->__Vcoverage[7411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 3U)))) {
        vlSymsp->__Vcoverage[7412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 0U)))) {
        vlSymsp->__Vcoverage[7413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 1U)))) {
        vlSymsp->__Vcoverage[7414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 2U)))) {
        vlSymsp->__Vcoverage[7415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 3U)))) {
        vlSymsp->__Vcoverage[7416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__1(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__2(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__3(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__src__src__index_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__0(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 0U)))) {
        vlSymsp->__Vcoverage[7409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 1U)))) {
        vlSymsp->__Vcoverage[7410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 2U)))) {
        vlSymsp->__Vcoverage[7411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__q), 3U)))) {
        vlSymsp->__Vcoverage[7412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__q), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 0U)))) {
        vlSymsp->__Vcoverage[7413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 1U)))) {
        vlSymsp->__Vcoverage[7414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 2U)))) {
        vlSymsp->__Vcoverage[7415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__d), 3U)))) {
        vlSymsp->__Vcoverage[7416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__d), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__1(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7408].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__2(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7407].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__3(Vtop_vc_EnResetReg__P4_PBz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___stl_sequent__TOP__top__sink__sink__index_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P4_PBz2___configure_coverage(Vtop_vc_EnResetReg__P4_PBz2* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P4_PBz2___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7407]), first, "../vc/regs.v", 95, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7408]), first, "../vc/regs.v", 96, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7409]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7410]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7411]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7412]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7413]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7414]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7415]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7416]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7417]), first, "../vc/regs.v", 99, 30, "", "v_toggle/vc_EnResetReg__P4_PBz2", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7418]), first, "../vc/regs.v", 103, 5, "", "v_branch/vc_EnResetReg__P4_PBz2", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7419]), first, "../vc/regs.v", 103, 6, "", "v_branch/vc_EnResetReg__P4_PBz2", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7420]), first, "../vc/regs.v", 102, 3, "", "v_line/vc_EnResetReg__P4_PBz2", "block", "102");
}
