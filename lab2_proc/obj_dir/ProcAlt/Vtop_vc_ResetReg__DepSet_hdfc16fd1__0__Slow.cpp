// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_ResetReg.h"

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__2(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__3(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__enq_ptr_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__2(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__3(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__deq_ptr_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__q) ^ (IData)(vlSelf->__Vtogcov__q))) {
        vlSymsp->__Vcoverage[10418].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__q = vlSelf->__PVT__q;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__1(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[10417].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__2(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[10416].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__3(Vtop_vc_ResetReg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___stl_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__ctrl__full_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__d) ^ (IData)(vlSelf->__Vtogcov__d))) {
        vlSymsp->__Vcoverage[10419].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__d = vlSelf->__PVT__d;
    }
}

VL_ATTR_COLD void Vtop_vc_ResetReg___configure_coverage(Vtop_vc_ResetReg* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_ResetReg___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10416]), first, "../vc/regs.v", 42, 30, "", "v_toggle/vc_ResetReg", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10417]), first, "../vc/regs.v", 43, 30, "", "v_toggle/vc_ResetReg", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10418]), first, "../vc/regs.v", 44, 30, "", "v_toggle/vc_ResetReg", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10419]), first, "../vc/regs.v", 45, 30, "", "v_toggle/vc_ResetReg", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10420]), first, "../vc/regs.v", 48, 3, "", "v_line/vc_ResetReg", "block", "48-49");
}
