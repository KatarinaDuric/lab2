// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20_PB1fc.h"

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__0(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7678].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__1(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7677].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__2(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__3(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7743].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___configure_coverage(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7677]), first, "../vc/regs.v", 95, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7678]), first, "../vc/regs.v", 96, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7679]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7680]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7681]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7682]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7683]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7684]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7685]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7686]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7687]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7688]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7689]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7690]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7691]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7692]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7693]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7694]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7695]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7696]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7697]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7698]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7699]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7700]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7701]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7702]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7703]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7704]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7705]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7706]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7707]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7708]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7709]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7710]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7711]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7712]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7713]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7714]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7715]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7716]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7717]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7718]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7719]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7720]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7721]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7722]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7723]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7724]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7725]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7726]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7727]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7728]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7729]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7730]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7731]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7732]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7733]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7734]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7735]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7736]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7737]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7738]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7739]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7740]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7741]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7742]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7743]), first, "../vc/regs.v", 99, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7744]), first, "../vc/regs.v", 103, 5, "", "v_branch/vc_EnResetReg__P20_PB1fc", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7745]), first, "../vc/regs.v", 103, 6, "", "v_branch/vc_EnResetReg__P20_PB1fc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7746]), first, "../vc/regs.v", 102, 3, "", "v_line/vc_EnResetReg__P20_PB1fc", "block", "102");
}
