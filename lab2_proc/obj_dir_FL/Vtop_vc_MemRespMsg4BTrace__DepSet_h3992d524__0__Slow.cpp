// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemRespMsg4BTrace.h"

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__imem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__imem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__imem_respstream_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__imem_respstream_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__dmem_respstream_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__dmem_respstream_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__dmem_respstream_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__DUT__dmem_respstream_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__4(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__mem__memresp1_trace__4\n"); );
    // Body
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_sequent__TOP__top__mem__memresp0_trace__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0U)))) {
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp0_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp0_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp0_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp0_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 1U)))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 2U)))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 3U)))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 4U)))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 5U)))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 6U)))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 7U)))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 8U)))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 9U)))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xaU)))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xbU)))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xcU)))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xdU)))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xeU)))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU) 
               ^ VL_BITSEL_IIII(16, (IData)(vlSelf->__Vtogcov__type_str), 0xfU)))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__type_str, 
                        (1U & VL_BITSEL_IIII(16, (IData)(vlSelf->__PVT__type_str), 0xfU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp1_trace__0(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp1_trace__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[4781].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
    vlSelf->__PVT__test = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x22U, 2U));
    vlSelf->__PVT__len = (3U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x2cU, 3U));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IQII(47, vlSelf->__PVT__msg, 0x24U, 8U));
    vlSelf->__PVT__data = VL_SEL_IQII(47, vlSelf->__PVT__msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 0U)))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__test), 1U)))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__test, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__test), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp1_trace__1(Vtop_vc_MemRespMsg4BTrace* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___stl_comb__TOP__top__mem__memresp1_trace__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4782].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_ATTR_COLD void Vtop_vc_MemRespMsg4BTrace___configure_coverage(Vtop_vc_MemRespMsg4BTrace* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsg4BTrace___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4779]), first, "../vc/mem-msgs.v", 311, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4780]), first, "../vc/mem-msgs.v", 312, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4781]), first, "../vc/mem-msgs.v", 313, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4782]), first, "../vc/mem-msgs.v", 314, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4783]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4784]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4785]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.type_[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4786]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4787]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4788]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4789]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4790]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4791]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4792]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4793]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.opaque[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4794]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.test[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4795]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.test[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4796]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.len[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4797]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.len[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4798]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4799]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4800]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4801]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4802]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4803]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4804]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4805]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4806]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4807]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4808]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4809]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4810]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4811]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4812]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4813]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4814]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4815]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4816]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4817]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4818]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4819]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4820]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4821]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4822]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4823]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4824]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4825]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4826]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4827]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4828]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4829]), first, "../vc/mem-msgs.v", 315, 24, "", "v_toggle/vc_MemRespMsg4BTrace", "msg.data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4830]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4831]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4832]), first, "../vc/mem-msgs.v", 319, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "type_[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4833]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4834]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4835]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4836]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4837]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4838]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4839]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4840]), first, "../vc/mem-msgs.v", 321, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "opaque[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4841]), first, "../vc/mem-msgs.v", 323, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "test[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4842]), first, "../vc/mem-msgs.v", 323, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "test[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4843]), first, "../vc/mem-msgs.v", 325, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "len[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4844]), first, "../vc/mem-msgs.v", 325, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "len[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4845]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4846]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4847]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4848]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4849]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4850]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4851]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4852]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4853]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4854]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4855]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4856]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4857]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4858]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4859]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4860]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4861]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4862]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4863]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4864]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4865]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4866]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4867]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4868]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4869]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4870]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4871]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4872]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4873]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4874]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4875]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4876]), first, "../vc/mem-msgs.v", 327, 17, "", "v_toggle/vc_MemRespMsg4BTrace", "data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4877]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4878]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4879]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4880]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4881]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4882]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4883]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4884]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4885]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4886]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4887]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4888]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4889]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4890]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4891]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4892]), first, "../vc/mem-msgs.v", 339, 19, "", "v_toggle/vc_MemRespMsg4BTrace", "type_str[15]", "");
}
