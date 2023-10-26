// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Trace.h"

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__DUT__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__DUT__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__DUT__imem_reqstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__DUT__imem_reqstream_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__DUT__dmem_reqstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__DUT__dmem_reqstream_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__DUT__imem_respstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__DUT__imem_respstream_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__imem_respstream_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__DUT__dmem_respstream_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__DUT__dmem_respstream_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memreq0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memreq0_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq0_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memreq1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memreq1_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memreq1_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memresp0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memresp0_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp0_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memresp1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__mem__memresp1_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__memresp1_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__mem__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__mem__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__mem__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__memreq0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__memreq0_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq0_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__memreq1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__memreq1_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memreq1_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__memresp0_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__memresp0_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp0_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__memresp1_trace__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__memresp1_trace__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__memresp1_trace__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___eval_static__TOP__top__mem__vc_trace(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___eval_static__TOP__top__mem__vc_trace\n"); );
    // Body
    vlSelf->__PVT__cycles_next = 0U;
    vlSymsp->__Vcoverage[5857].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__cycles = 0U;
    vlSymsp->__Vcoverage[5858].fetch_add(1, std::memory_order_relaxed);
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__0(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 0U)))) {
        vlSymsp->__Vcoverage[5859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 1U)))) {
        vlSymsp->__Vcoverage[5860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 2U)))) {
        vlSymsp->__Vcoverage[5861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__level), 3U)))) {
        vlSymsp->__Vcoverage[5862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__level, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__level), 3U)));
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__1(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__2(Vtop_vc_Trace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___stl_sequent__TOP__top__mem__vc_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_Trace___configure_coverage(Vtop_vc_Trace* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Trace___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5855]), first, "../vc/trace.v", 20, 15, "", "v_toggle/vc_Trace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5856]), first, "../vc/trace.v", 21, 15, "", "v_toggle/vc_Trace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5857]), first, "../vc/trace.v", 44, 25, "", "v_line/vc_Trace", "block", "44");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5858]), first, "../vc/trace.v", 45, 25, "", "v_line/vc_Trace", "block", "45");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5859]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5860]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5861]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5862]), first, "../vc/trace.v", 49, 15, "", "v_toggle/vc_Trace", "level[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5863]), first, "../vc/trace.v", 62, 3, "", "v_line/vc_Trace", "block", "62-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5864]), first, "../vc/trace.v", 71, 3, "", "v_line/vc_Trace", "block", "71-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5865]), first, "../vc/trace.v", 89, 5, "", "v_line/vc_Trace", "block", "89-90");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5866]), first, "../vc/trace.v", 95, 5, "", "v_line/vc_Trace", "block", "95-97,99-100");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5867]), first, "../vc/trace.v", 80, 8, "", "v_line/vc_Trace", "block", "80,85-86,88,93,95,103");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5868]), first, "../vc/trace.v", 123, 5, "", "v_line/vc_Trace", "block", "123-126");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5869]), first, "../vc/trace.v", 113, 8, "", "v_line/vc_Trace", "block", "113,118,120-121,129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5870]), first, "../vc/trace.v", 149, 5, "", "v_line/vc_Trace", "block", "149-153,155-156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5871]), first, "../vc/trace.v", 139, 8, "", "v_line/vc_Trace", "block", "139,145-147,149,159");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5872]), first, "../vc/trace.v", 178, 5, "", "v_line/vc_Trace", "block", "178-179");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5873]), first, "../vc/trace.v", 184, 10, "", "v_line/vc_Trace", "if", "184-185");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5874]), first, "../vc/trace.v", 184, 11, "", "v_line/vc_Trace", "else", "186-188");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5875]), first, "../vc/trace.v", 182, 5, "", "v_line/vc_Trace", "elsif", "182-183");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5876]), first, "../vc/trace.v", 169, 8, "", "v_line/vc_Trace", "block", "169,175,177");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5877]), first, "../vc/trace.v", 209, 5, "", "v_line/vc_Trace", "block", "209-210");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5878]), first, "../vc/trace.v", 223, 10, "", "v_line/vc_Trace", "if", "223-225");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5879]), first, "../vc/trace.v", 223, 11, "", "v_line/vc_Trace", "else", "227-229");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5880]), first, "../vc/trace.v", 219, 10, "", "v_line/vc_Trace", "elsif", "219-221");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5881]), first, "../vc/trace.v", 216, 10, "", "v_line/vc_Trace", "elsif", "216-217");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5882]), first, "../vc/trace.v", 213, 5, "", "v_line/vc_Trace", "elsif", "213-214");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5883]), first, "../vc/trace.v", 199, 8, "", "v_line/vc_Trace", "block", "199,206,208");
}
