// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemReqMsgUnpack__pi4.h"

VL_INLINE_OPT void Vtop_vc_MemReqMsgUnpack__pi4___nba_sequent__TOP__top__mem__mem__memreq0_msg_unpack__0(Vtop_vc_MemReqMsgUnpack__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsgUnpack__pi4___nba_sequent__TOP__top__mem__mem__memreq0_msg_unpack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[8187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[8188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[8189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[8190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[8191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[8192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[8193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[8194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[8195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[8196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[8234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x30U)))) {
        vlSymsp->__Vcoverage[8235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x31U)))) {
        vlSymsp->__Vcoverage[8236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x32U)))) {
        vlSymsp->__Vcoverage[8237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x33U)))) {
        vlSymsp->__Vcoverage[8238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x34U)))) {
        vlSymsp->__Vcoverage[8239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x35U)))) {
        vlSymsp->__Vcoverage[8240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x36U)))) {
        vlSymsp->__Vcoverage[8241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x37U)))) {
        vlSymsp->__Vcoverage[8242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x38U)))) {
        vlSymsp->__Vcoverage[8243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x39U)))) {
        vlSymsp->__Vcoverage[8244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[8245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[8246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[8247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[8248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[8249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[8250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x40U)))) {
        vlSymsp->__Vcoverage[8251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x41U)))) {
        vlSymsp->__Vcoverage[8252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x42U)))) {
        vlSymsp->__Vcoverage[8253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x43U)))) {
        vlSymsp->__Vcoverage[8254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x44U)))) {
        vlSymsp->__Vcoverage[8255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x45U)))) {
        vlSymsp->__Vcoverage[8256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x46U)))) {
        vlSymsp->__Vcoverage[8257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x47U)))) {
        vlSymsp->__Vcoverage[8258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x48U)))) {
        vlSymsp->__Vcoverage[8259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x49U)))) {
        vlSymsp->__Vcoverage[8260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[8261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[8262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[8263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__PVT__req, vlSelf->__PVT__msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4aU)))) {
        vlSymsp->__Vcoverage[8341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4bU)))) {
        vlSymsp->__Vcoverage[8342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4cU)))) {
        vlSymsp->__Vcoverage[8343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x42U)))) {
        vlSymsp->__Vcoverage[8344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x43U)))) {
        vlSymsp->__Vcoverage[8345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x44U)))) {
        vlSymsp->__Vcoverage[8346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x45U)))) {
        vlSymsp->__Vcoverage[8347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x46U)))) {
        vlSymsp->__Vcoverage[8348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x47U)))) {
        vlSymsp->__Vcoverage[8349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x48U)))) {
        vlSymsp->__Vcoverage[8350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x49U)))) {
        vlSymsp->__Vcoverage[8351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x22U)))) {
        vlSymsp->__Vcoverage[8352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x23U)))) {
        vlSymsp->__Vcoverage[8353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x24U)))) {
        vlSymsp->__Vcoverage[8354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x25U)))) {
        vlSymsp->__Vcoverage[8355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x26U)))) {
        vlSymsp->__Vcoverage[8356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x27U)))) {
        vlSymsp->__Vcoverage[8357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x28U)))) {
        vlSymsp->__Vcoverage[8358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x29U)))) {
        vlSymsp->__Vcoverage[8359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2aU)))) {
        vlSymsp->__Vcoverage[8360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2bU)))) {
        vlSymsp->__Vcoverage[8361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2cU)))) {
        vlSymsp->__Vcoverage[8362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2dU)))) {
        vlSymsp->__Vcoverage[8363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2eU)))) {
        vlSymsp->__Vcoverage[8364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2fU)))) {
        vlSymsp->__Vcoverage[8365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x30U)))) {
        vlSymsp->__Vcoverage[8366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x31U)))) {
        vlSymsp->__Vcoverage[8367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x32U)))) {
        vlSymsp->__Vcoverage[8368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x33U)))) {
        vlSymsp->__Vcoverage[8369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x34U)))) {
        vlSymsp->__Vcoverage[8370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x35U)))) {
        vlSymsp->__Vcoverage[8371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x36U)))) {
        vlSymsp->__Vcoverage[8372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x37U)))) {
        vlSymsp->__Vcoverage[8373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x38U)))) {
        vlSymsp->__Vcoverage[8374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x39U)))) {
        vlSymsp->__Vcoverage[8375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3aU)))) {
        vlSymsp->__Vcoverage[8376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3bU)))) {
        vlSymsp->__Vcoverage[8377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3cU)))) {
        vlSymsp->__Vcoverage[8378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3dU)))) {
        vlSymsp->__Vcoverage[8379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3eU)))) {
        vlSymsp->__Vcoverage[8380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3fU)))) {
        vlSymsp->__Vcoverage[8381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x40U)))) {
        vlSymsp->__Vcoverage[8382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x41U)))) {
        vlSymsp->__Vcoverage[8383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x20U)))) {
        vlSymsp->__Vcoverage[8384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x21U)))) {
        vlSymsp->__Vcoverage[8385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0U)))) {
        vlSymsp->__Vcoverage[8386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 1U)))) {
        vlSymsp->__Vcoverage[8387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 2U)))) {
        vlSymsp->__Vcoverage[8388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 3U)))) {
        vlSymsp->__Vcoverage[8389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 4U)))) {
        vlSymsp->__Vcoverage[8390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 5U)))) {
        vlSymsp->__Vcoverage[8391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 6U)))) {
        vlSymsp->__Vcoverage[8392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 7U)))) {
        vlSymsp->__Vcoverage[8393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 8U)))) {
        vlSymsp->__Vcoverage[8394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 9U)))) {
        vlSymsp->__Vcoverage[8395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xaU)))) {
        vlSymsp->__Vcoverage[8396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xbU)))) {
        vlSymsp->__Vcoverage[8397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xcU)))) {
        vlSymsp->__Vcoverage[8398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xdU)))) {
        vlSymsp->__Vcoverage[8399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xeU)))) {
        vlSymsp->__Vcoverage[8400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xfU)))) {
        vlSymsp->__Vcoverage[8401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x10U)))) {
        vlSymsp->__Vcoverage[8402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x11U)))) {
        vlSymsp->__Vcoverage[8403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x12U)))) {
        vlSymsp->__Vcoverage[8404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x13U)))) {
        vlSymsp->__Vcoverage[8405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x14U)))) {
        vlSymsp->__Vcoverage[8406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x15U)))) {
        vlSymsp->__Vcoverage[8407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x16U)))) {
        vlSymsp->__Vcoverage[8408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x17U)))) {
        vlSymsp->__Vcoverage[8409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x18U)))) {
        vlSymsp->__Vcoverage[8410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x19U)))) {
        vlSymsp->__Vcoverage[8411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1aU)))) {
        vlSymsp->__Vcoverage[8412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1bU)))) {
        vlSymsp->__Vcoverage[8413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1cU)))) {
        vlSymsp->__Vcoverage[8414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1dU)))) {
        vlSymsp->__Vcoverage[8415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1eU)))) {
        vlSymsp->__Vcoverage[8416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1fU)))) {
        vlSymsp->__Vcoverage[8417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU)));
    }
    vlSelf->__PVT__data = VL_SEL_IWII(77, vlSelf->__PVT__req, 0U, 0x20U);
    vlSelf->__PVT__len = (3U & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x4aU, 3U));
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x42U, 8U));
    vlSelf->__PVT__addr = VL_SEL_IWII(77, vlSelf->__PVT__req, 0x22U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[8309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[8310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[8311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[8312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[8313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[8314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[8315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[8316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[8317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[8318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[8319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[8320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[8321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[8322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[8323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[8324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[8325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[8326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[8327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[8328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[8329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[8330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[8331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[8332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[8333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[8334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[8335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[8336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[8337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[8338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[8339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[8340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[8307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[8308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[8264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[8265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[8266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[8267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[8268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[8269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[8270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[8271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[8272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[8273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[8274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0U)))) {
        vlSymsp->__Vcoverage[8275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 1U)))) {
        vlSymsp->__Vcoverage[8276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 2U)))) {
        vlSymsp->__Vcoverage[8277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 3U)))) {
        vlSymsp->__Vcoverage[8278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 4U)))) {
        vlSymsp->__Vcoverage[8279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 5U)))) {
        vlSymsp->__Vcoverage[8280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 6U)))) {
        vlSymsp->__Vcoverage[8281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 7U)))) {
        vlSymsp->__Vcoverage[8282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 8U)))) {
        vlSymsp->__Vcoverage[8283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 9U)))) {
        vlSymsp->__Vcoverage[8284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xaU)))) {
        vlSymsp->__Vcoverage[8285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xbU)))) {
        vlSymsp->__Vcoverage[8286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xcU)))) {
        vlSymsp->__Vcoverage[8287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xdU)))) {
        vlSymsp->__Vcoverage[8288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xeU)))) {
        vlSymsp->__Vcoverage[8289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xfU)))) {
        vlSymsp->__Vcoverage[8290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x10U)))) {
        vlSymsp->__Vcoverage[8291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x11U)))) {
        vlSymsp->__Vcoverage[8292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x12U)))) {
        vlSymsp->__Vcoverage[8293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x13U)))) {
        vlSymsp->__Vcoverage[8294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x14U)))) {
        vlSymsp->__Vcoverage[8295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x15U)))) {
        vlSymsp->__Vcoverage[8296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x16U)))) {
        vlSymsp->__Vcoverage[8297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x17U)))) {
        vlSymsp->__Vcoverage[8298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x18U)))) {
        vlSymsp->__Vcoverage[8299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x19U)))) {
        vlSymsp->__Vcoverage[8300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[8301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[8302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[8303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[8304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[8305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[8306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemReqMsgUnpack__pi4___nba_sequent__TOP__top__mem__mem__memreq1_msg_unpack__0(Vtop_vc_MemReqMsgUnpack__pi4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemReqMsgUnpack__pi4___nba_sequent__TOP__top__mem__mem__memreq1_msg_unpack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[8187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[8188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[8189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[8190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[8191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[8192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[8193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[8194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[8195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[8196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8209].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8210].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8211].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8212].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8213].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8214].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8215].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8216].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8217].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8218].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8219].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8222].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8223].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8231].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[8234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x30U)))) {
        vlSymsp->__Vcoverage[8235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x31U)))) {
        vlSymsp->__Vcoverage[8236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x32U)))) {
        vlSymsp->__Vcoverage[8237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x33U)))) {
        vlSymsp->__Vcoverage[8238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x34U)))) {
        vlSymsp->__Vcoverage[8239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x35U)))) {
        vlSymsp->__Vcoverage[8240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x36U)))) {
        vlSymsp->__Vcoverage[8241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x37U)))) {
        vlSymsp->__Vcoverage[8242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x38U)))) {
        vlSymsp->__Vcoverage[8243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x39U)))) {
        vlSymsp->__Vcoverage[8244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[8245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[8246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[8247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[8248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[8249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[8250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x40U)))) {
        vlSymsp->__Vcoverage[8251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x41U)))) {
        vlSymsp->__Vcoverage[8252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x42U)))) {
        vlSymsp->__Vcoverage[8253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x43U)))) {
        vlSymsp->__Vcoverage[8254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x44U)))) {
        vlSymsp->__Vcoverage[8255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x45U)))) {
        vlSymsp->__Vcoverage[8256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x46U)))) {
        vlSymsp->__Vcoverage[8257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x47U)))) {
        vlSymsp->__Vcoverage[8258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x48U)))) {
        vlSymsp->__Vcoverage[8259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x49U)))) {
        vlSymsp->__Vcoverage[8260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[8261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[8262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[8263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__PVT__req, vlSelf->__PVT__msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4aU)))) {
        vlSymsp->__Vcoverage[8341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4bU)))) {
        vlSymsp->__Vcoverage[8342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4cU)))) {
        vlSymsp->__Vcoverage[8343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x42U)))) {
        vlSymsp->__Vcoverage[8344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x43U)))) {
        vlSymsp->__Vcoverage[8345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x44U)))) {
        vlSymsp->__Vcoverage[8346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x45U)))) {
        vlSymsp->__Vcoverage[8347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x46U)))) {
        vlSymsp->__Vcoverage[8348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x47U)))) {
        vlSymsp->__Vcoverage[8349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x48U)))) {
        vlSymsp->__Vcoverage[8350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x49U)))) {
        vlSymsp->__Vcoverage[8351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x22U)))) {
        vlSymsp->__Vcoverage[8352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x23U)))) {
        vlSymsp->__Vcoverage[8353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x24U)))) {
        vlSymsp->__Vcoverage[8354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x25U)))) {
        vlSymsp->__Vcoverage[8355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x26U)))) {
        vlSymsp->__Vcoverage[8356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x27U)))) {
        vlSymsp->__Vcoverage[8357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x28U)))) {
        vlSymsp->__Vcoverage[8358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x29U)))) {
        vlSymsp->__Vcoverage[8359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2aU)))) {
        vlSymsp->__Vcoverage[8360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2bU)))) {
        vlSymsp->__Vcoverage[8361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2cU)))) {
        vlSymsp->__Vcoverage[8362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2dU)))) {
        vlSymsp->__Vcoverage[8363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2eU)))) {
        vlSymsp->__Vcoverage[8364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2fU)))) {
        vlSymsp->__Vcoverage[8365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x30U)))) {
        vlSymsp->__Vcoverage[8366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x31U)))) {
        vlSymsp->__Vcoverage[8367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x32U)))) {
        vlSymsp->__Vcoverage[8368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x33U)))) {
        vlSymsp->__Vcoverage[8369].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x34U)))) {
        vlSymsp->__Vcoverage[8370].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x35U)))) {
        vlSymsp->__Vcoverage[8371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x36U)))) {
        vlSymsp->__Vcoverage[8372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x37U)))) {
        vlSymsp->__Vcoverage[8373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x38U)))) {
        vlSymsp->__Vcoverage[8374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x39U)))) {
        vlSymsp->__Vcoverage[8375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3aU)))) {
        vlSymsp->__Vcoverage[8376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3bU)))) {
        vlSymsp->__Vcoverage[8377].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3cU)))) {
        vlSymsp->__Vcoverage[8378].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3dU)))) {
        vlSymsp->__Vcoverage[8379].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3eU)))) {
        vlSymsp->__Vcoverage[8380].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3fU)))) {
        vlSymsp->__Vcoverage[8381].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x40U)))) {
        vlSymsp->__Vcoverage[8382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x41U)))) {
        vlSymsp->__Vcoverage[8383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x20U)))) {
        vlSymsp->__Vcoverage[8384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x21U)))) {
        vlSymsp->__Vcoverage[8385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0U)))) {
        vlSymsp->__Vcoverage[8386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 1U)))) {
        vlSymsp->__Vcoverage[8387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 2U)))) {
        vlSymsp->__Vcoverage[8388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 3U)))) {
        vlSymsp->__Vcoverage[8389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 4U)))) {
        vlSymsp->__Vcoverage[8390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 5U)))) {
        vlSymsp->__Vcoverage[8391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 6U)))) {
        vlSymsp->__Vcoverage[8392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 7U)))) {
        vlSymsp->__Vcoverage[8393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 8U)))) {
        vlSymsp->__Vcoverage[8394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 9U)))) {
        vlSymsp->__Vcoverage[8395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xaU)))) {
        vlSymsp->__Vcoverage[8396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xbU)))) {
        vlSymsp->__Vcoverage[8397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xcU)))) {
        vlSymsp->__Vcoverage[8398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xdU)))) {
        vlSymsp->__Vcoverage[8399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xeU)))) {
        vlSymsp->__Vcoverage[8400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xfU)))) {
        vlSymsp->__Vcoverage[8401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x10U)))) {
        vlSymsp->__Vcoverage[8402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x11U)))) {
        vlSymsp->__Vcoverage[8403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x12U)))) {
        vlSymsp->__Vcoverage[8404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x13U)))) {
        vlSymsp->__Vcoverage[8405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x14U)))) {
        vlSymsp->__Vcoverage[8406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x15U)))) {
        vlSymsp->__Vcoverage[8407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x16U)))) {
        vlSymsp->__Vcoverage[8408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x17U)))) {
        vlSymsp->__Vcoverage[8409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x18U)))) {
        vlSymsp->__Vcoverage[8410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x19U)))) {
        vlSymsp->__Vcoverage[8411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1aU)))) {
        vlSymsp->__Vcoverage[8412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1bU)))) {
        vlSymsp->__Vcoverage[8413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1cU)))) {
        vlSymsp->__Vcoverage[8414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1dU)))) {
        vlSymsp->__Vcoverage[8415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1eU)))) {
        vlSymsp->__Vcoverage[8416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1fU)))) {
        vlSymsp->__Vcoverage[8417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU)));
    }
    vlSelf->__PVT__data = VL_SEL_IWII(77, vlSelf->__PVT__req, 0U, 0x20U);
    vlSelf->__PVT__len = (3U & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x20U, 2U));
    vlSelf->__PVT__type_ = (7U & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x4aU, 3U));
    vlSelf->__PVT__opaque = (0xffU & VL_SEL_IWII(77, vlSelf->__PVT__req, 0x42U, 8U));
    vlSelf->__PVT__addr = VL_SEL_IWII(77, vlSelf->__PVT__req, 0x22U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[8309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[8310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[8311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[8312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[8313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[8314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[8315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[8316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[8317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[8318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[8319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[8320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[8321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[8322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[8323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[8324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[8325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[8326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[8327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[8328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[8329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[8330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[8331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[8332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[8333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[8334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[8335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[8336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[8337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[8338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[8339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[8340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[8307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[8308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[8264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[8265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[8266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[8267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[8268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[8269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[8270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[8271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[8272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[8273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[8274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0U)))) {
        vlSymsp->__Vcoverage[8275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 1U)))) {
        vlSymsp->__Vcoverage[8276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 2U)))) {
        vlSymsp->__Vcoverage[8277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 3U)))) {
        vlSymsp->__Vcoverage[8278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 4U)))) {
        vlSymsp->__Vcoverage[8279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 5U)))) {
        vlSymsp->__Vcoverage[8280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 6U)))) {
        vlSymsp->__Vcoverage[8281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 7U)))) {
        vlSymsp->__Vcoverage[8282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 8U)))) {
        vlSymsp->__Vcoverage[8283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 9U)))) {
        vlSymsp->__Vcoverage[8284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xaU)))) {
        vlSymsp->__Vcoverage[8285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xbU)))) {
        vlSymsp->__Vcoverage[8286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xcU)))) {
        vlSymsp->__Vcoverage[8287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xdU)))) {
        vlSymsp->__Vcoverage[8288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xeU)))) {
        vlSymsp->__Vcoverage[8289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xfU)))) {
        vlSymsp->__Vcoverage[8290].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x10U)))) {
        vlSymsp->__Vcoverage[8291].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x11U)))) {
        vlSymsp->__Vcoverage[8292].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x12U)))) {
        vlSymsp->__Vcoverage[8293].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x13U)))) {
        vlSymsp->__Vcoverage[8294].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x14U)))) {
        vlSymsp->__Vcoverage[8295].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x15U)))) {
        vlSymsp->__Vcoverage[8296].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x16U)))) {
        vlSymsp->__Vcoverage[8297].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x17U)))) {
        vlSymsp->__Vcoverage[8298].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x18U)))) {
        vlSymsp->__Vcoverage[8299].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x19U)))) {
        vlSymsp->__Vcoverage[8300].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[8301].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[8302].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[8303].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[8304].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[8305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[8306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU)));
    }
}
