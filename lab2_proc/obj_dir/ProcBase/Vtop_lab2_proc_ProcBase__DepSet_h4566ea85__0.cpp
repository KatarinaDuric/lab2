// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcBase.h"

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___ico_sequent__TOP__top__DUT__0(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___ico_sequent__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__ctrl.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath.__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__0(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__ctrl.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__1(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__proc2mngr_rdy) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__proc2mngr_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__2(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0U)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 1U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 2U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 3U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 4U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 5U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 6U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 7U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 8U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 9U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__mngr2proc_data 
        = vlSelf->__PVT__mngr2proc_msg;
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_val 
        = vlSelf->__PVT__mngr2proc_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__3(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__3\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_drop_rdy = vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_rdy;
    vlSelf->__PVT__reg_en_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_D;
    vlSelf->__PVT__imul_req_val_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_val_D;
    vlSelf->__PVT__mngr2proc_rdy = vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy;
    vlSelf->__PVT__reg_en_F = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_F;
    if (((IData)(vlSelf->__PVT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->__PVT__imem_respstream_drop_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_rdy 
        = vlSelf->__PVT__imem_respstream_drop_rdy;
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_D = vlSelf->__PVT__reg_en_D;
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_val_D 
        = vlSelf->__PVT__imul_req_val_D;
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_F = vlSelf->__PVT__reg_en_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__4(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_sequent__TOP__top__DUT__4\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_rdy = vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_rdy;
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_respstream_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__0(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__0\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_enq_val = vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_val;
    if (((IData)(vlSelf->__PVT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_enq_val = vlSelf->__PVT__imem_reqstream_enq_val;
    }
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_val 
        = vlSelf->__PVT__imem_reqstream_enq_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__1(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__1\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_val = vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val 
        = vlSelf->__PVT__imem_reqstream_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__2(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___act_comb__TOP__top__DUT__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__0(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__1(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__1\n"); );
    // Body
    vlSelf->__PVT__stats_en = vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en;
    if (((IData)(vlSelf->__PVT__stats_en) ^ (IData)(vlSelf->__Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[737].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en = vlSelf->__PVT__stats_en;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__2(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__2\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_enq_msg = vlSymsp->TOP__top__DUT__dpath.__PVT__proc2mngr_data;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_enq_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_enq_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_msg 
        = vlSelf->__PVT__proc2mngr_enq_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__3(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__3\n"); );
    // Body
    vlSelf->__PVT__dmem_reqstream_enq_msg_data = vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_data;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[1013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[1014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[1015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[1016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[1017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[1018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[1019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[1020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[1021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[1022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[1023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[1024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[1025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[1026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[1027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[1028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[1029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[1030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[1031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[1032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[1033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[1034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[1035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[1036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[1037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_data, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__4(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__4\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_enq_rdy = vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_rdy;
    if (((IData)(vlSelf->__PVT__imem_reqstream_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_enq_rdy))) {
        vlSymsp->__Vcoverage[818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_enq_rdy = vlSelf->__PVT__imem_reqstream_enq_rdy;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_rdy 
        = vlSelf->__PVT__imem_reqstream_enq_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__5(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__5\n"); );
    // Body
    vlSelf->__PVT__rf_waddr_W = vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_waddr_W;
    vlSelf->__PVT__stats_en_wen_W = vlSymsp->TOP__top__DUT__ctrl.__PVT__stats_en_wen_W;
    vlSelf->__PVT__rf_wen_W = vlSymsp->TOP__top__DUT__ctrl.__PVT__rf_wen_W;
    vlSelf->__PVT__wb_result_sel_M = vlSymsp->TOP__top__DUT__ctrl.__PVT__wb_result_sel_M;
    vlSelf->__PVT__alu_fn_X = vlSymsp->TOP__top__DUT__ctrl.__PVT__alu_fn_X;
    vlSelf->__PVT__dmem_reqstream_type_X = vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_type_X;
    vlSelf->__PVT__ex_result_sel_X = vlSymsp->TOP__top__DUT__ctrl.__PVT__ex_result_sel_X;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 0U)))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 1U)))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 2U)))) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 3U)))) {
        vlSymsp->__Vcoverage[1115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 4U)))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__rf_waddr_W 
        = vlSelf->__PVT__rf_waddr_W;
    if (((IData)(vlSelf->__PVT__stats_en_wen_W) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_W = vlSelf->__PVT__stats_en_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__stats_en_wen_W 
        = vlSelf->__PVT__stats_en_wen_W;
    if (((IData)(vlSelf->__PVT__rf_wen_W) ^ (IData)(vlSelf->__Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_W = vlSelf->__PVT__rf_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__rf_wen_W = vlSelf->__PVT__rf_wen_W;
    if (((IData)(vlSelf->__PVT__wb_result_sel_M) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_M;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__wb_result_sel_M 
        = vlSelf->__PVT__wb_result_sel_M;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 0U)))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 1U)))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 2U)))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 3U)))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__alu_fn_X = vlSelf->__PVT__alu_fn_X;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_X), 0U)))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_type_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_X), 1U)))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_type_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 1U)));
    }
    if ((1U == (IData)(vlSelf->__PVT__dmem_reqstream_type_X))) {
        VL_ASSIGNSEL_WI(77,3,0x4aU, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U);
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__dmem_reqstream_type_X))) {
        VL_ASSIGNSEL_WI(77,3,0x4aU, vlSelf->__PVT__dmem_reqstream_enq_msg, 1U);
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_ASSIGNSEL_WI(77,3,0x4aU, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U);
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 0U)))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 1U)))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__ex_result_sel_X 
        = vlSelf->__PVT__ex_result_sel_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__6(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__6\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_queue_num_free_entries 
        = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__num_free_entries;
    vlSelf->__PVT__proc2mngr_enq_rdy = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_rdy;
    if (((IData)(vlSelf->__PVT__proc2mngr_queue_num_free_entries) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_queue_num_free_entries))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_queue_num_free_entries 
            = vlSelf->__PVT__proc2mngr_queue_num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_enq_rdy))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_enq_rdy = vlSelf->__PVT__proc2mngr_enq_rdy;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_rdy 
        = vlSelf->__PVT__proc2mngr_enq_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__7(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__7\n"); );
    // Body
    vlSelf->__PVT__dmem_queue_num_free_entries = vlSymsp->TOP__top__DUT__dmem_queue.__PVT__num_free_entries;
    vlSelf->__PVT__dmem_reqstream_enq_rdy = vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_rdy;
    if (((IData)(vlSelf->__PVT__dmem_queue_num_free_entries) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_queue_num_free_entries))) {
        vlSymsp->__Vcoverage[901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_queue_num_free_entries 
            = vlSelf->__PVT__dmem_queue_num_free_entries;
    }
    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_rdy))) {
        vlSymsp->__Vcoverage[980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_enq_rdy = vlSelf->__PVT__dmem_reqstream_enq_rdy;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_rdy 
        = vlSelf->__PVT__dmem_reqstream_enq_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__8(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__8\n"); );
    // Body
    vlSelf->__PVT__inst_D = vlSymsp->TOP__top__DUT__dpath.__PVT__inst_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0U)))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 1U)))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 2U)))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 3U)))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 4U)))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 5U)))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 6U)))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 7U)))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 8U)))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 9U)))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xaU)))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xbU)))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xcU)))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xdU)))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xeU)))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xfU)))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x10U)))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x11U)))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x12U)))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x13U)))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x14U)))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x15U)))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x16U)))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x17U)))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x18U)))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x19U)))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[1148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[1149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[1150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__inst_D = vlSelf->__PVT__inst_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__9(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__9\n"); );
    // Body
    vlSelf->__PVT__op1_sel_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__op1_sel_D;
    vlSelf->__PVT__op2_sel_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__op2_sel_D;
    vlSelf->__PVT__imm_type_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__imm_type_D;
    if (((IData)(vlSelf->__PVT__op1_sel_D) ^ (IData)(vlSelf->__Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__op1_sel_D = vlSelf->__PVT__op1_sel_D;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__op1_sel_D 
        = vlSelf->__PVT__op1_sel_D;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__op2_sel_D 
        = vlSelf->__PVT__op2_sel_D;
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 0U)))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 1U)))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 2U)))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imm_type_D 
        = vlSelf->__PVT__imm_type_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__10(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__10\n"); );
    // Body
    vlSelf->__PVT__csrr_sel_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__csrr_sel_D;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__csrr_sel_D 
        = vlSelf->__PVT__csrr_sel_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__11(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_sequent__TOP__top__DUT__11\n"); );
    // Body
    vlSymsp->TOP__top__DUT__vc_trace.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__ctrl.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__0(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__0\n"); );
    // Body
    vlSelf->__PVT__dmem_respstream_rdy = vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_rdy;
    vlSelf->__PVT__commit_inst = vlSymsp->TOP__top__DUT__ctrl.__PVT__commit_inst;
    vlSelf->__PVT__reg_en_W = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_W;
    vlSelf->__PVT__proc2mngr_enq_val = vlSymsp->TOP__top__DUT__ctrl.__PVT__proc2mngr_val;
    if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__rdy 
        = vlSelf->__PVT__dmem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__commit_inst) ^ (IData)(vlSelf->__Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[736].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__commit_inst = vlSelf->__PVT__commit_inst;
    }
    if (((IData)(vlSelf->__PVT__reg_en_W) ^ (IData)(vlSelf->__Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_W = vlSelf->__PVT__reg_en_W;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_W = vlSelf->__PVT__reg_en_W;
    if (((IData)(vlSelf->__PVT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_enq_val = vlSelf->__PVT__proc2mngr_enq_val;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__enq_val 
        = vlSelf->__PVT__proc2mngr_enq_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__1(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__1\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_val = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__proc2mngr_val) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val = vlSelf->__PVT__proc2mngr_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__2(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__2\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_msg = vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_msg;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0U)))) {
        vlSymsp->__Vcoverage[414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 1U)))) {
        vlSymsp->__Vcoverage[415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 2U)))) {
        vlSymsp->__Vcoverage[416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 3U)))) {
        vlSymsp->__Vcoverage[417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 4U)))) {
        vlSymsp->__Vcoverage[418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 5U)))) {
        vlSymsp->__Vcoverage[419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 6U)))) {
        vlSymsp->__Vcoverage[420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 7U)))) {
        vlSymsp->__Vcoverage[421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 8U)))) {
        vlSymsp->__Vcoverage[422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 9U)))) {
        vlSymsp->__Vcoverage[423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_msg, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__3(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__3\n"); );
    // Body
    vlSelf->__PVT__imem_queue_num_free_entries = vlSymsp->TOP__top__DUT__imem_queue.__PVT__num_free_entries;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__imem_queue_num_free_entries), 0U)))) {
        vlSymsp->__Vcoverage[738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imem_queue_num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__imem_queue_num_free_entries), 1U)))) {
        vlSymsp->__Vcoverage[739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imem_queue_num_free_entries, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__imem_queue_num_free_entries), 1U)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__4(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__4\n"); );
    // Body
    vlSelf->__PVT__imul_req_rdy_D = vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_rdy_D;
    vlSelf->__PVT__imul_resp_val_X = vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_val_X;
    if (((IData)(vlSelf->__PVT__imul_req_rdy_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_rdy_D = vlSelf->__PVT__imul_req_rdy_D;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_rdy_D 
        = vlSelf->__PVT__imul_req_rdy_D;
    if (((IData)(vlSelf->__PVT__imul_resp_val_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_val_X = vlSelf->__PVT__imul_resp_val_X;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_val_X 
        = vlSelf->__PVT__imul_resp_val_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__5(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__5\n"); );
    // Body
    vlSelf->__PVT__br_cond_lt_X = vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_lt_X;
    vlSelf->__PVT__br_cond_ltu_X = vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_ltu_X;
    if (((IData)(vlSelf->__PVT__br_cond_lt_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[1152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_lt_X = vlSelf->__PVT__br_cond_lt_X;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_lt_X 
        = vlSelf->__PVT__br_cond_lt_X;
    if (((IData)(vlSelf->__PVT__br_cond_ltu_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[1153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_ltu_X = vlSelf->__PVT__br_cond_ltu_X;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_ltu_X 
        = vlSelf->__PVT__br_cond_ltu_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__6(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__6\n"); );
    // Body
    vlSelf->__PVT__br_cond_eq_X = vlSymsp->TOP__top__DUT__dpath.__PVT__br_cond_eq_X;
    if (((IData)(vlSelf->__PVT__br_cond_eq_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[1151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_eq_X = vlSelf->__PVT__br_cond_eq_X;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__br_cond_eq_X 
        = vlSelf->__PVT__br_cond_eq_X;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__7(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__7\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[412].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_val 
        = vlSelf->__PVT__mngr2proc_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__8(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__8\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[574].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_val = vlSelf->__PVT__imem_respstream_val;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__val 
        = vlSelf->__PVT__imem_respstream_val;
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_val 
        = vlSelf->__PVT__imem_respstream_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__9(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__9\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__dmem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_val = vlSelf->__PVT__dmem_respstream_val;
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__val 
        = vlSelf->__PVT__dmem_respstream_val;
    vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_respstream_val 
        = vlSelf->__PVT__dmem_respstream_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__10(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__10\n"); );
    // Body
    vlSelf->__PVT__dmem_reqstream_enq_msg_addr = vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_reqstream_msg_addr;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[1000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[1001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[1002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[1003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[1004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[1005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[1006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[1007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[1008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[1009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[1010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[1011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[1012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__11(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__11\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0U)))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 1U)))) {
        vlSymsp->__Vcoverage[381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 2U)))) {
        vlSymsp->__Vcoverage[382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 3U)))) {
        vlSymsp->__Vcoverage[383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 4U)))) {
        vlSymsp->__Vcoverage[384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 5U)))) {
        vlSymsp->__Vcoverage[385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 6U)))) {
        vlSymsp->__Vcoverage[386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 7U)))) {
        vlSymsp->__Vcoverage[387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 8U)))) {
        vlSymsp->__Vcoverage[388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 9U)))) {
        vlSymsp->__Vcoverage[389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__mngr2proc_data 
        = vlSelf->__PVT__mngr2proc_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__12(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__12\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__proc2mngr_rdy) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    }
    vlSymsp->TOP__top__DUT__proc2mngr_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__proc2mngr_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__13(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__13\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__dmem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__dmem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dmem_respstream_trace.__PVT__msg 
        = vlSelf->__PVT__dmem_respstream_msg;
    vlSelf->__Vcellinp__dpath__dmem_respstream_msg_data 
        = VL_SEL_IQII(47, vlSelf->__PVT__dmem_respstream_msg, 0U, 0x20U);
    vlSymsp->TOP__top__DUT__dpath.__PVT__dmem_respstream_msg_data 
        = vlSelf->__Vcellinp__dpath__dmem_respstream_msg_data;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__14(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__14\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__msg 
        = vlSelf->__PVT__imem_respstream_msg;
    vlSelf->__Vcellinp__imem_respstream_drop_unit__istream_msg 
        = vlSelf->__PVT__imem_respstream_msg;
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_msg 
        = vlSelf->__Vcellinp__imem_respstream_drop_unit__istream_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__15(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__15\n"); );
    // Body
    vlSelf->__Vcellout__imem_respstream_drop_unit__ostream_msg 
        = vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_msg;
    vlSelf->__PVT__imem_respstream_drop_msg = vlSelf->__Vcellout__imem_respstream_drop_unit__ostream_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0U)))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 1U)))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 2U)))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 3U)))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 4U)))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 5U)))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 6U)))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 7U)))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 8U)))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 9U)))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__imem_respstream_drop_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__imem_respstream_drop_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__imem_respstream_drop_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_msg 
        = vlSelf->__PVT__imem_respstream_drop_msg;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__16(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__16\n"); );
    // Body
    vlSelf->__PVT__pc_sel_F = vlSymsp->TOP__top__DUT__ctrl.__PVT__pc_sel_F;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 0U)))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 1U)))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__pc_sel_F = vlSelf->__PVT__pc_sel_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__17(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__17\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    VL_CONCAT_WQQ(74,40,34, __Vtemp_1, VL_EXTEND_QI(40,32, vlSelf->__PVT__dmem_reqstream_enq_msg_addr), 
                  VL_EXTEND_QI(34,32, vlSelf->__PVT__dmem_reqstream_enq_msg_data));
    VL_ASSIGNSEL_WW(77,74,0U, vlSelf->__PVT__dmem_reqstream_enq_msg, __Vtemp_1);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_enq_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__dmem_queue__enq_msg, vlSelf->__PVT__dmem_reqstream_enq_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_msg, vlSelf->__Vcellinp__dmem_queue__enq_msg);
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__18(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__18\n"); );
    // Body
    vlSelf->__PVT__reg_en_M = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_M;
    if (((IData)(vlSelf->__PVT__reg_en_M) ^ (IData)(vlSelf->__Vtogcov__reg_en_M))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M = vlSelf->__PVT__reg_en_M;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_M = vlSelf->__PVT__reg_en_M;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__19(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__19\n"); );
    // Body
    vlSelf->__PVT__imul_resp_rdy_X = vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_resp_rdy_X;
    vlSelf->__PVT__reg_en_X = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_X;
    vlSelf->__PVT__dmem_reqstream_enq_val = vlSymsp->TOP__top__DUT__ctrl.__PVT__dmem_reqstream_val;
    if (((IData)(vlSelf->__PVT__imul_resp_rdy_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_rdy_X = vlSelf->__PVT__imul_resp_rdy_X;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imul_resp_rdy_X 
        = vlSelf->__PVT__imul_resp_rdy_X;
    if (((IData)(vlSelf->__PVT__reg_en_X) ^ (IData)(vlSelf->__Vtogcov__reg_en_X))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_X = vlSelf->__PVT__reg_en_X;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_X = vlSelf->__PVT__reg_en_X;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_enq_val = vlSelf->__PVT__dmem_reqstream_enq_val;
    }
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__enq_val 
        = vlSelf->__PVT__dmem_reqstream_enq_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__20(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__20\n"); );
    // Body
    vlSelf->__PVT__dmem_reqstream_val = vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_val = vlSelf->__PVT__dmem_reqstream_val;
    }
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__val 
        = vlSelf->__PVT__dmem_reqstream_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__21(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__21\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->__PVT__imem_reqstream_enq_msg_addr = vlSymsp->TOP__top__DUT__dpath.__PVT__imem_reqstream_msg_addr;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imem_reqstream_enq_msg_addr, 0x1fU)));
    }
    VL_CONCAT_WQQ(77,43,34, __Vtemp_1, VL_EXTEND_QI(43,32, vlSelf->__PVT__imem_reqstream_enq_msg_addr), 0ULL);
    VL_ASSIGN_W(77,vlSelf->__PVT__imem_reqstream_enq_msg, __Vtemp_1);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0U)))) {
        vlSymsp->__Vcoverage[785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 1U)))) {
        vlSymsp->__Vcoverage[786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 2U)))) {
        vlSymsp->__Vcoverage[787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 3U)))) {
        vlSymsp->__Vcoverage[788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 4U)))) {
        vlSymsp->__Vcoverage[789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 5U)))) {
        vlSymsp->__Vcoverage[790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 6U)))) {
        vlSymsp->__Vcoverage[791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 7U)))) {
        vlSymsp->__Vcoverage[792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 8U)))) {
        vlSymsp->__Vcoverage[793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 9U)))) {
        vlSymsp->__Vcoverage[794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_enq_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_enq_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__imem_queue__enq_msg, vlSelf->__PVT__imem_reqstream_enq_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_msg, vlSelf->__Vcellinp__imem_queue__enq_msg);
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__22(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__22\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__Vcellout__dmem_queue__deq_msg, vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_msg);
    VL_ASSIGN_W(77,vlSelf->__PVT__dmem_reqstream_msg, vlSelf->__Vcellout__dmem_queue__deq_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__dmem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__dmem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__msg, vlSelf->__PVT__dmem_reqstream_msg);
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__23(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__23\n"); );
    // Body
    vlSelf->__PVT__imul_req_val_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__imul_req_val_D;
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imul_req_val_D 
        = vlSelf->__PVT__imul_req_val_D;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__24(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__24\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_rdy = vlSelf->__PVT__dmem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT__dmem_reqstream_trace.__PVT__rdy 
        = vlSelf->__PVT__dmem_reqstream_rdy;
    vlSymsp->TOP__top__DUT__dmem_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__dmem_reqstream_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__25(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__25\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__Vcellout__imem_queue__deq_msg, vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_msg);
    VL_ASSIGN_W(77,vlSelf->__PVT__imem_reqstream_msg, vlSelf->__Vcellout__imem_queue__deq_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0U)))) {
        vlSymsp->__Vcoverage[493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 1U)))) {
        vlSymsp->__Vcoverage[494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 2U)))) {
        vlSymsp->__Vcoverage[495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 3U)))) {
        vlSymsp->__Vcoverage[496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 4U)))) {
        vlSymsp->__Vcoverage[497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 5U)))) {
        vlSymsp->__Vcoverage[498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 6U)))) {
        vlSymsp->__Vcoverage[499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 7U)))) {
        vlSymsp->__Vcoverage[500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 8U)))) {
        vlSymsp->__Vcoverage[501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 9U)))) {
        vlSymsp->__Vcoverage[502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__imem_reqstream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__imem_reqstream_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__imem_reqstream_msg, 0x1fU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__msg, vlSelf->__PVT__imem_reqstream_msg);
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__26(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__26\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_drop = vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_drop;
    if (((IData)(vlSelf->__PVT__imem_respstream_drop) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop = vlSelf->__PVT__imem_respstream_drop;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__imem_respstream_drop 
        = vlSelf->__PVT__imem_respstream_drop;
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__drop 
        = vlSelf->__PVT__imem_respstream_drop;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__27(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__27\n"); );
    // Body
    vlSelf->__PVT__reg_en_D = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_D;
    vlSelf->__PVT__mngr2proc_rdy = vlSymsp->TOP__top__DUT__ctrl.__PVT__mngr2proc_rdy;
    vlSelf->__PVT__imem_respstream_drop_rdy = vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_rdy;
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_D = vlSelf->__PVT__reg_en_D;
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[413].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->__PVT__imem_respstream_drop_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop_rdy))) {
        vlSymsp->__Vcoverage[900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop_rdy 
            = vlSelf->__PVT__imem_respstream_drop_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_rdy 
        = vlSelf->__PVT__imem_respstream_drop_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__28(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__28\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_drop_val = vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__ostream_val;
    if (((IData)(vlSelf->__PVT__imem_respstream_drop_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop_val))) {
        vlSymsp->__Vcoverage[899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop_val 
            = vlSelf->__PVT__imem_respstream_drop_val;
    }
    vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_respstream_val 
        = vlSelf->__PVT__imem_respstream_drop_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__29(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__29\n"); );
    // Body
    vlSelf->__PVT__imem_respstream_rdy = vlSymsp->TOP__top__DUT__imem_respstream_drop_unit.__PVT__istream_rdy;
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[575].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_respstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_respstream_rdy;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__30(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__30\n"); );
    // Body
    vlSelf->__PVT__reg_en_F = vlSymsp->TOP__top__DUT__ctrl.__PVT__reg_en_F;
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
    vlSymsp->TOP__top__DUT__dpath.__PVT__reg_en_F = vlSelf->__PVT__reg_en_F;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__31(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__31\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_enq_val = vlSymsp->TOP__top__DUT__ctrl.__PVT__imem_reqstream_val;
    if (((IData)(vlSelf->__PVT__imem_reqstream_enq_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_enq_val))) {
        vlSymsp->__Vcoverage[817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_enq_val = vlSelf->__PVT__imem_reqstream_enq_val;
    }
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__enq_val 
        = vlSelf->__PVT__imem_reqstream_enq_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__32(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__32\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_val = vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_val;
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[525].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__val 
        = vlSelf->__PVT__imem_reqstream_val;
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__33(Vtop_lab2_proc_ProcBase* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_lab2_proc_ProcBase___nba_comb__TOP__top__DUT__33\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[526].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT__imem_reqstream_trace.__PVT__rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
    vlSymsp->TOP__top__DUT__imem_queue.__PVT__deq_rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
}
