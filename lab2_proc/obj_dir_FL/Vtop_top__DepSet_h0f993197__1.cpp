// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_top.h"

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__9(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__9\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_rdy = vlSymsp->TOP__top__mem.__PVT__memreq0_rdy;
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__imem_reqstream_rdy 
        = vlSelf->__PVT__imem_reqstream_rdy;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__10(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__10\n"); );
    // Body
    vlSelf->__PVT__proc2mngr_rdy = vlSymsp->TOP__top__sink.__PVT__rdy;
    if (((IData)(vlSelf->__PVT__proc2mngr_rdy) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[70].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
}

VL_INLINE_OPT void Vtop_top___nba_comb__TOP__top__11(Vtop_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_top___nba_comb__TOP__top__11\n"); );
    // Body
    vlSelf->__PVT__dmem_reqstream_rdy = vlSymsp->TOP__top__mem.__PVT__memreq1_rdy;
    if (((IData)(vlSelf->__PVT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_rdy = vlSelf->__PVT__dmem_reqstream_rdy;
    }
    vlSymsp->TOP__top__DUT.__PVT__dmem_reqstream_rdy 
        = vlSelf->__PVT__dmem_reqstream_rdy;
}
