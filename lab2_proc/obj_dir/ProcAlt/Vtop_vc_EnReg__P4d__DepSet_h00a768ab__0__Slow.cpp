// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P4d.h"

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[11340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[11341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[11342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[11343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[11344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[11345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[11346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[11347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[11348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[11349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[11350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[11351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[11352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[11353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[11354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[11355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[11356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[11357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[11358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[11359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[11360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[11361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[11362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[11363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[11364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[11365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[11366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[11367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[11368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[11369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[11370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[11371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[11372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[11373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[11374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[11375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[11376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[11377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[11378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[11379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[11380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[11381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[11382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[11383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[11384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[11417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[11418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[11419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[11420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[11421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[11422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[11423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[11424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[11425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[11426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[11427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[11428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[11429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[11430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[11431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[11432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[11433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[11434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[11435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[11436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[11437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[11438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[11439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[11440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[11441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[11442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[11443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[11444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[11445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[11446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[11447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[11448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[11449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[11450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[11451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[11452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[11453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[11454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[11455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[11456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[11457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[11458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[11459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[11460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[11461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__4(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[11340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[11341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[11342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[11343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[11344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[11345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[11346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[11347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[11348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[11349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[11350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[11351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[11352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[11353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[11354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[11355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[11356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[11357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[11358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[11359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[11360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[11361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[11362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[11363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[11364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[11365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[11366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[11367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[11368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[11369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[11370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[11371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[11372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[11373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[11374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[11375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[11376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[11377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[11378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[11379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[11380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[11381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[11382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[11383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[11384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[11417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[11418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[11419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[11420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[11421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[11422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[11423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[11424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[11425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[11426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[11427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[11428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[11429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[11430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[11431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[11432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[11433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[11434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[11435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[11436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[11437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[11438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[11439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[11440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[11441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[11442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[11443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[11444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[11445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[11446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[11447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[11448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[11449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[11450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[11451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[11452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[11453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[11454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[11455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[11456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[11457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[11458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[11459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[11460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[11461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__4(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0U)))) {
        vlSymsp->__Vcoverage[11308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[11309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[11310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[11311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[11312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[11313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[11314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[11315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[11316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[11317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[11318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[11319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[11320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[11321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[11322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[11323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[11324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[11325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[11326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[11327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[11328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[11329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[11330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[11331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[11332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[11333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[11334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[11335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[11336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[11337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[11338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[11339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[11340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[11341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[11342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[11343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[11344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[11345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[11346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[11347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[11348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[11349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[11350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[11351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[11352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[11353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[11354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[11355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[11356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[11357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[11358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[11359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[11360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[11361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[11362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[11363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[11364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[11365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[11366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[11367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[11368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[11369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[11370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[11371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[11372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[11373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[11374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[11375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[11376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[11377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[11378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[11379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[11380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[11381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[11382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[11383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[11384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[11307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[11306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__3(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[11385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[11386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[11387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[11388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[11389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[11390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[11391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[11392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[11393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[11394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[11395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[11396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[11397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[11398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[11399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[11400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[11401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[11402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[11403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[11404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[11405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[11406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[11407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[11408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[11409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[11410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[11411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[11412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[11413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[11414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[11415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[11416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[11417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[11418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[11419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[11420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[11421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[11422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[11423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[11424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[11425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[11426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[11427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[11428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[11429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[11430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[11431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[11432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[11433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[11434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[11435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[11436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[11437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[11438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[11439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[11440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[11441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[11442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[11443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[11444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[11445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[11446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[11447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[11448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[11449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[11450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[11451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[11452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[11453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[11454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[11455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[11456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[11457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[11458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[11459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[11460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[11461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__4(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[11462].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___configure_coverage(Vtop_vc_EnReg__P4d* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11306]), first, "../vc/regs.v", 61, 30, "", "v_toggle/vc_EnReg__P4d", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11307]), first, "../vc/regs.v", 62, 30, "", "v_toggle/vc_EnReg__P4d", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11308]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11309]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11310]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11311]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11312]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11313]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11314]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11315]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11316]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11317]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11318]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11319]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11320]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11321]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11322]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11323]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11324]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11325]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11326]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11327]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11328]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11329]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11330]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11331]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11332]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11333]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11334]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11335]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11336]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11337]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11338]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11339]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11340]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11341]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11342]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11343]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11344]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11345]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11346]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11347]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11348]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11349]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11350]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11351]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11352]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11353]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11354]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11355]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11356]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11357]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11358]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11359]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11360]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11361]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11362]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11363]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11364]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11365]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11366]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11367]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11368]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11369]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11370]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11371]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11372]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11373]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11374]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11375]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11376]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11377]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11378]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11379]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11380]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11381]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11382]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11383]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11384]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11385]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11386]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11387]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11388]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11389]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11390]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11391]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11392]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11393]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11394]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11395]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11396]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11397]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11398]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11399]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11400]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11401]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11402]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11403]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11404]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11405]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11406]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11407]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11408]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11409]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11410]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11411]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11412]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11413]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11414]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11415]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11416]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11417]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11418]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11419]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11420]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11421]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11422]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11423]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11424]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11425]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11426]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11427]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11428]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11429]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11430]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11431]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11432]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11433]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11434]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11435]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11436]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11437]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11438]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11439]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11440]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11441]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11442]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11443]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11444]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11445]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11446]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11447]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11448]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11449]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11450]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11451]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11452]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11453]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11454]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11455]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11456]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11457]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11458]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11459]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11460]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11461]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11462]), first, "../vc/regs.v", 65, 30, "", "v_toggle/vc_EnReg__P4d", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11463]), first, "../vc/regs.v", 69, 5, "", "v_branch/vc_EnReg__P4d", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11464]), first, "../vc/regs.v", 69, 6, "", "v_branch/vc_EnReg__P4d", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11465]), first, "../vc/regs.v", 68, 3, "", "v_line/vc_EnReg__P4d", "block", "68");
}
