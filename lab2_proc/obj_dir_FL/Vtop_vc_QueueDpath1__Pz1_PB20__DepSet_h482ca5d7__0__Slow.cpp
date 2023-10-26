// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB20.h"

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    vlSelf->__PVT__qstore = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0U)))) {
        vlSymsp->__Vcoverage[6192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 1U)))) {
        vlSymsp->__Vcoverage[6193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 2U)))) {
        vlSymsp->__Vcoverage[6194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 3U)))) {
        vlSymsp->__Vcoverage[6195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 4U)))) {
        vlSymsp->__Vcoverage[6196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 5U)))) {
        vlSymsp->__Vcoverage[6197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 6U)))) {
        vlSymsp->__Vcoverage[6198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 7U)))) {
        vlSymsp->__Vcoverage[6199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 8U)))) {
        vlSymsp->__Vcoverage[6200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 9U)))) {
        vlSymsp->__Vcoverage[6201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xaU)))) {
        vlSymsp->__Vcoverage[6202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xbU)))) {
        vlSymsp->__Vcoverage[6203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xcU)))) {
        vlSymsp->__Vcoverage[6204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xdU)))) {
        vlSymsp->__Vcoverage[6205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xeU)))) {
        vlSymsp->__Vcoverage[6206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0xfU)))) {
        vlSymsp->__Vcoverage[6207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x10U)))) {
        vlSymsp->__Vcoverage[6208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x11U)))) {
        vlSymsp->__Vcoverage[6209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x12U)))) {
        vlSymsp->__Vcoverage[6210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x13U)))) {
        vlSymsp->__Vcoverage[6211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x14U)))) {
        vlSymsp->__Vcoverage[6212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x15U)))) {
        vlSymsp->__Vcoverage[6213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x16U)))) {
        vlSymsp->__Vcoverage[6214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x17U)))) {
        vlSymsp->__Vcoverage[6215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x18U)))) {
        vlSymsp->__Vcoverage[6216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x19U)))) {
        vlSymsp->__Vcoverage[6217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1aU)))) {
        vlSymsp->__Vcoverage[6218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1bU)))) {
        vlSymsp->__Vcoverage[6219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1cU)))) {
        vlSymsp->__Vcoverage[6220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1dU)))) {
        vlSymsp->__Vcoverage[6221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1eU)))) {
        vlSymsp->__Vcoverage[6222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__qstore, 0x1fU)))) {
        vlSymsp->__Vcoverage[6223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__qstore, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__qstore, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0 
        = vlSelf->__PVT__qstore;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[6127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel 
        = vlSelf->__PVT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_sequent__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[6128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[6129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[6130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[6131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[6132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[6133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[6134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[6135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[6136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[6137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__d 
        = vlSelf->__PVT__enq_msg;
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1 
        = vlSelf->__PVT__enq_msg;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    vlSelf->__PVT__deq_msg = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[6160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[6161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[6162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[6163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[6164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[6165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[6166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[6167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[6168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[6169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[6170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[6171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[6172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[6173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[6174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[6175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[6176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[6177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[6178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[6179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[6180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[6181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[6182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[6183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[6184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[6185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[6186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[6187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[6188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[6189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[6190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[6191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___stl_comb__TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[6126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath__qstore_reg.__PVT__en 
        = vlSelf->__PVT__write_en;
}

VL_ATTR_COLD void Vtop_vc_QueueDpath1__Pz1_PB20___configure_coverage(Vtop_vc_QueueDpath1__Pz1_PB20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath1__Pz1_PB20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6124]), first, "../vc/queues.v", 124, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6125]), first, "../vc/queues.v", 125, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6126]), first, "../vc/queues.v", 126, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "write_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6127]), first, "../vc/queues.v", 127, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "bypass_mux_sel", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6128]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6129]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6130]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6131]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6132]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6133]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6134]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6135]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6136]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6137]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6138]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6139]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6140]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6141]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6142]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6143]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6144]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6145]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6146]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6147]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6148]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6149]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6150]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6151]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6152]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6153]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6154]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6155]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6156]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6157]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6158]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6159]), first, "../vc/queues.v", 128, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6160]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6161]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6162]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6163]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6164]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6165]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6166]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6167]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6168]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6169]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6170]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6171]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6172]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6173]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6174]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6175]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6176]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6177]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6178]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6179]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6180]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6181]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6182]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6183]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6184]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6185]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6186]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6187]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6188]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6189]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6190]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6191]), first, "../vc/queues.v", 129, 34, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6192]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6193]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6194]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6195]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6196]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6197]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6198]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6199]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6200]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6201]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6202]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6203]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6204]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6205]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6206]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6207]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6208]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6209]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6210]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6211]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6212]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6213]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6214]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6215]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6216]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6217]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6218]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6219]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6220]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6221]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6222]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6223]), first, "../vc/queues.v", 134, 27, "", "v_toggle/vc_QueueDpath1__Pz1_PB20", "qstore[31]", "");
}
