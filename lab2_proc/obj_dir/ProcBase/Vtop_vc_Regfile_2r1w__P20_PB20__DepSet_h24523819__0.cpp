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
        vlSymsp->__Vcoverage[9651].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_vc_Regfile_2r1w__P20_PB20___act_sequent__TOP__top__DUT__dpath__rf__rfile__0(Vtop_vc_Regfile_2r1w__P20_PB20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_vc_Regfile_2r1w__P20_PB20___act_sequent__TOP__top__DUT__dpath__rf__rfile__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[9652].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9765].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[9766].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9767].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9652].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 1U)))) {
        vlSymsp->__Vcoverage[9734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 2U)))) {
        vlSymsp->__Vcoverage[9735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 3U)))) {
        vlSymsp->__Vcoverage[9736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 4U)))) {
        vlSymsp->__Vcoverage[9737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 5U)))) {
        vlSymsp->__Vcoverage[9738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 6U)))) {
        vlSymsp->__Vcoverage[9739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 7U)))) {
        vlSymsp->__Vcoverage[9740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 8U)))) {
        vlSymsp->__Vcoverage[9741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 9U)))) {
        vlSymsp->__Vcoverage[9742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xaU)))) {
        vlSymsp->__Vcoverage[9743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xbU)))) {
        vlSymsp->__Vcoverage[9744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xcU)))) {
        vlSymsp->__Vcoverage[9745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xdU)))) {
        vlSymsp->__Vcoverage[9746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xeU)))) {
        vlSymsp->__Vcoverage[9747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0xfU)))) {
        vlSymsp->__Vcoverage[9748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x10U)))) {
        vlSymsp->__Vcoverage[9749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x11U)))) {
        vlSymsp->__Vcoverage[9750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x12U)))) {
        vlSymsp->__Vcoverage[9751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x13U)))) {
        vlSymsp->__Vcoverage[9752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x14U)))) {
        vlSymsp->__Vcoverage[9753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x15U)))) {
        vlSymsp->__Vcoverage[9754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x16U)))) {
        vlSymsp->__Vcoverage[9755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x17U)))) {
        vlSymsp->__Vcoverage[9756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x18U)))) {
        vlSymsp->__Vcoverage[9757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x19U)))) {
        vlSymsp->__Vcoverage[9758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[9759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[9760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[9761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[9762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[9763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__write_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__write_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__write_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[9764].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 1U)))) {
        vlSymsp->__Vcoverage[9729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 2U)))) {
        vlSymsp->__Vcoverage[9730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 3U)))) {
        vlSymsp->__Vcoverage[9731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__write_addr), 4U)))) {
        vlSymsp->__Vcoverage[9732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__write_addr, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__write_addr), 4U)));
    }
    if (((IData)(vlSelf->__PVT__write_en) ^ (IData)(vlSelf->__Vtogcov__write_en))) {
        vlSymsp->__Vcoverage[9727].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 1U)))) {
        vlSymsp->__Vcoverage[9654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 2U)))) {
        vlSymsp->__Vcoverage[9655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 3U)))) {
        vlSymsp->__Vcoverage[9656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr0), 4U)))) {
        vlSymsp->__Vcoverage[9657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_addr0, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr0), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 0U)))) {
        vlSymsp->__Vcoverage[9690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 1U)))) {
        vlSymsp->__Vcoverage[9691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 2U)))) {
        vlSymsp->__Vcoverage[9692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 3U)))) {
        vlSymsp->__Vcoverage[9693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_addr1, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__read_addr1), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__read_addr1), 4U)))) {
        vlSymsp->__Vcoverage[9694].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[9658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 1U)))) {
        vlSymsp->__Vcoverage[9659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 2U)))) {
        vlSymsp->__Vcoverage[9660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 3U)))) {
        vlSymsp->__Vcoverage[9661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 4U)))) {
        vlSymsp->__Vcoverage[9662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 5U)))) {
        vlSymsp->__Vcoverage[9663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 6U)))) {
        vlSymsp->__Vcoverage[9664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 7U)))) {
        vlSymsp->__Vcoverage[9665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 8U)))) {
        vlSymsp->__Vcoverage[9666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 9U)))) {
        vlSymsp->__Vcoverage[9667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xaU)))) {
        vlSymsp->__Vcoverage[9668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xbU)))) {
        vlSymsp->__Vcoverage[9669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xcU)))) {
        vlSymsp->__Vcoverage[9670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xdU)))) {
        vlSymsp->__Vcoverage[9671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xeU)))) {
        vlSymsp->__Vcoverage[9672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0xfU)))) {
        vlSymsp->__Vcoverage[9673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x10U)))) {
        vlSymsp->__Vcoverage[9674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x11U)))) {
        vlSymsp->__Vcoverage[9675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x12U)))) {
        vlSymsp->__Vcoverage[9676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x13U)))) {
        vlSymsp->__Vcoverage[9677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x14U)))) {
        vlSymsp->__Vcoverage[9678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x15U)))) {
        vlSymsp->__Vcoverage[9679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x16U)))) {
        vlSymsp->__Vcoverage[9680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x17U)))) {
        vlSymsp->__Vcoverage[9681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x18U)))) {
        vlSymsp->__Vcoverage[9682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x19U)))) {
        vlSymsp->__Vcoverage[9683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1aU)))) {
        vlSymsp->__Vcoverage[9684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1bU)))) {
        vlSymsp->__Vcoverage[9685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1cU)))) {
        vlSymsp->__Vcoverage[9686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1dU)))) {
        vlSymsp->__Vcoverage[9687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1eU)))) {
        vlSymsp->__Vcoverage[9688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data0, 0x1fU)))) {
        vlSymsp->__Vcoverage[9689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__read_data0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0U)))) {
        vlSymsp->__Vcoverage[9695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 1U)))) {
        vlSymsp->__Vcoverage[9696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 2U)))) {
        vlSymsp->__Vcoverage[9697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 3U)))) {
        vlSymsp->__Vcoverage[9698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 4U)))) {
        vlSymsp->__Vcoverage[9699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 5U)))) {
        vlSymsp->__Vcoverage[9700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 6U)))) {
        vlSymsp->__Vcoverage[9701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 7U)))) {
        vlSymsp->__Vcoverage[9702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 8U)))) {
        vlSymsp->__Vcoverage[9703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 9U)))) {
        vlSymsp->__Vcoverage[9704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xaU)))) {
        vlSymsp->__Vcoverage[9705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xbU)))) {
        vlSymsp->__Vcoverage[9706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xcU)))) {
        vlSymsp->__Vcoverage[9707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xdU)))) {
        vlSymsp->__Vcoverage[9708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xeU)))) {
        vlSymsp->__Vcoverage[9709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0xfU)))) {
        vlSymsp->__Vcoverage[9710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x10U)))) {
        vlSymsp->__Vcoverage[9711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x11U)))) {
        vlSymsp->__Vcoverage[9712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x12U)))) {
        vlSymsp->__Vcoverage[9713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x13U)))) {
        vlSymsp->__Vcoverage[9714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x14U)))) {
        vlSymsp->__Vcoverage[9715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x15U)))) {
        vlSymsp->__Vcoverage[9716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x16U)))) {
        vlSymsp->__Vcoverage[9717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x17U)))) {
        vlSymsp->__Vcoverage[9718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x18U)))) {
        vlSymsp->__Vcoverage[9719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x19U)))) {
        vlSymsp->__Vcoverage[9720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1aU)))) {
        vlSymsp->__Vcoverage[9721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1bU)))) {
        vlSymsp->__Vcoverage[9722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1cU)))) {
        vlSymsp->__Vcoverage[9723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1dU)))) {
        vlSymsp->__Vcoverage[9724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1eU)))) {
        vlSymsp->__Vcoverage[9725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__read_data1, 0x1fU)))) {
        vlSymsp->__Vcoverage[9726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__read_data1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__read_data1, 0x1fU)));
    }
}
