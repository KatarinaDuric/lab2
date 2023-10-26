// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemRespMsg4BTrace.h"

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__DUT__imem_respstream_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__DUT__imem_respstream_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__DUT__imem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__imem_respstream_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__DUT__dmem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__DUT__dmem_respstream_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__mem__mem__memresp0_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__mem__mem__memresp0_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp0_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__mem__memresp1_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__mem__memresp0_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___act_sequent__TOP__top__mem__memresp0_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp0_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_sequent__TOP__top__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__1\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__2(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___nba_comb__TOP__top__mem__memresp1_trace__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}
