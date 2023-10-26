// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_2r1w_zero.h"

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__0(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[6460].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__reset 
        = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 0U)))) {
        vlSymsp->__Vcoverage[6536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 1U)))) {
        vlSymsp->__Vcoverage[6537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 2U)))) {
        vlSymsp->__Vcoverage[6538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 3U)))) {
        vlSymsp->__Vcoverage[6539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__wr_addr), 4U)))) {
        vlSymsp->__Vcoverage[6540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wr_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__wr_addr), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_addr 
        = vlSelf->__PVT__wr_addr;
    if (((IData)(vlSelf->__PVT__wr_en) ^ (IData)(vlSelf->__Vtogcov__wr_en))) {
        vlSymsp->__Vcoverage[6535].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wr_en = vlSelf->__PVT__wr_en;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_en 
        = vlSelf->__PVT__wr_en;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0U)))) {
        vlSymsp->__Vcoverage[6541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 1U)))) {
        vlSymsp->__Vcoverage[6542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 2U)))) {
        vlSymsp->__Vcoverage[6543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 3U)))) {
        vlSymsp->__Vcoverage[6544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 4U)))) {
        vlSymsp->__Vcoverage[6545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 5U)))) {
        vlSymsp->__Vcoverage[6546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 6U)))) {
        vlSymsp->__Vcoverage[6547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 7U)))) {
        vlSymsp->__Vcoverage[6548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 8U)))) {
        vlSymsp->__Vcoverage[6549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 9U)))) {
        vlSymsp->__Vcoverage[6550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xaU)))) {
        vlSymsp->__Vcoverage[6551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xbU)))) {
        vlSymsp->__Vcoverage[6552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xcU)))) {
        vlSymsp->__Vcoverage[6553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xdU)))) {
        vlSymsp->__Vcoverage[6554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xeU)))) {
        vlSymsp->__Vcoverage[6555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0xfU)))) {
        vlSymsp->__Vcoverage[6556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x10U)))) {
        vlSymsp->__Vcoverage[6557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x11U)))) {
        vlSymsp->__Vcoverage[6558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x12U)))) {
        vlSymsp->__Vcoverage[6559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x13U)))) {
        vlSymsp->__Vcoverage[6560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x14U)))) {
        vlSymsp->__Vcoverage[6561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x15U)))) {
        vlSymsp->__Vcoverage[6562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x16U)))) {
        vlSymsp->__Vcoverage[6563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x17U)))) {
        vlSymsp->__Vcoverage[6564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x18U)))) {
        vlSymsp->__Vcoverage[6565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x19U)))) {
        vlSymsp->__Vcoverage[6566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[6567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[6568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[6569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[6570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[6571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wr_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[6572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__wr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wr_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__write_data 
        = vlSelf->__PVT__wr_data;
}

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__1(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[6459].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__clk 
        = vlSelf->__PVT__clk;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 0U)))) {
        vlSymsp->__Vcoverage[6461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 1U)))) {
        vlSymsp->__Vcoverage[6462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 2U)))) {
        vlSymsp->__Vcoverage[6463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 3U)))) {
        vlSymsp->__Vcoverage[6464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr0), 4U)))) {
        vlSymsp->__Vcoverage[6465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr0), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr0 
        = vlSelf->__PVT__rd_addr0;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 0U)))) {
        vlSymsp->__Vcoverage[6498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 1U)))) {
        vlSymsp->__Vcoverage[6499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 2U)))) {
        vlSymsp->__Vcoverage[6500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 3U)))) {
        vlSymsp->__Vcoverage[6501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rd_addr1), 4U)))) {
        vlSymsp->__Vcoverage[6502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rd_addr1), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_addr1 
        = vlSelf->__PVT__rd_addr1;
}

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__2(Vtop_vc_Regfile_2r1w_zero* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___stl_sequent__TOP__top__DUT__dpath__rf__2\n"); );
    // Body
    vlSelf->__PVT__rf_read_data0 = vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data0;
    vlSelf->__PVT__rf_read_data1 = vlSymsp->TOP__top__DUT__dpath__rf__rfile.__PVT__read_data1;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0U)))) {
        vlSymsp->__Vcoverage[6573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 1U)))) {
        vlSymsp->__Vcoverage[6574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 2U)))) {
        vlSymsp->__Vcoverage[6575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 3U)))) {
        vlSymsp->__Vcoverage[6576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 4U)))) {
        vlSymsp->__Vcoverage[6577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 5U)))) {
        vlSymsp->__Vcoverage[6578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 6U)))) {
        vlSymsp->__Vcoverage[6579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 7U)))) {
        vlSymsp->__Vcoverage[6580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 8U)))) {
        vlSymsp->__Vcoverage[6581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 9U)))) {
        vlSymsp->__Vcoverage[6582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[6583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[6584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[6585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[6586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[6587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[6588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[6589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[6590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[6591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[6592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[6593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[6594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[6595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[6596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[6597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[6598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[6601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[6602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[6603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[6604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data0, 0x1fU)));
    }
    vlSelf->__PVT__rd_data0 = ((0U == (IData)(vlSelf->__PVT__rd_addr0))
                                ? 0U : vlSelf->__PVT__rf_read_data0);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0U)))) {
        vlSymsp->__Vcoverage[6605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 1U)))) {
        vlSymsp->__Vcoverage[6606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 2U)))) {
        vlSymsp->__Vcoverage[6607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 3U)))) {
        vlSymsp->__Vcoverage[6608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 4U)))) {
        vlSymsp->__Vcoverage[6609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 5U)))) {
        vlSymsp->__Vcoverage[6610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 6U)))) {
        vlSymsp->__Vcoverage[6611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 7U)))) {
        vlSymsp->__Vcoverage[6612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 8U)))) {
        vlSymsp->__Vcoverage[6613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 9U)))) {
        vlSymsp->__Vcoverage[6614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[6615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[6616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[6617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[6618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[6619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[6620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[6621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[6622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[6623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[6624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[6625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[6626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[6627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[6628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[6629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[6630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[6631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[6632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[6633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[6634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[6635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_read_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[6636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_read_data1, 0x1fU)));
    }
    vlSelf->__PVT__rd_data1 = ((0U == (IData)(vlSelf->__PVT__rd_addr1))
                                ? 0U : vlSelf->__PVT__rf_read_data1);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0U)))) {
        vlSymsp->__Vcoverage[6466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 1U)))) {
        vlSymsp->__Vcoverage[6467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 2U)))) {
        vlSymsp->__Vcoverage[6468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 3U)))) {
        vlSymsp->__Vcoverage[6469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 4U)))) {
        vlSymsp->__Vcoverage[6470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 5U)))) {
        vlSymsp->__Vcoverage[6471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 6U)))) {
        vlSymsp->__Vcoverage[6472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 7U)))) {
        vlSymsp->__Vcoverage[6473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 8U)))) {
        vlSymsp->__Vcoverage[6474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 9U)))) {
        vlSymsp->__Vcoverage[6475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[6476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[6477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[6478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[6479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[6480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[6481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[6482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[6483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[6484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[6485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[6486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[6487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[6488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[6489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[6490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[6491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[6494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[6495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[6496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[6497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rd_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0U)))) {
        vlSymsp->__Vcoverage[6503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 1U)))) {
        vlSymsp->__Vcoverage[6504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 2U)))) {
        vlSymsp->__Vcoverage[6505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 3U)))) {
        vlSymsp->__Vcoverage[6506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 4U)))) {
        vlSymsp->__Vcoverage[6507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 5U)))) {
        vlSymsp->__Vcoverage[6508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 6U)))) {
        vlSymsp->__Vcoverage[6509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 7U)))) {
        vlSymsp->__Vcoverage[6510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 8U)))) {
        vlSymsp->__Vcoverage[6511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 9U)))) {
        vlSymsp->__Vcoverage[6512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[6513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[6514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[6515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[6516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[6517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[6518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[6519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[6520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[6521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[6522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[6523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[6524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[6525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[6526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[6527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[6528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[6529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[6530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[6531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[6532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[6533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rd_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[6534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rd_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rd_data1, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w_zero___configure_coverage(Vtop_vc_Regfile_2r1w_zero* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Regfile_2r1w_zero___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6459]), first, "../vc/regfiles.v", 300, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6460]), first, "../vc/regfiles.v", 301, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6461]), first, "../vc/regfiles.v", 303, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6462]), first, "../vc/regfiles.v", 303, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6463]), first, "../vc/regfiles.v", 303, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6464]), first, "../vc/regfiles.v", 303, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6465]), first, "../vc/regfiles.v", 303, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6466]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6467]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6468]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6469]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6470]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6471]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6472]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6473]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6474]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6475]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6476]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6477]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6478]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6479]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6480]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6481]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6482]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6483]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6484]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6485]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6486]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6487]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6488]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6489]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6490]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6491]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6492]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6493]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6494]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6495]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6496]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6497]), first, "../vc/regfiles.v", 304, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6498]), first, "../vc/regfiles.v", 306, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6499]), first, "../vc/regfiles.v", 306, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6500]), first, "../vc/regfiles.v", 306, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6501]), first, "../vc/regfiles.v", 306, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6502]), first, "../vc/regfiles.v", 306, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_addr1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6503]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6504]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6505]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6506]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6507]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6508]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6509]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6510]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6511]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6512]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6513]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6514]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6515]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6516]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6517]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6518]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6519]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6520]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6521]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6522]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6523]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6524]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6525]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6526]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6527]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6528]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6529]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6530]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6531]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6532]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6533]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6534]), first, "../vc/regfiles.v", 307, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "rd_data1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6535]), first, "../vc/regfiles.v", 309, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6536]), first, "../vc/regfiles.v", 310, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6537]), first, "../vc/regfiles.v", 310, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6538]), first, "../vc/regfiles.v", 310, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6539]), first, "../vc/regfiles.v", 310, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6540]), first, "../vc/regfiles.v", 310, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6541]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6542]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6543]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6544]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6545]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6546]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6547]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6548]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6549]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6550]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6551]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6552]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6553]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6554]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6555]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6556]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6557]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6558]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6559]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6560]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6561]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6562]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6563]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6564]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6565]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6566]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6567]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6568]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6569]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6570]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6571]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6572]), first, "../vc/regfiles.v", 311, 23, "", "v_toggle/vc_Regfile_2r1w_zero", "wr_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6573]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6574]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6575]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6576]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6577]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6578]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6579]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6580]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6581]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6582]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6583]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6584]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6585]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6586]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6587]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6588]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6589]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6590]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6591]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6592]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6593]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6594]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6595]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6596]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6597]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6598]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6599]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6600]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6601]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6602]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6603]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6604]), first, "../vc/regfiles.v", 317, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6605]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6606]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6607]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6608]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6609]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6610]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6611]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6612]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6613]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6614]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6615]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6616]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6617]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6618]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6619]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6620]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6621]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6622]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6623]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6624]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6625]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6626]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6627]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6628]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6629]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6630]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6631]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6632]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6633]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6634]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6635]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6636]), first, "../vc/regfiles.v", 318, 16, "", "v_toggle/vc_Regfile_2r1w_zero", "rf_read_data1[31]", "");
}
