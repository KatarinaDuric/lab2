// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P4d.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2fU)))) {
        vlSymsp->__Vcoverage[11117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x30U)))) {
        vlSymsp->__Vcoverage[11118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x31U)))) {
        vlSymsp->__Vcoverage[11119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x32U)))) {
        vlSymsp->__Vcoverage[11120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x33U)))) {
        vlSymsp->__Vcoverage[11121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x34U)))) {
        vlSymsp->__Vcoverage[11122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x35U)))) {
        vlSymsp->__Vcoverage[11123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x36U)))) {
        vlSymsp->__Vcoverage[11124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x37U)))) {
        vlSymsp->__Vcoverage[11125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x38U)))) {
        vlSymsp->__Vcoverage[11126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x39U)))) {
        vlSymsp->__Vcoverage[11127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3aU)))) {
        vlSymsp->__Vcoverage[11128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3bU)))) {
        vlSymsp->__Vcoverage[11129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3cU)))) {
        vlSymsp->__Vcoverage[11130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3dU)))) {
        vlSymsp->__Vcoverage[11131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3eU)))) {
        vlSymsp->__Vcoverage[11132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3fU)))) {
        vlSymsp->__Vcoverage[11133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x40U)))) {
        vlSymsp->__Vcoverage[11134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x41U)))) {
        vlSymsp->__Vcoverage[11135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x42U)))) {
        vlSymsp->__Vcoverage[11136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x43U)))) {
        vlSymsp->__Vcoverage[11137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x44U)))) {
        vlSymsp->__Vcoverage[11138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x45U)))) {
        vlSymsp->__Vcoverage[11139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x46U)))) {
        vlSymsp->__Vcoverage[11140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x47U)))) {
        vlSymsp->__Vcoverage[11141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x48U)))) {
        vlSymsp->__Vcoverage[11142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x49U)))) {
        vlSymsp->__Vcoverage[11143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4aU)))) {
        vlSymsp->__Vcoverage[11144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4bU)))) {
        vlSymsp->__Vcoverage[11145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4cU)))) {
        vlSymsp->__Vcoverage[11146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2fU)))) {
        vlSymsp->__Vcoverage[11194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x30U)))) {
        vlSymsp->__Vcoverage[11195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x31U)))) {
        vlSymsp->__Vcoverage[11196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x32U)))) {
        vlSymsp->__Vcoverage[11197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x33U)))) {
        vlSymsp->__Vcoverage[11198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x34U)))) {
        vlSymsp->__Vcoverage[11199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x35U)))) {
        vlSymsp->__Vcoverage[11200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x36U)))) {
        vlSymsp->__Vcoverage[11201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x37U)))) {
        vlSymsp->__Vcoverage[11202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x38U)))) {
        vlSymsp->__Vcoverage[11203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x39U)))) {
        vlSymsp->__Vcoverage[11204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3aU)))) {
        vlSymsp->__Vcoverage[11205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3bU)))) {
        vlSymsp->__Vcoverage[11206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3cU)))) {
        vlSymsp->__Vcoverage[11207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3dU)))) {
        vlSymsp->__Vcoverage[11208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3eU)))) {
        vlSymsp->__Vcoverage[11209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3fU)))) {
        vlSymsp->__Vcoverage[11210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x40U)))) {
        vlSymsp->__Vcoverage[11211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x41U)))) {
        vlSymsp->__Vcoverage[11212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x42U)))) {
        vlSymsp->__Vcoverage[11213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x43U)))) {
        vlSymsp->__Vcoverage[11214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x44U)))) {
        vlSymsp->__Vcoverage[11215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x45U)))) {
        vlSymsp->__Vcoverage[11216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x46U)))) {
        vlSymsp->__Vcoverage[11217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x47U)))) {
        vlSymsp->__Vcoverage[11218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x48U)))) {
        vlSymsp->__Vcoverage[11219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x49U)))) {
        vlSymsp->__Vcoverage[11220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4aU)))) {
        vlSymsp->__Vcoverage[11221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4bU)))) {
        vlSymsp->__Vcoverage[11222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4cU)))) {
        vlSymsp->__Vcoverage[11223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__3(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__3\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[11303].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(77,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[11304].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[11302].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11305].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2fU)))) {
        vlSymsp->__Vcoverage[11272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x30U)))) {
        vlSymsp->__Vcoverage[11273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x31U)))) {
        vlSymsp->__Vcoverage[11274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x32U)))) {
        vlSymsp->__Vcoverage[11275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x33U)))) {
        vlSymsp->__Vcoverage[11276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x34U)))) {
        vlSymsp->__Vcoverage[11277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x35U)))) {
        vlSymsp->__Vcoverage[11278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x36U)))) {
        vlSymsp->__Vcoverage[11279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x37U)))) {
        vlSymsp->__Vcoverage[11280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x38U)))) {
        vlSymsp->__Vcoverage[11281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x39U)))) {
        vlSymsp->__Vcoverage[11282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3aU)))) {
        vlSymsp->__Vcoverage[11283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3bU)))) {
        vlSymsp->__Vcoverage[11284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3cU)))) {
        vlSymsp->__Vcoverage[11285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3dU)))) {
        vlSymsp->__Vcoverage[11286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3eU)))) {
        vlSymsp->__Vcoverage[11287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3fU)))) {
        vlSymsp->__Vcoverage[11288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x40U)))) {
        vlSymsp->__Vcoverage[11289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x41U)))) {
        vlSymsp->__Vcoverage[11290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x42U)))) {
        vlSymsp->__Vcoverage[11291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x43U)))) {
        vlSymsp->__Vcoverage[11292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x44U)))) {
        vlSymsp->__Vcoverage[11293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x45U)))) {
        vlSymsp->__Vcoverage[11294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x46U)))) {
        vlSymsp->__Vcoverage[11295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x47U)))) {
        vlSymsp->__Vcoverage[11296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x48U)))) {
        vlSymsp->__Vcoverage[11297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x49U)))) {
        vlSymsp->__Vcoverage[11298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4aU)))) {
        vlSymsp->__Vcoverage[11299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4bU)))) {
        vlSymsp->__Vcoverage[11300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4cU)))) {
        vlSymsp->__Vcoverage[11301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x2fU)))) {
        vlSymsp->__Vcoverage[11117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x30U)))) {
        vlSymsp->__Vcoverage[11118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x31U)))) {
        vlSymsp->__Vcoverage[11119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x32U)))) {
        vlSymsp->__Vcoverage[11120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x33U)))) {
        vlSymsp->__Vcoverage[11121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x34U)))) {
        vlSymsp->__Vcoverage[11122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x35U)))) {
        vlSymsp->__Vcoverage[11123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x36U)))) {
        vlSymsp->__Vcoverage[11124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x37U)))) {
        vlSymsp->__Vcoverage[11125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x38U)))) {
        vlSymsp->__Vcoverage[11126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x39U)))) {
        vlSymsp->__Vcoverage[11127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3aU)))) {
        vlSymsp->__Vcoverage[11128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3bU)))) {
        vlSymsp->__Vcoverage[11129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3cU)))) {
        vlSymsp->__Vcoverage[11130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3dU)))) {
        vlSymsp->__Vcoverage[11131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3eU)))) {
        vlSymsp->__Vcoverage[11132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x3fU)))) {
        vlSymsp->__Vcoverage[11133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x40U)))) {
        vlSymsp->__Vcoverage[11134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x41U)))) {
        vlSymsp->__Vcoverage[11135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x42U)))) {
        vlSymsp->__Vcoverage[11136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x43U)))) {
        vlSymsp->__Vcoverage[11137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x44U)))) {
        vlSymsp->__Vcoverage[11138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x45U)))) {
        vlSymsp->__Vcoverage[11139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x46U)))) {
        vlSymsp->__Vcoverage[11140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x47U)))) {
        vlSymsp->__Vcoverage[11141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x48U)))) {
        vlSymsp->__Vcoverage[11142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x49U)))) {
        vlSymsp->__Vcoverage[11143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4aU)))) {
        vlSymsp->__Vcoverage[11144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4bU)))) {
        vlSymsp->__Vcoverage[11145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in0, 0x4cU)))) {
        vlSymsp->__Vcoverage[11146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in0, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x2fU)))) {
        vlSymsp->__Vcoverage[11194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x30U)))) {
        vlSymsp->__Vcoverage[11195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x31U)))) {
        vlSymsp->__Vcoverage[11196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x32U)))) {
        vlSymsp->__Vcoverage[11197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x33U)))) {
        vlSymsp->__Vcoverage[11198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x34U)))) {
        vlSymsp->__Vcoverage[11199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x35U)))) {
        vlSymsp->__Vcoverage[11200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x36U)))) {
        vlSymsp->__Vcoverage[11201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x37U)))) {
        vlSymsp->__Vcoverage[11202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x38U)))) {
        vlSymsp->__Vcoverage[11203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x39U)))) {
        vlSymsp->__Vcoverage[11204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3aU)))) {
        vlSymsp->__Vcoverage[11205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3bU)))) {
        vlSymsp->__Vcoverage[11206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3cU)))) {
        vlSymsp->__Vcoverage[11207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3dU)))) {
        vlSymsp->__Vcoverage[11208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3eU)))) {
        vlSymsp->__Vcoverage[11209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x3fU)))) {
        vlSymsp->__Vcoverage[11210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x40U)))) {
        vlSymsp->__Vcoverage[11211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x41U)))) {
        vlSymsp->__Vcoverage[11212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x42U)))) {
        vlSymsp->__Vcoverage[11213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x43U)))) {
        vlSymsp->__Vcoverage[11214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x44U)))) {
        vlSymsp->__Vcoverage[11215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x45U)))) {
        vlSymsp->__Vcoverage[11216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x46U)))) {
        vlSymsp->__Vcoverage[11217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x47U)))) {
        vlSymsp->__Vcoverage[11218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x48U)))) {
        vlSymsp->__Vcoverage[11219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x49U)))) {
        vlSymsp->__Vcoverage[11220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4aU)))) {
        vlSymsp->__Vcoverage[11221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4bU)))) {
        vlSymsp->__Vcoverage[11222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__in1, 0x4cU)))) {
        vlSymsp->__Vcoverage[11223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__in1, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P4d___nba_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[11303].fetch_add(1, std::memory_order_relaxed);
        } else {
            VL_CONST_W_1X(77,vlSelf->__PVT__out,0x00000000);
            vlSymsp->__Vcoverage[11304].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        VL_ASSIGN_W(77,vlSelf->__PVT__out, vlSelf->__PVT__in0);
        vlSymsp->__Vcoverage[11302].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11305].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x2fU)))) {
        vlSymsp->__Vcoverage[11272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x30U)))) {
        vlSymsp->__Vcoverage[11273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x31U)))) {
        vlSymsp->__Vcoverage[11274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x32U)))) {
        vlSymsp->__Vcoverage[11275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x33U)))) {
        vlSymsp->__Vcoverage[11276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x34U)))) {
        vlSymsp->__Vcoverage[11277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x35U)))) {
        vlSymsp->__Vcoverage[11278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x36U)))) {
        vlSymsp->__Vcoverage[11279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x37U)))) {
        vlSymsp->__Vcoverage[11280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x38U)))) {
        vlSymsp->__Vcoverage[11281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x39U)))) {
        vlSymsp->__Vcoverage[11282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3aU)))) {
        vlSymsp->__Vcoverage[11283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3bU)))) {
        vlSymsp->__Vcoverage[11284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3cU)))) {
        vlSymsp->__Vcoverage[11285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3dU)))) {
        vlSymsp->__Vcoverage[11286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3eU)))) {
        vlSymsp->__Vcoverage[11287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x3fU)))) {
        vlSymsp->__Vcoverage[11288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x40U)))) {
        vlSymsp->__Vcoverage[11289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x41U)))) {
        vlSymsp->__Vcoverage[11290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x42U)))) {
        vlSymsp->__Vcoverage[11291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x43U)))) {
        vlSymsp->__Vcoverage[11292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x44U)))) {
        vlSymsp->__Vcoverage[11293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x45U)))) {
        vlSymsp->__Vcoverage[11294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x46U)))) {
        vlSymsp->__Vcoverage[11295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x47U)))) {
        vlSymsp->__Vcoverage[11296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x48U)))) {
        vlSymsp->__Vcoverage[11297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x49U)))) {
        vlSymsp->__Vcoverage[11298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4aU)))) {
        vlSymsp->__Vcoverage[11299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4bU)))) {
        vlSymsp->__Vcoverage[11300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__out, 0x4cU)))) {
        vlSymsp->__Vcoverage[11301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__out, 0x4cU)));
    }
}
