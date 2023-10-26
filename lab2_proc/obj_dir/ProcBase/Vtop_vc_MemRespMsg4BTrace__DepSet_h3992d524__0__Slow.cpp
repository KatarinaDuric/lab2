// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemRespMsg4BTrace.h"

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__imem_respstream_trace__5\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__DUT__dmem_respstream_trace__5\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__4\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__5\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__5\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__4\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__5\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[6443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[6444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[6445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[6446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[6447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[6448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[6449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[6450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[6451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[6452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[6453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[6454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[6455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[6456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[6457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[6458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__3(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6348].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6347].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__5(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp1_trace__5\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___configure_coverage(Vtop_vc_MemRespMsg4BTrace* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6345]), first, "../vc/mem-msgs.v", 311, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6346]), first, "../vc/mem-msgs.v", 312, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6347]), first, "../vc/mem-msgs.v", 313, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6348]), first, "../vc/mem-msgs.v", 314, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6349]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6350]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6351]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6352]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6353]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6354]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6355]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6356]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6357]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6358]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6359]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6360]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.test[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6361]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.test[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6362]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.len[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6363]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.len[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6364]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6365]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6366]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6367]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6368]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6369]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6370]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6371]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6372]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6373]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6374]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6375]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6376]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6377]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6378]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6379]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6380]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6381]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6382]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6383]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6384]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6385]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6386]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6387]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6388]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6389]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6390]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6391]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6392]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6393]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6394]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6395]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6396]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6397]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6398]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6399]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6400]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6401]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6402]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6403]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6404]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6405]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6406]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6407]), first, "../vc/mem-msgs.v", 323, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "test[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6408]), first, "../vc/mem-msgs.v", 323, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "test[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6409]), first, "../vc/mem-msgs.v", 325, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "len[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6410]), first, "../vc/mem-msgs.v", 325, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "len[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6411]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6412]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6413]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6414]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6415]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6416]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6417]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6418]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6419]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6420]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6421]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6422]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6423]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6424]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6425]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6426]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6427]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6428]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6429]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6430]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6431]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6432]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6433]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6434]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6435]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6436]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6437]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6438]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6439]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6440]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6441]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6442]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6443]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6444]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6445]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6446]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6447]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6448]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6449]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6450]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6451]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6452]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6453]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6454]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6455]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6456]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6457]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6458]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[15]", "");
}
