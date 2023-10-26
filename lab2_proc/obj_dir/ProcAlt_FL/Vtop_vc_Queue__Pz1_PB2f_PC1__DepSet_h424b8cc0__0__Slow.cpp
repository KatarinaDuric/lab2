// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz1.h"
#include "Vtop_vc_QueueDpath1__Pz1_PB2f.h"
#include "Vtop_vc_Queue__Pz1_PB2f_PC1.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_comb__TOP__top__mem__mem__memresp0_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_comb__TOP__top__mem__mem__memresp0_queue__1\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__write_en = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__write_en;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__write_en 
        = vlSelf->__PVT__genblk1__DOT__write_en;
}

VL_ATTR_COLD void Vtop_vc_Queue__Pz1_PB2f_PC1___stl_comb__TOP__top__mem__mem__memresp1_queue__1(Vtop_vc_Queue__Pz1_PB2f_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz1_PB2f_PC1___stl_comb__TOP__top__mem__mem__memresp1_queue__1\n"); );
    // Body
    vlSelf->__PVT__genblk1__DOT__write_en = vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__write_en;
    vlSelf->__PVT__genblk1__DOT__dpath->__PVT__write_en 
        = vlSelf->__PVT__genblk1__DOT__write_en;
}
