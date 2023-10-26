// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux2__P2f.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[10088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__sel 
        = vlSelf->__PVT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__5(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp0_queue__genblk1__DOT__dpath__5\n"); );
    // Body
    vlSelf->__PVT__deq_msg = vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__out;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[10136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[10137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[10138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[10139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[10140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[10141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[10142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[10143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[10144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[10145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[10146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[10147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[10148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[10149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[10150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[10151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[10152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[10153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[10154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[10155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[10156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[10157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[10158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[10159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[10160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[10161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[10162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[10163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[10164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[10165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[10166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[10167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[10168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[10169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[10170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[10171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[10172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[10173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[10174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[10175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[10176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[10177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[10178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[10179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[10180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[10181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[10182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2eU)));
    }
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[10088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__sel 
        = vlSelf->__PVT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__5(Vtop_vc_QueueDpath1__Pz1_PB2f* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB2f___stl_sequent__TOP__top__mem__mem__memresp1_queue__genblk1__DOT__dpath__5\n"); );
    // Body
    vlSelf->__PVT__deq_msg = vlSelf->__PVT__genblk1__DOT__bypass_mux->__PVT__out;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[10136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[10137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[10138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[10139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[10140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[10141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[10142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[10143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[10144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[10145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[10146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[10147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[10148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[10149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[10150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[10151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[10152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[10153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[10154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[10155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[10156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[10157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[10158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[10159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[10160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[10161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[10162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[10163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[10164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[10165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[10166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[10167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[10168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[10169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[10170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[10171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[10172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[10173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[10174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[10175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[10176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[10177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[10178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[10179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[10180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[10181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__deq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[10182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__deq_msg, 0x2eU)));
    }
}
