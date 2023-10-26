// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnResetReg__P20.h"

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__1(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__2(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__3(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_req_delay1__rand_delay_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__1(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__2(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__3(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay0__rand_delay_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__q, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__1(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7608].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__2(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7607].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__3(Vtop_vc_EnResetReg__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___stl_sequent__TOP__top__mem__rand_resp_delay1__rand_delay_reg__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7673].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__d, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnResetReg__P20___configure_coverage(Vtop_vc_EnResetReg__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_EnResetReg__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7607]), first, "../vc/regs.v", 95, 30, "", "v_toggle/vc_EnResetReg__P20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7608]), first, "../vc/regs.v", 96, 30, "", "v_toggle/vc_EnResetReg__P20", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7609]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7610]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7611]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7612]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7613]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7614]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7615]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7616]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7617]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7618]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7619]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7620]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7621]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7622]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7623]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7624]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7625]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7626]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7627]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7628]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7629]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7630]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7631]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7632]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7633]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7634]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7635]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7636]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7637]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7638]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7639]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7640]), first, "../vc/regs.v", 97, 30, "", "v_toggle/vc_EnResetReg__P20", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7641]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7642]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7643]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7644]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7645]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7646]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7647]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7648]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7649]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7650]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7651]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7652]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7653]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7654]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7655]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7656]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7657]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7658]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7659]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7660]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7661]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7662]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7663]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7664]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7665]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7666]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7667]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7668]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7669]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7670]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7671]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7672]), first, "../vc/regs.v", 98, 30, "", "v_toggle/vc_EnResetReg__P20", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7673]), first, "../vc/regs.v", 99, 30, "", "v_toggle/vc_EnResetReg__P20", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7674]), first, "../vc/regs.v", 103, 5, "", "v_branch/vc_EnResetReg__P20", "if", "103-104");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7675]), first, "../vc/regs.v", 103, 6, "", "v_branch/vc_EnResetReg__P20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7676]), first, "../vc/regs.v", 102, 3, "", "v_line/vc_EnResetReg__P20", "block", "102");
}
