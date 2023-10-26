// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_EnReg__P2f.h"
#include "Vtop_vc_Mux2__P2f.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    vlSelf->__PVT__qstore = vlSelf->__PVT__qstore_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 1U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 2U)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 3U)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 4U)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 5U)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 6U)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 7U)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 8U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 9U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xaU)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xbU)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xcU)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xdU)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xeU)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xfU)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x10U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x11U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x12U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x13U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x14U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x15U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x16U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x17U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x18U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x19U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1aU)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1bU)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1cU)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1dU)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1eU)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1fU)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x20U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x21U)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x22U)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x23U)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x24U)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x25U)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x26U)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x27U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x28U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x29U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2aU)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2bU)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2cU)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2dU)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2eU)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2eU)));
    }
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__in0 
        = vlSelf->__PVT__qstore;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[6480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[6481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[6482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[6483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[6484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[6485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[6486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[6487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[6488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[6489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2eU)));
    }
    vlSelf->__PVT__qstore_reg->__PVT__d = vlSelf->__PVT__enq_msg;
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__in1 
        = vlSelf->__PVT__enq_msg;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    vlSelf->__PVT__qstore = vlSelf->__PVT__qstore_reg->__PVT__q;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 1U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 2U)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 3U)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 4U)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 5U)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 6U)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 7U)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 8U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 9U)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xaU)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xbU)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xcU)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xdU)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xeU)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0xfU)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x10U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x11U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x12U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x13U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x14U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x15U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x16U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x17U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x18U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x19U)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1aU)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1bU)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1cU)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1dU)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1eU)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x1fU)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x20U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x21U)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x22U)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x23U)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x24U)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x25U)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x26U)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x27U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x28U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x29U)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2aU)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2bU)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2cU)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2dU)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__qstore, 0x2eU)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__qstore, 0x2eU)));
    }
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__in0 
        = vlSelf->__PVT__qstore;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___nba_comb__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[6480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[6481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[6482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[6483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[6484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[6485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[6486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[6487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[6488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[6489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[6512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[6513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[6514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[6515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[6516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[6517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[6518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[6519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[6520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[6521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[6522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[6523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[6524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[6525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[6526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__enq_msg, 0x2eU)));
    }
    vlSelf->__PVT__qstore_reg->__PVT__d = vlSelf->__PVT__enq_msg;
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__in1 
        = vlSelf->__PVT__enq_msg;
}
