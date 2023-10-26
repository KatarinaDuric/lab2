// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Queue__Pz1_PB20_PC1.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_sequent__TOP__top__DUT__proc2mngr_queue__0(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_sequent__TOP__top__DUT__proc2mngr_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[5055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSelf->__PVT__num_free_entries = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__num_free_entries;
    vlSelf->__PVT__enq_rdy = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_rdy;
    vlSelf->__PVT__genblk1__DOT__bypass_mux_sel = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__bypass_mux_sel;
    if (((IData)(vlSelf->__PVT__num_free_entries) ^ (IData)(vlSelf->__Vtogcov__num_free_entries))) {
        vlSymsp->__Vcoverage[5124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__num_free_entries = vlSelf->__PVT__num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__enq_rdy) ^ (IData)(vlSelf->__Vtogcov__enq_rdy))) {
        vlSymsp->__Vcoverage[5057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_rdy = vlSelf->__PVT__enq_rdy;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__bypass_mux_sel 
        = vlSelf->__PVT__genblk1__DOT__bypass_mux_sel;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_sequent__TOP__top__DUT__proc2mngr_queue__1(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_sequent__TOP__top__DUT__proc2mngr_queue__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[5054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__0(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[5058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[5059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[5060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[5061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[5062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[5063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[5064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[5065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[5066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[5067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__enq_msg 
        = vlSelf->__PVT__enq_msg;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__1(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__1\n"); );
    // Body
    vlSelf->__PVT__deq_val = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__deq_val) ^ (IData)(vlSelf->__Vtogcov__deq_val))) {
        vlSymsp->__Vcoverage[5090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_val = vlSelf->__PVT__deq_val;
    }
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__2(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__2\n"); );
    // Body
    vlSelf->__PVT__deq_msg = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__deq_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[5092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[5093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[5094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[5095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[5096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[5097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[5098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[5099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[5100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[5101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__3(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__deq_rdy) ^ (IData)(vlSelf->__Vtogcov__deq_rdy))) {
        vlSymsp->__Vcoverage[5091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__deq_rdy = vlSelf->__PVT__deq_rdy;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__deq_rdy 
        = vlSelf->__PVT__deq_rdy;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__4(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___stl_comb__TOP__top__DUT__proc2mngr_queue__4\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__write_en = vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__ctrl.__PVT__write_en;
    vlSymsp->TOP__top__DUT__proc2mngr_queue__genblk1__DOT__dpath.__PVT__write_en 
        = vlSelf->__PVT__genblk1__DOT__write_en;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB20_PC1___configure_coverage(Vtop_vc_Queue__Pz1_PB20_PC1* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB20_PC1___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5054]), first, "../vc/queues.v", 394, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5055]), first, "../vc/queues.v", 395, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5056]), first, "../vc/queues.v", 397, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5057]), first, "../vc/queues.v", 398, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5058]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5059]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5060]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5061]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5062]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5063]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5064]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5065]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5066]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5067]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5068]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5069]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5070]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5071]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5072]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5073]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5074]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5075]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5076]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5077]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5078]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5079]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5080]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5081]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5082]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5083]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5084]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5085]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5086]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5087]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5088]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5089]), first, "../vc/queues.v", 399, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "enq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5090]), first, "../vc/queues.v", 401, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5091]), first, "../vc/queues.v", 402, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5092]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5093]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5094]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5095]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5096]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5097]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5098]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5099]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5100]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5101]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5102]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5103]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5104]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5105]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5106]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5107]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5108]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5109]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5110]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5111]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5112]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5113]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5114]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5115]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5116]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5117]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5118]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5119]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5120]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5121]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5122]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5123]), first, "../vc/queues.v", 403, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "deq_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5124]), first, "../vc/queues.v", 405, 34, "", "v_toggle/vc_Queue__Pz1_PB20_PC1", "num_free_entries[0]", "");
}
