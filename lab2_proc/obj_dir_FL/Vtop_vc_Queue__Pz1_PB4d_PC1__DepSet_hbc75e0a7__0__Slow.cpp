// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Queue__Pz1_PB4d_PC1.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_sequent__TOP__top__DUT__dmem_queue__0(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_sequent__TOP__top__DUT__dmem_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__num_free_entries = vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[4896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_sequent__TOP__top__DUT__dmem_queue__1(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_sequent__TOP__top__DUT__dmem_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__0(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[4895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[4897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[4898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[4899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[4929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[4930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[4931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[4932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[4933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[4934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[4935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[4936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[4937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[4938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[4939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[4940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[4941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[4942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[4943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[4944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[4945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[4946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[4947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[4948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[4949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[4950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[4951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[4952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[4953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[4954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[4955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[4956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[4957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[4958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[4959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[4960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[4961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[4962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[4963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[4964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[4965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[4966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[4967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[4968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[4969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[4970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[4971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[4972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[4973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__enq_msg, vlSelf->__PVT__enq_msg);
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__1(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__1\n"); );
    // Body
    vlSelf->__PVT__deq_val = vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[4974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__2(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__2\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__deq_msg, vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__deq_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[4976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[4977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[4978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[4979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[4980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[4981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[4982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[4983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[4984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[4985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[5023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[5024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[5025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[5026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[5027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[5028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[5029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[5030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[5031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[5032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[5033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[5034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[5035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[5036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[5037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[5038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[5039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[5040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[5041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[5042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[5043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[5044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[5045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[5046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[5047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[5048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[5049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[5050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[5051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[5052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4cU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__3(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[4975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__deq_rdy 
        = vlSelf->__PVT__deq_rdy;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__4(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___stl_comb__TOP__top__DUT__dmem_queue__4\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__write_en = vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__ctrl.__PVT__write_en;
    vlSymsp->TOP__top__DUT__dmem_queue__genblk1__DOT__dpath.__PVT__write_en 
        = vlSelf->__PVT__genblk1__DOT__write_en;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB4d_PC1___configure_coverage(Vtop_vc_Queue__Pz1_PB4d_PC1* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB4d_PC1___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4893]), first, "../vc/queues.v", 394, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4894]), first, "../vc/queues.v", 395, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4895]), first, "../vc/queues.v", 397, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4896]), first, "../vc/queues.v", 398, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4897]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4898]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4899]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4900]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4901]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4902]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4903]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4904]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4905]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4906]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4907]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4908]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4909]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4910]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4911]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4912]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4913]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4914]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4915]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4916]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4917]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4918]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4919]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4920]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4921]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4922]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4923]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4924]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4925]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4926]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4927]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4928]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4929]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4930]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4931]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4932]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4933]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4934]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4935]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4936]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4937]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4938]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4939]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4940]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4941]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4942]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4943]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4944]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4945]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4946]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4947]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4948]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4949]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4950]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4951]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4952]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4953]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4954]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4955]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4956]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4957]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4958]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4959]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4960]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4961]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4962]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4963]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4964]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4965]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4966]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4967]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4968]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4969]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4970]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4971]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4972]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4973]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "enq_msg[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4974]), first, "../vc/queues.v", 401, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4975]), first, "../vc/queues.v", 402, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4976]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4977]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4978]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4979]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4980]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4981]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4982]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4983]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4984]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4985]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4986]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4987]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4988]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4989]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4990]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4991]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4992]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4993]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4994]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4995]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4996]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4997]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4998]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4999]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5000]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5001]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5002]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5003]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5004]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5005]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5006]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5007]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5008]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5009]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5010]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5011]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5012]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5013]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5014]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5015]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5016]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5017]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5018]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5019]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5020]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5021]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5022]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5023]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5024]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5025]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5026]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5027]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5028]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5029]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5030]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5031]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5032]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5033]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5034]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5035]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5036]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5037]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5038]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5039]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5040]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[64]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5041]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[65]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5042]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[66]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5043]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[67]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5044]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[68]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5045]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[69]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5046]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[70]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5047]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[71]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5048]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[72]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5049]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[73]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5050]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[74]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5051]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[75]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5052]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "deq_msg[76]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5053]), first, "../vc/queues.v", 405, 34, "", "v_toggle/vc_Queue__Pz1_PB4d_PC1", "num_free_entries[0]", "");
}
