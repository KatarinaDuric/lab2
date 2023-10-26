// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueDpath__Pz1_PB4d.h"

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___ico_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___act_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___act_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_en 
        = vlSelf->__PVT__write_en;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_addr) ^ (IData)(vlSelf->__Vtogcov__write_addr))) {
        vlSymsp->__Vcoverage[9252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_addr = vlSelf->__PVT__write_addr;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_addr 
        = vlSelf->__PVT__write_addr;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_sequent__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__read_addr) ^ (IData)(vlSelf->__Vtogcov__read_addr))) {
        vlSymsp->__Vcoverage[9253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__read_addr = vlSelf->__PVT__read_addr;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_addr 
        = vlSelf->__PVT__read_addr;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__bypass_mux_sel) ^ (IData)(vlSelf->__Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[9251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_mux_sel = vlSelf->__PVT__bypass_mux_sel;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__sel 
        = vlSelf->__PVT__bypass_mux_sel;
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__1(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__1\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__read_data, vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__read_data);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0U)))) {
        vlSymsp->__Vcoverage[9408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 1U)))) {
        vlSymsp->__Vcoverage[9409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 2U)))) {
        vlSymsp->__Vcoverage[9410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 3U)))) {
        vlSymsp->__Vcoverage[9411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 4U)))) {
        vlSymsp->__Vcoverage[9412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 5U)))) {
        vlSymsp->__Vcoverage[9413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 6U)))) {
        vlSymsp->__Vcoverage[9414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 7U)))) {
        vlSymsp->__Vcoverage[9415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 8U)))) {
        vlSymsp->__Vcoverage[9416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 9U)))) {
        vlSymsp->__Vcoverage[9417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xaU)))) {
        vlSymsp->__Vcoverage[9418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xbU)))) {
        vlSymsp->__Vcoverage[9419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xcU)))) {
        vlSymsp->__Vcoverage[9420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xdU)))) {
        vlSymsp->__Vcoverage[9421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xeU)))) {
        vlSymsp->__Vcoverage[9422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0xfU)))) {
        vlSymsp->__Vcoverage[9423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x10U)))) {
        vlSymsp->__Vcoverage[9424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x11U)))) {
        vlSymsp->__Vcoverage[9425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x12U)))) {
        vlSymsp->__Vcoverage[9426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x13U)))) {
        vlSymsp->__Vcoverage[9427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x14U)))) {
        vlSymsp->__Vcoverage[9428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x15U)))) {
        vlSymsp->__Vcoverage[9429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x16U)))) {
        vlSymsp->__Vcoverage[9430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x17U)))) {
        vlSymsp->__Vcoverage[9431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x18U)))) {
        vlSymsp->__Vcoverage[9432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x19U)))) {
        vlSymsp->__Vcoverage[9433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[9434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[9435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[9436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[9437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[9438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[9439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x20U)))) {
        vlSymsp->__Vcoverage[9440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x21U)))) {
        vlSymsp->__Vcoverage[9441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x22U)))) {
        vlSymsp->__Vcoverage[9442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x23U)))) {
        vlSymsp->__Vcoverage[9443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x24U)))) {
        vlSymsp->__Vcoverage[9444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x25U)))) {
        vlSymsp->__Vcoverage[9445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x26U)))) {
        vlSymsp->__Vcoverage[9446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x27U)))) {
        vlSymsp->__Vcoverage[9447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x28U)))) {
        vlSymsp->__Vcoverage[9448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x29U)))) {
        vlSymsp->__Vcoverage[9449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2aU)))) {
        vlSymsp->__Vcoverage[9450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2bU)))) {
        vlSymsp->__Vcoverage[9451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2cU)))) {
        vlSymsp->__Vcoverage[9452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2dU)))) {
        vlSymsp->__Vcoverage[9453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2eU)))) {
        vlSymsp->__Vcoverage[9454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x2fU)))) {
        vlSymsp->__Vcoverage[9455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x30U)))) {
        vlSymsp->__Vcoverage[9456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x31U)))) {
        vlSymsp->__Vcoverage[9457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x32U)))) {
        vlSymsp->__Vcoverage[9458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x33U)))) {
        vlSymsp->__Vcoverage[9459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x34U)))) {
        vlSymsp->__Vcoverage[9460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x35U)))) {
        vlSymsp->__Vcoverage[9461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x36U)))) {
        vlSymsp->__Vcoverage[9462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x37U)))) {
        vlSymsp->__Vcoverage[9463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x38U)))) {
        vlSymsp->__Vcoverage[9464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x39U)))) {
        vlSymsp->__Vcoverage[9465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3aU)))) {
        vlSymsp->__Vcoverage[9466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3bU)))) {
        vlSymsp->__Vcoverage[9467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3cU)))) {
        vlSymsp->__Vcoverage[9468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3dU)))) {
        vlSymsp->__Vcoverage[9469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3eU)))) {
        vlSymsp->__Vcoverage[9470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x3fU)))) {
        vlSymsp->__Vcoverage[9471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x40U)))) {
        vlSymsp->__Vcoverage[9472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x41U)))) {
        vlSymsp->__Vcoverage[9473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x42U)))) {
        vlSymsp->__Vcoverage[9474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x43U)))) {
        vlSymsp->__Vcoverage[9475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x44U)))) {
        vlSymsp->__Vcoverage[9476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x45U)))) {
        vlSymsp->__Vcoverage[9477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x46U)))) {
        vlSymsp->__Vcoverage[9478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x47U)))) {
        vlSymsp->__Vcoverage[9479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x48U)))) {
        vlSymsp->__Vcoverage[9480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x49U)))) {
        vlSymsp->__Vcoverage[9481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x4aU)))) {
        vlSymsp->__Vcoverage[9482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x4bU)))) {
        vlSymsp->__Vcoverage[9483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__read_data, 0x4cU)))) {
        vlSymsp->__Vcoverage[9484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__read_data, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__read_data, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in0, vlSelf->__PVT__read_data);
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__2(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[9254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[9255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[9256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[9257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[9258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[9259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[9260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[9261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[9262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[9263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[9264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[9265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[9266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[9267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[9268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[9269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[9270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[9271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[9272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[9273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[9274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[9275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[9276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[9277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[9278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[9279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[9286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[9287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[9288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[9289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[9290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[9291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[9292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[9293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[9294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[9295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[9296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[9297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[9298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[9299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[9300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[9301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[9302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[9303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[9304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[9305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[9306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[9307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[9308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[9309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[9310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[9311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[9312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[9313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[9314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[9315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[9316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[9317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[9318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[9319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[9320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[9321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[9322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[9323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[9324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[9325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[9326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[9327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[9328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[9329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[9330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__enq_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_data, vlSelf->__PVT__enq_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__in1, vlSelf->__PVT__enq_msg);
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__3(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__3\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__deq_msg, vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__genblk1__DOT__bypass_mux.__PVT__out);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0U)))) {
        vlSymsp->__Vcoverage[9331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 1U)))) {
        vlSymsp->__Vcoverage[9332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 2U)))) {
        vlSymsp->__Vcoverage[9333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 3U)))) {
        vlSymsp->__Vcoverage[9334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 4U)))) {
        vlSymsp->__Vcoverage[9335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 5U)))) {
        vlSymsp->__Vcoverage[9336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 6U)))) {
        vlSymsp->__Vcoverage[9337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 7U)))) {
        vlSymsp->__Vcoverage[9338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 8U)))) {
        vlSymsp->__Vcoverage[9339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 9U)))) {
        vlSymsp->__Vcoverage[9340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[9341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[9342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[9343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[9344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[9345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[9346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[9347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[9348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[9349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[9350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[9351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[9352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[9353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[9354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[9355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[9356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[9363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[9364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[9365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[9366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[9367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[9368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[9369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[9370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[9371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[9372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[9373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[9374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[9375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[9376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[9377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[9378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[9379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[9380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[9381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[9382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[9383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[9384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[9385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[9386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[9387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[9388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[9389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[9390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[9391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[9392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[9393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[9394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[9395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[9396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[9397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[9398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[9399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[9400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[9401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[9402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[9403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[9404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[9405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[9406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__deq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[9407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__deq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__deq_msg, 0x4cU)));
    }
}

VL_INLINE_OPT void Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__4(Vtop_vc_QueueDpath__Pz1_PB4d* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_QueueDpath__Pz1_PB4d___nba_comb__TOP__top__DUT__imem_queue__genblk1__DOT__dpath__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    vlSymsp->TOP__top__DUT__imem_queue__genblk1__DOT__dpath__qstore.__PVT__write_en 
        = vlSelf->__PVT__write_en;
}
