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
        vlSymsp->__Vcoverage[7300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[7332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[7333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[7334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[7335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[7336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[7337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[7338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[7339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[7340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[7341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[7342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[7343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[7344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[7345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[7346].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7394].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[7379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[7380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[7381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[7382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[7383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[7384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[7385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[7386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[7387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[7388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[7389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[7390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[7391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[7392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[7393].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[7443].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[7444].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7442].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7445].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[7427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[7428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[7429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[7430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[7431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[7432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[7433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[7434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[7435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[7436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[7437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[7438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[7439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[7440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[7441].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x20U)))) {
        vlSymsp->__Vcoverage[7332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x21U)))) {
        vlSymsp->__Vcoverage[7333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x22U)))) {
        vlSymsp->__Vcoverage[7334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x23U)))) {
        vlSymsp->__Vcoverage[7335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x24U)))) {
        vlSymsp->__Vcoverage[7336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x25U)))) {
        vlSymsp->__Vcoverage[7337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x26U)))) {
        vlSymsp->__Vcoverage[7338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x27U)))) {
        vlSymsp->__Vcoverage[7339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x28U)))) {
        vlSymsp->__Vcoverage[7340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x29U)))) {
        vlSymsp->__Vcoverage[7341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2aU)))) {
        vlSymsp->__Vcoverage[7342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2bU)))) {
        vlSymsp->__Vcoverage[7343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2cU)))) {
        vlSymsp->__Vcoverage[7344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2dU)))) {
        vlSymsp->__Vcoverage[7345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in0, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in0, 0x2eU)))) {
        vlSymsp->__Vcoverage[7346].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7394].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x20U)))) {
        vlSymsp->__Vcoverage[7379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x21U)))) {
        vlSymsp->__Vcoverage[7380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x22U)))) {
        vlSymsp->__Vcoverage[7381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x23U)))) {
        vlSymsp->__Vcoverage[7382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x24U)))) {
        vlSymsp->__Vcoverage[7383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x25U)))) {
        vlSymsp->__Vcoverage[7384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x26U)))) {
        vlSymsp->__Vcoverage[7385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x27U)))) {
        vlSymsp->__Vcoverage[7386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x28U)))) {
        vlSymsp->__Vcoverage[7387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x29U)))) {
        vlSymsp->__Vcoverage[7388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2aU)))) {
        vlSymsp->__Vcoverage[7389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2bU)))) {
        vlSymsp->__Vcoverage[7390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2cU)))) {
        vlSymsp->__Vcoverage[7391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2dU)))) {
        vlSymsp->__Vcoverage[7392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__in1, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__in1, 0x2eU)))) {
        vlSymsp->__Vcoverage[7393].fetch_add(1, std::memory_order_relaxed);
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
            vlSymsp->__Vcoverage[7443].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0ULL;
            vlSymsp->__Vcoverage[7444].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7442].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7445].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x20U)))) {
        vlSymsp->__Vcoverage[7427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x21U)))) {
        vlSymsp->__Vcoverage[7428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x22U)))) {
        vlSymsp->__Vcoverage[7429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x23U)))) {
        vlSymsp->__Vcoverage[7430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x24U)))) {
        vlSymsp->__Vcoverage[7431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x25U)))) {
        vlSymsp->__Vcoverage[7432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x26U)))) {
        vlSymsp->__Vcoverage[7433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x27U)))) {
        vlSymsp->__Vcoverage[7434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x28U)))) {
        vlSymsp->__Vcoverage[7435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x29U)))) {
        vlSymsp->__Vcoverage[7436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2aU)))) {
        vlSymsp->__Vcoverage[7437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2bU)))) {
        vlSymsp->__Vcoverage[7438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2cU)))) {
        vlSymsp->__Vcoverage[7439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2dU)))) {
        vlSymsp->__Vcoverage[7440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__out, 0x2eU)))) {
        vlSymsp->__Vcoverage[7441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__out, 0x2eU)));
    }
}
