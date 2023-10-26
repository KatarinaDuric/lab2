// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P2f.h"

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[7222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[7223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[7224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[7225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[7226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[7227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[7228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[7229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[7230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[7231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[7232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[7233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[7234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[7235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[7236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[7269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[7270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[7271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[7272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[7273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[7274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[7275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[7276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[7277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[7278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[7279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[7280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[7281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[7282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[7283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[7190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[7191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[7192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[7193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[7194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[7195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[7196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[7197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[7198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[7199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[7200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[7201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[7202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[7203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[7204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[7205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[7206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[7207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[7208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[7209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[7210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[7211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[7212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[7213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[7214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[7215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[7216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[7217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[7218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[7219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[7220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[7221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[7222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[7223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[7224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[7225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[7226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[7227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[7228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[7229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[7230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[7231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[7232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[7233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[7234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[7235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[7236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__q, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[7189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[7188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[7237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[7238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[7239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[7240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[7241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[7242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[7243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[7244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[7245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[7246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[7247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[7248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[7249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[7250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[7251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[7252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[7253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[7254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[7255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[7256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[7257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[7258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[7259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[7260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[7261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[7262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[7263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[7264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[7265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[7266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[7267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[7268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[7269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[7270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[7271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[7272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[7273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[7274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[7275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[7276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[7277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[7278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[7279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[7280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[7281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[7282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[7283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__d, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___stl_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___stl_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[7284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P2f___configure_coverage(Vtop_vc_EnReg__P2f* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P2f___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7188]), first, "../vc/regs.v", 61, 30, "", "v_toggle/vc_EnReg__P2f", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7189]), first, "../vc/regs.v", 62, 30, "", "v_toggle/vc_EnReg__P2f", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7190]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7191]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7192]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7193]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7194]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7195]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7196]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7197]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7198]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7199]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7200]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7201]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7202]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7203]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7204]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7205]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7206]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7207]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7208]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7209]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7210]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7211]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7212]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7213]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7214]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7215]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7216]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7217]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7218]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7219]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7220]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7221]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7222]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7223]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7224]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7225]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7226]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7227]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7228]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7229]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7230]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7231]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7232]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7233]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7234]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7235]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7236]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P2f", "q[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7237]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7238]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7239]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7240]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7241]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7242]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7243]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7244]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7245]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7246]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7247]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7248]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7249]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7250]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7251]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7252]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7253]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7254]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7255]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7256]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7257]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7258]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7259]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7260]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7261]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7262]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7263]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7264]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7265]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7266]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7267]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7268]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7269]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7270]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7271]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7272]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7273]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7274]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7275]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7276]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7277]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7278]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7279]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7280]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7281]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7282]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7283]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P2f", "d[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7284]), first, "../vc/regs.v", 65, 30, "", "v_toggle/vc_EnReg__P2f", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7285]), first, "../vc/regs.v", 69, 5, "", "v_branch/vc_EnReg__P2f", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7286]), first, "../vc/regs.v", 69, 6, "", "v_branch/vc_EnReg__P2f", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7287]), first, "../vc/regs.v", 68, 3, "", "v_line/vc_EnReg__P2f", "block", "68");
}
