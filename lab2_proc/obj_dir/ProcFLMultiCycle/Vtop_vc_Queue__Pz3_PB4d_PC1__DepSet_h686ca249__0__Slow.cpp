// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_QueueCtrl1__Pz3.h"
#include "Vtop_vc_Queue__Pz3_PB4d_PC1.h"

VL_ATTR_COLD void Vtop_vc_Queue__Pz3_PB4d_PC1___stl_comb__TOP__top__mem__mem__memreq1_queue__0(Vtop_vc_Queue__Pz3_PB4d_PC1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Queue__Pz3_PB4d_PC1___stl_comb__TOP__top__mem__mem__memreq1_queue__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__enq_val) ^ (IData)(vlSelf->__Vtogcov__enq_val))) {
        vlSymsp->__Vcoverage[5223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__enq_val = vlSelf->__PVT__enq_val;
    }
    vlSelf->__PVT__genblk1__DOT__ctrl->__PVT__enq_val 
        = vlSelf->__PVT__enq_val;
}
