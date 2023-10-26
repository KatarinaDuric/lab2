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
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_comb__TOP__top__DUT__dmem_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq0_queue__genblk1__DOT__dpath__qstore_reg__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 1U)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 2U)))) {
        vlSymsp->__Vcoverage[6637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 3U)))) {
        vlSymsp->__Vcoverage[6638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 4U)))) {
        vlSymsp->__Vcoverage[6639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 5U)))) {
        vlSymsp->__Vcoverage[6640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 6U)))) {
        vlSymsp->__Vcoverage[6641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 7U)))) {
        vlSymsp->__Vcoverage[6642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 8U)))) {
        vlSymsp->__Vcoverage[6643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 9U)))) {
        vlSymsp->__Vcoverage[6644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__q, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xaU)))) {
        vlSymsp->__Vcoverage[6645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xbU)))) {
        vlSymsp->__Vcoverage[6646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xcU)))) {
        vlSymsp->__Vcoverage[6647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xdU)))) {
        vlSymsp->__Vcoverage[6648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xeU)))) {
        vlSymsp->__Vcoverage[6649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0xfU)))) {
        vlSymsp->__Vcoverage[6650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x10U)))) {
        vlSymsp->__Vcoverage[6651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x11U)))) {
        vlSymsp->__Vcoverage[6652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x12U)))) {
        vlSymsp->__Vcoverage[6653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x13U)))) {
        vlSymsp->__Vcoverage[6654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x14U)))) {
        vlSymsp->__Vcoverage[6655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x15U)))) {
        vlSymsp->__Vcoverage[6656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x16U)))) {
        vlSymsp->__Vcoverage[6657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x17U)))) {
        vlSymsp->__Vcoverage[6658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x18U)))) {
        vlSymsp->__Vcoverage[6659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x19U)))) {
        vlSymsp->__Vcoverage[6660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1aU)))) {
        vlSymsp->__Vcoverage[6661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1bU)))) {
        vlSymsp->__Vcoverage[6662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1cU)))) {
        vlSymsp->__Vcoverage[6663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1dU)))) {
        vlSymsp->__Vcoverage[6664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1eU)))) {
        vlSymsp->__Vcoverage[6665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x1fU)))) {
        vlSymsp->__Vcoverage[6666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x20U)))) {
        vlSymsp->__Vcoverage[6667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x21U)))) {
        vlSymsp->__Vcoverage[6668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x22U)))) {
        vlSymsp->__Vcoverage[6669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x23U)))) {
        vlSymsp->__Vcoverage[6670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x24U)))) {
        vlSymsp->__Vcoverage[6671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x25U)))) {
        vlSymsp->__Vcoverage[6672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x26U)))) {
        vlSymsp->__Vcoverage[6673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x27U)))) {
        vlSymsp->__Vcoverage[6674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x28U)))) {
        vlSymsp->__Vcoverage[6675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x29U)))) {
        vlSymsp->__Vcoverage[6676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2aU)))) {
        vlSymsp->__Vcoverage[6677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2bU)))) {
        vlSymsp->__Vcoverage[6678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2cU)))) {
        vlSymsp->__Vcoverage[6679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2dU)))) {
        vlSymsp->__Vcoverage[6680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2eU)))) {
        vlSymsp->__Vcoverage[6681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x2fU)))) {
        vlSymsp->__Vcoverage[6682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x30U)))) {
        vlSymsp->__Vcoverage[6683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x31U)))) {
        vlSymsp->__Vcoverage[6684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x32U)))) {
        vlSymsp->__Vcoverage[6685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x33U)))) {
        vlSymsp->__Vcoverage[6686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x34U)))) {
        vlSymsp->__Vcoverage[6687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x35U)))) {
        vlSymsp->__Vcoverage[6688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x36U)))) {
        vlSymsp->__Vcoverage[6689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x37U)))) {
        vlSymsp->__Vcoverage[6690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x38U)))) {
        vlSymsp->__Vcoverage[6691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x39U)))) {
        vlSymsp->__Vcoverage[6692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3aU)))) {
        vlSymsp->__Vcoverage[6693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3bU)))) {
        vlSymsp->__Vcoverage[6694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3cU)))) {
        vlSymsp->__Vcoverage[6695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3dU)))) {
        vlSymsp->__Vcoverage[6696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3eU)))) {
        vlSymsp->__Vcoverage[6697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x3fU)))) {
        vlSymsp->__Vcoverage[6698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x40U)))) {
        vlSymsp->__Vcoverage[6699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x41U)))) {
        vlSymsp->__Vcoverage[6700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x42U)))) {
        vlSymsp->__Vcoverage[6701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x43U)))) {
        vlSymsp->__Vcoverage[6702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x44U)))) {
        vlSymsp->__Vcoverage[6703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x45U)))) {
        vlSymsp->__Vcoverage[6704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x46U)))) {
        vlSymsp->__Vcoverage[6705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x47U)))) {
        vlSymsp->__Vcoverage[6706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x48U)))) {
        vlSymsp->__Vcoverage[6707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x49U)))) {
        vlSymsp->__Vcoverage[6708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4aU)))) {
        vlSymsp->__Vcoverage[6709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4bU)))) {
        vlSymsp->__Vcoverage[6710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__q, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__q, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__q, 0x4cU)))) {
        vlSymsp->__Vcoverage[6711].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__2(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_sequent__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0(Vtop_vc_EnReg__P4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___stl_comb__TOP__top__mem__mem__memreq1_queue__genblk1__DOT__dpath__qstore_reg__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0U)))) {
        vlSymsp->__Vcoverage[6712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 1U)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 2U)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 3U)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 4U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 5U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 6U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 7U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 8U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 9U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__d, (1U 
                                                   & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xaU)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xbU)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xcU)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xdU)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xeU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0xfU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x10U)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x11U)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x12U)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x13U)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x14U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x15U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x16U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x17U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x18U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x19U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1aU)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1bU)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1cU)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1dU)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1eU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x1fU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x20U)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x21U)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x22U)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x23U)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x24U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x25U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x26U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x27U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x28U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x29U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2aU)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2bU)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2cU)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2dU)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2eU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x2fU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x30U)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x31U)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x32U)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x33U)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x34U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x35U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x36U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x37U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x38U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x39U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3aU)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3bU)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3cU)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3dU)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3eU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x3fU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x40U)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x41U)))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x42U)))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x43U)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x44U)))) {
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x45U)))) {
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x46U)))) {
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x47U)))) {
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x48U)))) {
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x49U)))) {
        vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4aU)))) {
        vlSymsp->__Vcoverage[6786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4bU)))) {
        vlSymsp->__Vcoverage[6787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__d, 0x4cU)))) {
        vlSymsp->__Vcoverage[6788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__d, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__d, 0x4cU)));
    }
    if (((IData)(vlSelf->__PVT__en) ^ (IData)(vlSelf->__Vtogcov__en))) {
        vlSymsp->__Vcoverage[6789].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__en = vlSelf->__PVT__en;
    }
}

VL_ATTR_COLD void Vtop_vc_EnReg__P4d___configure_coverage(Vtop_vc_EnReg__P4d* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtop_vc_EnReg__P4d___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6633]), first, "../vc/regs.v", 61, 30, "", "v_toggle/vc_EnReg__P4d", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6634]), first, "../vc/regs.v", 62, 30, "", "v_toggle/vc_EnReg__P4d", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6635]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6636]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6637]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6638]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6639]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6640]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6641]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6642]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6643]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6644]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6645]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6646]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6647]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6648]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6649]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6650]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6651]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6652]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6653]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6654]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6655]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6656]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6657]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6658]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6659]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6660]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6661]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6662]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6663]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6664]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6665]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6666]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6667]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6668]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6669]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6670]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6671]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6672]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6673]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6674]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6675]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6676]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6677]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6678]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6679]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6680]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6681]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6682]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6683]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6684]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6685]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6686]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6687]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6688]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6689]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6690]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6691]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6692]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6693]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6694]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6695]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6696]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6697]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6698]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6699]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6700]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6701]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6702]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6703]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6704]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6705]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6706]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6707]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6708]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6709]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6710]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6711]), first, "../vc/regs.v", 63, 30, "", "v_toggle/vc_EnReg__P4d", "q[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6712]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6713]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6714]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6715]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6716]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6717]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6718]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6719]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6720]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6721]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6722]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6723]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6724]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6725]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6726]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6727]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6728]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6729]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6730]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6731]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6732]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6733]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6734]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6735]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6736]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6737]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6738]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6739]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6740]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6741]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6742]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6743]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6744]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6745]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6746]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6747]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6748]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6749]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6750]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6751]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6752]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6753]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6754]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6755]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6756]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6757]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6758]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6759]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6760]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6761]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6762]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6763]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6764]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6765]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6766]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6767]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6768]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6769]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6770]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6771]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6772]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6773]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6774]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6775]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6776]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6777]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6778]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6779]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6780]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6781]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6782]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6783]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6784]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6785]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6786]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6787]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6788]), first, "../vc/regs.v", 64, 30, "", "v_toggle/vc_EnReg__P4d", "d[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6789]), first, "../vc/regs.v", 65, 30, "", "v_toggle/vc_EnReg__P4d", "en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6790]), first, "../vc/regs.v", 69, 5, "", "v_branch/vc_EnReg__P4d", "if", "69-70");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6791]), first, "../vc/regs.v", 69, 6, "", "v_branch/vc_EnReg__P4d", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6792]), first, "../vc/regs.v", 68, 3, "", "v_line/vc_EnReg__P4d", "block", "68");
}
