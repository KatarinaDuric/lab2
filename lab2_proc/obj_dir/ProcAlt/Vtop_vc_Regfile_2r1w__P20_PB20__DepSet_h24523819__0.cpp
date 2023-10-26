// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Regfile_2r1w__P20_PB20.h"

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___ico_sequent__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___ico_sequent__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[9837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___act_sequent__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___act_sequent__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    vlSelf->__Vdlyvset__rfile__v0 = 0U;
    if (vlSelf->__PVT__write_en) {
        vlSelf->__Vdlyvval__rfile__v0 = vlSelf->__PVT__write_data;
        vlSelf->__Vdlyvset__rfile__v0 = 1U;
        vlSelf->__Vdlyvdim0__rfile__v0 = vlSelf->__PVT__write_addr;
        vlSymsp->__Vcoverage[9951].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[9952].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9953].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__Vdlyvset__rfile__v0) {
        vlSelf->__PVT__rfile[vlSelf->__Vdlyvdim0__rfile__v0] 
            = vlSelf->__Vdlyvval__rfile__v0;
    }
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__1(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__2(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__2\n"); );
    // Body
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

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__3(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__3\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__4(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_sequent__TOP__top__DUT__dpath__rf__rfile__4\n"); );
    // Body
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
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___nba_comb__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___nba_comb__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    vlSelf->__PVT__read_data0 = vlSelf->__PVT__rfile
        [vlSelf->__PVT__read_addr0];
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
