// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_2r1w__P20_PB20.h"

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w__P20_PB20___stl_sequent__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___stl_sequent__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 0U)))) {
        vlSymsp->__Vcoverage[9914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 1U)))) {
        vlSymsp->__Vcoverage[9915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 2U)))) {
        vlSymsp->__Vcoverage[9916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 3U)))) {
        vlSymsp->__Vcoverage[9917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 4U)))) {
        vlSymsp->__Vcoverage[9918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 4U)));
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__write_en = vlSelf->__PVT__write_en;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0U)))) {
        vlSymsp->__Vcoverage[9919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 1U)))) {
        vlSymsp->__Vcoverage[9920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 2U)))) {
        vlSymsp->__Vcoverage[9921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 3U)))) {
        vlSymsp->__Vcoverage[9922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 4U)))) {
        vlSymsp->__Vcoverage[9923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 5U)))) {
        vlSymsp->__Vcoverage[9924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 6U)))) {
        vlSymsp->__Vcoverage[9925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 7U)))) {
        vlSymsp->__Vcoverage[9926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 8U)))) {
        vlSymsp->__Vcoverage[9927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 9U)))) {
        vlSymsp->__Vcoverage[9928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xaU)))) {
        vlSymsp->__Vcoverage[9929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xbU)))) {
        vlSymsp->__Vcoverage[9930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xcU)))) {
        vlSymsp->__Vcoverage[9931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xdU)))) {
        vlSymsp->__Vcoverage[9932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xeU)))) {
        vlSymsp->__Vcoverage[9933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xfU)))) {
        vlSymsp->__Vcoverage[9934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x10U)))) {
        vlSymsp->__Vcoverage[9935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x11U)))) {
        vlSymsp->__Vcoverage[9936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x12U)))) {
        vlSymsp->__Vcoverage[9937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x13U)))) {
        vlSymsp->__Vcoverage[9938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x14U)))) {
        vlSymsp->__Vcoverage[9939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x15U)))) {
        vlSymsp->__Vcoverage[9940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x16U)))) {
        vlSymsp->__Vcoverage[9941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x17U)))) {
        vlSymsp->__Vcoverage[9942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x18U)))) {
        vlSymsp->__Vcoverage[9943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x19U)))) {
        vlSymsp->__Vcoverage[9944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[9945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[9946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[9947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[9948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[9949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[9950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w__P20_PB20___stl_sequent__TOP__top__DUT__dpath__rf__rfile__1(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___stl_sequent__TOP__top__DUT__dpath__rf__rfile__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 0U)))) {
        vlSymsp->__Vcoverage[9839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 1U)))) {
        vlSymsp->__Vcoverage[9840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 2U)))) {
        vlSymsp->__Vcoverage[9841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 3U)))) {
        vlSymsp->__Vcoverage[9842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 4U)))) {
        vlSymsp->__Vcoverage[9843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 4U)));
    }
    vlSelf->__PVT__read_data0 = vlSelf->__PVT__rfile
        [vlSelf->__PVT__read_addr0];
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 0U)))) {
        vlSymsp->__Vcoverage[9876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 1U)))) {
        vlSymsp->__Vcoverage[9877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 2U)))) {
        vlSymsp->__Vcoverage[9878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 3U)))) {
        vlSymsp->__Vcoverage[9879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 4U)))) {
        vlSymsp->__Vcoverage[9880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 4U)));
    }
    vlSelf->__PVT__read_data1 = vlSelf->__PVT__rfile
        [vlSelf->__PVT__read_addr1];
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0U)))) {
        vlSymsp->__Vcoverage[9844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 1U)))) {
        vlSymsp->__Vcoverage[9845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 2U)))) {
        vlSymsp->__Vcoverage[9846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 3U)))) {
        vlSymsp->__Vcoverage[9847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 4U)))) {
        vlSymsp->__Vcoverage[9848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 5U)))) {
        vlSymsp->__Vcoverage[9849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 6U)))) {
        vlSymsp->__Vcoverage[9850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 7U)))) {
        vlSymsp->__Vcoverage[9851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 8U)))) {
        vlSymsp->__Vcoverage[9852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 9U)))) {
        vlSymsp->__Vcoverage[9853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[9854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[9855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[9856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[9857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[9858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[9859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[9860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[9861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[9862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[9863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[9864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[9865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[9866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[9867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[9868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[9869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[9870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[9871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[9872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[9873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[9874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[9875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0U)))) {
        vlSymsp->__Vcoverage[9881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 1U)))) {
        vlSymsp->__Vcoverage[9882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 2U)))) {
        vlSymsp->__Vcoverage[9883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 3U)))) {
        vlSymsp->__Vcoverage[9884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 4U)))) {
        vlSymsp->__Vcoverage[9885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 5U)))) {
        vlSymsp->__Vcoverage[9886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 6U)))) {
        vlSymsp->__Vcoverage[9887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 7U)))) {
        vlSymsp->__Vcoverage[9888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 8U)))) {
        vlSymsp->__Vcoverage[9889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 9U)))) {
        vlSymsp->__Vcoverage[9890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[9891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[9892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[9893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[9894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[9895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[9896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[9897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[9898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[9899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[9900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[9901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[9902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[9903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[9904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[9905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[9906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[9907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[9908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[9909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[9910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[9911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[9912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Regfile_2r1w__P20_PB20___configure_coverage(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9837]), first, "../vc/regfiles.v", 150, 34, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9838]), first, "../vc/regfiles.v", 151, 34, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9839]), first, "../vc/regfiles.v", 155, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9840]), first, "../vc/regfiles.v", 155, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9841]), first, "../vc/regfiles.v", 155, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9842]), first, "../vc/regfiles.v", 155, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9843]), first, "../vc/regfiles.v", 155, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9844]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9845]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9846]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9847]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9848]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9849]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9850]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9851]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9852]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9853]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9854]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9855]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9856]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9857]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9858]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9859]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9860]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9861]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9862]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9863]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9864]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9865]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9866]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9867]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9868]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9869]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9870]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9871]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9872]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9873]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9874]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9875]), first, "../vc/regfiles.v", 156, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9876]), first, "../vc/regfiles.v", 160, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9877]), first, "../vc/regfiles.v", 160, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9878]), first, "../vc/regfiles.v", 160, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9879]), first, "../vc/regfiles.v", 160, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9880]), first, "../vc/regfiles.v", 160, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_addr1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9881]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9882]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9883]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9884]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9885]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9886]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9887]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9888]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9889]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9890]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9891]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9892]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9893]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9894]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9895]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9896]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9897]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9898]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9899]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9900]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9901]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9902]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9903]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9904]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9905]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9906]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9907]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9908]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9909]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9910]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9911]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9912]), first, "../vc/regfiles.v", 161, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "read_data1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9913]), first, "../vc/regfiles.v", 165, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_en", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9914]), first, "../vc/regfiles.v", 166, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_addr[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9915]), first, "../vc/regfiles.v", 166, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_addr[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9916]), first, "../vc/regfiles.v", 166, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_addr[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9917]), first, "../vc/regfiles.v", 166, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_addr[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9918]), first, "../vc/regfiles.v", 166, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_addr[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9919]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9920]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9921]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9922]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9923]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9924]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9925]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9926]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9927]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9928]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9929]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9930]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9931]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9932]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9933]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9934]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9935]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9936]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9937]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9938]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9939]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9940]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9941]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9942]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9943]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9944]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9945]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9946]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9947]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9948]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9949]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9950]), first, "../vc/regfiles.v", 167, 35, "", "v_toggle/vc_Regfile_2r1w__P20_PB20", "write_data[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9951]), first, "../vc/regfiles.v", 180, 5, "", "v_branch/vc_Regfile_2r1w__P20_PB20", "if", "180-181");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9952]), first, "../vc/regfiles.v", 180, 6, "", "v_branch/vc_Regfile_2r1w__P20_PB20", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9953]), first, "../vc/regfiles.v", 179, 3, "", "v_line/vc_Regfile_2r1w__P20_PB20", "block", "179");
}
