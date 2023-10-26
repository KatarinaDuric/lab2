// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSourceFile__P20_PBa.h"

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___ico_sequent__TOP__top__src__src__0(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___ico_sequent__TOP__top__src__src__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__src__src__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__0(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__1(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__src__src__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__2(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___act_sequent__TOP__top__src__src__2\n"); );
    // Body
    vlSelf->__PVT__done_next = ((IData)(vlSelf->__PVT__index) 
                                == (IData)(vlSelf->__PVT__index_max));
    if (((IData)(vlSelf->__PVT__done_next) ^ (IData)(vlSelf->__Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done_next = vlSelf->__PVT__done_next;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___act_comb__TOP__top__src__src__0(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___act_comb__TOP__top__src__src__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    vlSelf->__PVT__index_en = vlSelf->__PVT__go;
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__src__src__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__0(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__0\n"); );
    // Body
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__done = vlSelf->__PVT__done;
    if (vlSelf->__PVT__reset_reg) {
        vlSelf->__Vdly__done = 0U;
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__val) & (IData)(vlSelf->__PVT__rdy))) {
        vlSelf->__Vdly__done = vlSelf->__PVT__done_next;
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__done = vlSelf->__Vdly__done;
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset_reg;
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset;
    vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__reset_reg = vlSelf->__Vdly__reset_reg;
    if (((IData)(vlSelf->__PVT__reset_reg) ^ (IData)(vlSelf->__Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_reg = vlSelf->__PVT__reset_reg;
    }
    vlSelf->__PVT__val = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__1(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__2(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__3(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__3\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__src__src__index_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 0U)))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 1U)))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 2U)))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 3U)))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U)));
    }
    vlSelf->__PVT__index_next = (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__msg = ((9U >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U);
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 0U)))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 1U)))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 2U)))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 3U)))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U)));
    }
    vlSymsp->TOP__top__src__src__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[2469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[2470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[2471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[2472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[2473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[2475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__4(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_sequent__TOP__top__src__src__4\n"); );
    // Body
    vlSymsp->TOP__top__src__src__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_comb__TOP__top__src__src__0(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_comb__TOP__top__src__src__0\n"); );
    // Body
    vlSelf->__PVT__done_next = ((IData)(vlSelf->__PVT__index) 
                                == (IData)(vlSelf->__PVT__index_max));
    if (((IData)(vlSelf->__PVT__done_next) ^ (IData)(vlSelf->__Vtogcov__done_next))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done_next = vlSelf->__PVT__done_next;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSourceFile__P20_PBa___nba_comb__TOP__top__src__src__1(Vtop_vc_TestSourceFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSourceFile__P20_PBa___nba_comb__TOP__top__src__src__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    vlSelf->__PVT__index_en = vlSelf->__PVT__go;
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__src__src__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}
