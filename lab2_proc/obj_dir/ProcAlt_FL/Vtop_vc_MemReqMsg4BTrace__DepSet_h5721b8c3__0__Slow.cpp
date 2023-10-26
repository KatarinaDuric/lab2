// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemReqMsg4BTrace.h"
#include "Vtop_vc_Trace.h"

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__0(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__imem_reqstream_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__0(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_reqstream_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq0_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq0_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq0_trace__2(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq0_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq1_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq1_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq1_trace__2(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__mem__memreq1_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq0_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq0_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq0_trace__2(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq0_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq1_trace__1(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq1_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSelf->__PVT__vc_trace->__PVT__reset = vlSelf->__PVT__reset;
}

VL_ATTR_COLD void Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq1_trace__2(Vtop_vc_MemReqMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsg4BTrace___stl_sequent__TOP__top__mem__memreq1_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSelf->__PVT__vc_trace->__PVT__clk = vlSelf->__PVT__clk;
}
