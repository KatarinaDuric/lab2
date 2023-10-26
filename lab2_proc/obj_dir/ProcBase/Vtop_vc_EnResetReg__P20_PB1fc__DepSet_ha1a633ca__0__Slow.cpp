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
        vlSymsp->__Vcoverage[7493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7492].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__1(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___stl_sequent__TOP__top__DUT__dpath__pc_reg_F__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7491].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7556].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[7557].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20_PB1fc___configure_coverage(Vtop_vc_EnResetReg__P20_PB1fc* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20_PB1fc___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7491]), first, "../vc/regs.v", 95, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7492]), first, "../vc/regs.v", 96, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7493]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7494]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7495]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7496]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7497]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7498]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7499]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7500]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7501]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7502]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7503]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7504]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7505]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7506]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7507]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7508]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7509]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7510]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7511]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7512]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7513]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7514]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7515]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7516]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7517]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7518]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7519]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7520]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7521]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7522]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7523]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7524]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7525]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7526]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7527]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7528]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7529]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7530]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7531]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7532]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7533]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7534]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7535]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7536]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7537]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7538]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7539]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7540]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7541]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7542]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7543]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7544]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7545]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7546]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7547]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7548]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7549]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7550]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7551]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7552]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7553]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7554]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7555]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7556]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7557]), first, "../vc/regs.v", 99, 30, "", "v_toggle/vc_EnResetReg__P20_PB1fc", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7558]), first, "../vc/regs.v", 103, 5, "", "v_branch/vc_EnResetReg__P20_PB1fc", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7559]), first, "../vc/regs.v", 103, 6, "", "v_branch/vc_EnResetReg__P20_PB1fc", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7560]), first, "../vc/regs.v", 102, 3, "", "v_line/vc_EnResetReg__P20_PB1fc", "block", "102");
}
