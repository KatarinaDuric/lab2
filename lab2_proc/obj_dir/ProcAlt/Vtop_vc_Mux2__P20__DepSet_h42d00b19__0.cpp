// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P20.h"

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[10653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[10654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[10655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[10656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[10657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[10658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[10659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[10660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[10661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[10662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[10663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[10664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[10665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[10666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[10667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[10668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[10669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[10670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[10671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[10672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[10673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[10674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[10675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[10676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[10677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[10678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[10679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[10680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[10681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[10682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[10683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[10684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[10685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[10686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[10687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[10688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[10689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[10690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[10691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[10692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[10693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[10694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[10695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[10696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[10697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[10698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[10699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[10700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[10701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[10702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[10703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[10704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[10705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[10706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[10707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[10708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[10709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[10710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[10711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[10712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[10713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[10714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[10715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[10716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[10717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux__0\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[10751].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[10752].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[10750].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[10753].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[10718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[10719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[10720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[10721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[10722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[10723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[10724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[10725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[10726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[10727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[10728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[10729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[10730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[10731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[10732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[10733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[10734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[10735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[10736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[10737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[10738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[10739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[10740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[10741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[10742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[10743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[10744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[10745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[10746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[10747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[10748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[10749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__op1_sel_mux_D__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__op1_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[10685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[10686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[10687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[10688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[10689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[10690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[10691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[10692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[10693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[10694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[10695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[10696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[10697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[10698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[10699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[10700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[10701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[10702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[10703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[10704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[10705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[10706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[10707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[10708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[10709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[10710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[10711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[10712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[10713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[10714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[10715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[10716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__op1_sel_mux_D__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__op1_sel_mux_D__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[10717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__op1_sel_mux_D__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__op1_sel_mux_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[10653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[10654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[10655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[10656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[10657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[10658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[10659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[10660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[10661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[10662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[10663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[10664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[10665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[10666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[10667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[10668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[10669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[10670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[10671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[10672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[10673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[10674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[10675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[10676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[10677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[10678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[10679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[10680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[10681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[10682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[10683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[10684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__op1_sel_mux_D__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__op1_sel_mux_D__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[10751].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[10752].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[10750].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[10753].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[10718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[10719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[10720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[10721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[10722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[10723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[10724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[10725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[10726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[10727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[10728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[10729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[10730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[10731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[10732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[10733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[10734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[10735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[10736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[10737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[10738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[10739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[10740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[10741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[10742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[10743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[10744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[10745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[10746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[10747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[10748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[10749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__wb_result_sel_mux_M__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__wb_result_sel_mux_M__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[10653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[10654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[10655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[10656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[10657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[10658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[10659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[10660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[10661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[10662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[10663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[10664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[10665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[10666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[10667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[10668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[10669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[10670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[10671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[10672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[10673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[10674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[10675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[10676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[10677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[10678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[10679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[10680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[10681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[10682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[10683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[10684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__wb_result_sel_mux_M__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_sequent__TOP__top__DUT__dpath__wb_result_sel_mux_M__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__sel) ^ (IData)(vlSelf->__Vtogcov__sel))) {
        vlSymsp->__Vcoverage[10717].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__sel = vlSelf->__PVT__sel;
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__wb_result_sel_mux_M__0(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__wb_result_sel_mux_M__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[10685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[10686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[10687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[10688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[10689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[10690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[10691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[10692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[10693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[10694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[10695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[10696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[10697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[10698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[10699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[10700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[10701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[10702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[10703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[10704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[10705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[10706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[10707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[10708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[10709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[10710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[10711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[10712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[10713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[10714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[10715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[10716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__wb_result_sel_mux_M__1(Vtop_vc_Mux2__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_Mux2__P20___nba_comb__TOP__top__DUT__dpath__wb_result_sel_mux_M__1\n"); );
    // Body
    if (vlSelf->__PVT__sel) {
        if (vlSelf->__PVT__sel) {
            vlSelf->__PVT__out = vlSelf->__PVT__in1;
            vlSymsp->__Vcoverage[10751].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = 0U;
            vlSymsp->__Vcoverage[10752].fetch_add(1, std::memory_order_relaxed);
        }
    } else {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[10750].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[10753].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[10718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[10719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[10720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[10721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[10722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[10723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[10724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[10725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[10726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[10727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[10728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[10729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[10730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[10731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[10732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[10733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[10734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[10735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[10736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[10737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[10738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[10739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[10740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[10741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[10742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[10743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[10744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[10745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[10746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[10747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[10748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[10749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}
