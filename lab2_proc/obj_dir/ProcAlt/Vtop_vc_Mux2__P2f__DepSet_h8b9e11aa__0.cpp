// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P2f.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[11779].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[11780].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[11778].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11781].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[11636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[11637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[11638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[11639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[11640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[11641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[11642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[11643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[11644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[11645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[11646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[11647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[11648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[11649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[11650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[11651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[11652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[11653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[11654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[11655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[11656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[11657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[11658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[11659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[11660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[11661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[11662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[11663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[11664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[11665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[11666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[11667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[11668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[11669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[11670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[11671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[11672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[11673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[11674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[11675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[11676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[11677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[11678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[11679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[11680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[11681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[11682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[11730].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[11683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[11684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[11685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[11686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[11687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[11688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[11689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[11690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[11691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[11692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[11693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[11694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[11695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[11696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[11697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[11698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[11699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[11700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[11701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[11702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[11703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[11704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[11705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[11706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[11707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[11708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[11709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[11710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[11711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[11712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[11713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[11714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[11715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[11716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[11717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[11718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[11719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[11720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[11721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[11722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[11723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[11724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[11725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[11726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[11727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[11728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[11729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[11779].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[11780].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[11778].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[11781].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[11731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[11732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[11733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[11734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[11735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[11736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[11737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[11738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[11739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[11740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[11741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[11742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[11743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[11744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[11745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[11746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[11747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[11748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[11749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[11750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[11751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[11752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[11753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[11754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[11755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[11756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[11757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[11758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[11759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[11760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[11761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[11762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[11763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[11764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[11765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[11766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[11767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[11768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[11769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[11770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[11771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[11772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[11773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[11774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[11775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[11776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[11777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU)));
    }
}
