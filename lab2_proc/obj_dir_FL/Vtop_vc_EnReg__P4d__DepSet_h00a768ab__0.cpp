// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P4d.h"

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__q);
    if (vlSelf->__PVT__en) {
        VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__d);
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
    VL_ASSIGN_W(77,vlSelf->__PVT__q, vlSelf->__Vdly__q);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__q);
    if (vlSelf->__PVT__en) {
        VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__d);
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
    VL_ASSIGN_W(77,vlSelf->__PVT__q, vlSelf->__Vdly__q);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___ico_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___act_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__q);
    if (vlSelf->__PVT__en) {
        VL_ASSIGN_W(77,vlSelf->__Vdly__q, vlSelf->__PVT__d);
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
    VL_ASSIGN_W(77,vlSelf->__PVT__q, vlSelf->__Vdly__q);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_INLINE_OPT void Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___nba_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}
