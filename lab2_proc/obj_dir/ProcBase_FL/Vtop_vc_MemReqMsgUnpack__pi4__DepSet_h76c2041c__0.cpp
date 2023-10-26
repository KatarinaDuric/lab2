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
        vlSymsp->__Vcoverage[5382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[5383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[5384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[5385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[5386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[5387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x30U)))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x31U)))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x32U)))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x33U)))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x34U)))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x35U)))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x36U)))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x37U)))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x38U)))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x39U)))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[5442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[5443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[5444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[5445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x40U)))) {
        vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x41U)))) {
        vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x42U)))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x43U)))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x44U)))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x45U)))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x46U)))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x47U)))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x48U)))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x49U)))) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__PVT__req, vlSelf->__PVT__msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4aU)))) {
        vlSymsp->__Vcoverage[5536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4bU)))) {
        vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4cU)))) {
        vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x42U)))) {
        vlSymsp->__Vcoverage[5539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x43U)))) {
        vlSymsp->__Vcoverage[5540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x44U)))) {
        vlSymsp->__Vcoverage[5541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x45U)))) {
        vlSymsp->__Vcoverage[5542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x46U)))) {
        vlSymsp->__Vcoverage[5543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x47U)))) {
        vlSymsp->__Vcoverage[5544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x48U)))) {
        vlSymsp->__Vcoverage[5545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x49U)))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x22U)))) {
        vlSymsp->__Vcoverage[5547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x23U)))) {
        vlSymsp->__Vcoverage[5548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x24U)))) {
        vlSymsp->__Vcoverage[5549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x25U)))) {
        vlSymsp->__Vcoverage[5550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x26U)))) {
        vlSymsp->__Vcoverage[5551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x27U)))) {
        vlSymsp->__Vcoverage[5552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x28U)))) {
        vlSymsp->__Vcoverage[5553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x29U)))) {
        vlSymsp->__Vcoverage[5554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2aU)))) {
        vlSymsp->__Vcoverage[5555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2bU)))) {
        vlSymsp->__Vcoverage[5556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2cU)))) {
        vlSymsp->__Vcoverage[5557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2dU)))) {
        vlSymsp->__Vcoverage[5558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2eU)))) {
        vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2fU)))) {
        vlSymsp->__Vcoverage[5560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x30U)))) {
        vlSymsp->__Vcoverage[5561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x31U)))) {
        vlSymsp->__Vcoverage[5562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x32U)))) {
        vlSymsp->__Vcoverage[5563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x33U)))) {
        vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x34U)))) {
        vlSymsp->__Vcoverage[5565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x35U)))) {
        vlSymsp->__Vcoverage[5566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x36U)))) {
        vlSymsp->__Vcoverage[5567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x37U)))) {
        vlSymsp->__Vcoverage[5568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x38U)))) {
        vlSymsp->__Vcoverage[5569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x39U)))) {
        vlSymsp->__Vcoverage[5570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3aU)))) {
        vlSymsp->__Vcoverage[5571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3bU)))) {
        vlSymsp->__Vcoverage[5572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3cU)))) {
        vlSymsp->__Vcoverage[5573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3dU)))) {
        vlSymsp->__Vcoverage[5574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3eU)))) {
        vlSymsp->__Vcoverage[5575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3fU)))) {
        vlSymsp->__Vcoverage[5576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x40U)))) {
        vlSymsp->__Vcoverage[5577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x41U)))) {
        vlSymsp->__Vcoverage[5578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x20U)))) {
        vlSymsp->__Vcoverage[5579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x21U)))) {
        vlSymsp->__Vcoverage[5580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0U)))) {
        vlSymsp->__Vcoverage[5581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 1U)))) {
        vlSymsp->__Vcoverage[5582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 2U)))) {
        vlSymsp->__Vcoverage[5583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 3U)))) {
        vlSymsp->__Vcoverage[5584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 4U)))) {
        vlSymsp->__Vcoverage[5585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 5U)))) {
        vlSymsp->__Vcoverage[5586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 6U)))) {
        vlSymsp->__Vcoverage[5587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 7U)))) {
        vlSymsp->__Vcoverage[5588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 8U)))) {
        vlSymsp->__Vcoverage[5589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 9U)))) {
        vlSymsp->__Vcoverage[5590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xaU)))) {
        vlSymsp->__Vcoverage[5591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xbU)))) {
        vlSymsp->__Vcoverage[5592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xcU)))) {
        vlSymsp->__Vcoverage[5593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xdU)))) {
        vlSymsp->__Vcoverage[5594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xeU)))) {
        vlSymsp->__Vcoverage[5595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xfU)))) {
        vlSymsp->__Vcoverage[5596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x10U)))) {
        vlSymsp->__Vcoverage[5597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x11U)))) {
        vlSymsp->__Vcoverage[5598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x12U)))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x13U)))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x14U)))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x15U)))) {
        vlSymsp->__Vcoverage[5602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x16U)))) {
        vlSymsp->__Vcoverage[5603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x17U)))) {
        vlSymsp->__Vcoverage[5604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x18U)))) {
        vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x19U)))) {
        vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1aU)))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1bU)))) {
        vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1cU)))) {
        vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1dU)))) {
        vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1eU)))) {
        vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1fU)))) {
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[5506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[5507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[5508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[5509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[5510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[5511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[5512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[5513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[5514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[5515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[5516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[5517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[5518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[5519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[5520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[5521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[5522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[5523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[5524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[5525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[5526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[5527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[5528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[5529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[5530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[5531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[5532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[5533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[5459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[5460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[5461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[5469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0U)))) {
        vlSymsp->__Vcoverage[5470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 1U)))) {
        vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 2U)))) {
        vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 3U)))) {
        vlSymsp->__Vcoverage[5473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 4U)))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 5U)))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 6U)))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 7U)))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 8U)))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 9U)))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xaU)))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xbU)))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xcU)))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xdU)))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xeU)))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xfU)))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x10U)))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x11U)))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x12U)))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x13U)))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x14U)))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x15U)))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x16U)))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x17U)))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x18U)))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x19U)))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5382].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[5383].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[5384].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[5385].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[5386].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[5387].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[5388].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[5389].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[5390].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[5391].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[5392].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[5393].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[5394].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[5395].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[5396].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[5397].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[5398].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[5399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[5400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[5401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[5402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[5403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[5404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[5405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[5406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[5407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[5408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[5409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[5410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[5411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[5412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[5413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[5414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[5415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[5416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[5417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[5418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[5419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[5420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[5421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[5422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[5423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[5424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[5425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[5426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[5427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[5428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[5429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x30U)))) {
        vlSymsp->__Vcoverage[5430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x31U)))) {
        vlSymsp->__Vcoverage[5431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x32U)))) {
        vlSymsp->__Vcoverage[5432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x33U)))) {
        vlSymsp->__Vcoverage[5433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x34U)))) {
        vlSymsp->__Vcoverage[5434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x35U)))) {
        vlSymsp->__Vcoverage[5435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x36U)))) {
        vlSymsp->__Vcoverage[5436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x37U)))) {
        vlSymsp->__Vcoverage[5437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x38U)))) {
        vlSymsp->__Vcoverage[5438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x39U)))) {
        vlSymsp->__Vcoverage[5439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[5440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[5441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[5442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[5443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[5444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[5445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x40U)))) {
        vlSymsp->__Vcoverage[5446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x41U)))) {
        vlSymsp->__Vcoverage[5447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x42U)))) {
        vlSymsp->__Vcoverage[5448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x43U)))) {
        vlSymsp->__Vcoverage[5449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x44U)))) {
        vlSymsp->__Vcoverage[5450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x45U)))) {
        vlSymsp->__Vcoverage[5451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x46U)))) {
        vlSymsp->__Vcoverage[5452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x47U)))) {
        vlSymsp->__Vcoverage[5453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x48U)))) {
        vlSymsp->__Vcoverage[5454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x49U)))) {
        vlSymsp->__Vcoverage[5455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[5456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[5457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[5458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__PVT__req, vlSelf->__PVT__msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4aU)))) {
        vlSymsp->__Vcoverage[5536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4bU)))) {
        vlSymsp->__Vcoverage[5537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x4cU)))) {
        vlSymsp->__Vcoverage[5538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x4cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x42U)))) {
        vlSymsp->__Vcoverage[5539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x43U)))) {
        vlSymsp->__Vcoverage[5540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x44U)))) {
        vlSymsp->__Vcoverage[5541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x45U)))) {
        vlSymsp->__Vcoverage[5542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x46U)))) {
        vlSymsp->__Vcoverage[5543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x47U)))) {
        vlSymsp->__Vcoverage[5544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x48U)))) {
        vlSymsp->__Vcoverage[5545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x49U)))) {
        vlSymsp->__Vcoverage[5546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x22U)))) {
        vlSymsp->__Vcoverage[5547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x23U)))) {
        vlSymsp->__Vcoverage[5548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x24U)))) {
        vlSymsp->__Vcoverage[5549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x25U)))) {
        vlSymsp->__Vcoverage[5550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x26U)))) {
        vlSymsp->__Vcoverage[5551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x27U)))) {
        vlSymsp->__Vcoverage[5552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x28U)))) {
        vlSymsp->__Vcoverage[5553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x29U)))) {
        vlSymsp->__Vcoverage[5554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2aU)))) {
        vlSymsp->__Vcoverage[5555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2bU)))) {
        vlSymsp->__Vcoverage[5556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2cU)))) {
        vlSymsp->__Vcoverage[5557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2dU)))) {
        vlSymsp->__Vcoverage[5558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2eU)))) {
        vlSymsp->__Vcoverage[5559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x2fU)))) {
        vlSymsp->__Vcoverage[5560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x30U)))) {
        vlSymsp->__Vcoverage[5561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x31U)))) {
        vlSymsp->__Vcoverage[5562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x32U)))) {
        vlSymsp->__Vcoverage[5563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x33U)))) {
        vlSymsp->__Vcoverage[5564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x34U)))) {
        vlSymsp->__Vcoverage[5565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x35U)))) {
        vlSymsp->__Vcoverage[5566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x36U)))) {
        vlSymsp->__Vcoverage[5567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x37U)))) {
        vlSymsp->__Vcoverage[5568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x38U)))) {
        vlSymsp->__Vcoverage[5569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x39U)))) {
        vlSymsp->__Vcoverage[5570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3aU)))) {
        vlSymsp->__Vcoverage[5571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3bU)))) {
        vlSymsp->__Vcoverage[5572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3cU)))) {
        vlSymsp->__Vcoverage[5573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3dU)))) {
        vlSymsp->__Vcoverage[5574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3eU)))) {
        vlSymsp->__Vcoverage[5575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x3fU)))) {
        vlSymsp->__Vcoverage[5576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x40U)))) {
        vlSymsp->__Vcoverage[5577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x41U)))) {
        vlSymsp->__Vcoverage[5578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x20U)))) {
        vlSymsp->__Vcoverage[5579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x21U)))) {
        vlSymsp->__Vcoverage[5580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0U)))) {
        vlSymsp->__Vcoverage[5581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 1U)))) {
        vlSymsp->__Vcoverage[5582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 2U)))) {
        vlSymsp->__Vcoverage[5583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 3U)))) {
        vlSymsp->__Vcoverage[5584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 4U)))) {
        vlSymsp->__Vcoverage[5585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 5U)))) {
        vlSymsp->__Vcoverage[5586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 6U)))) {
        vlSymsp->__Vcoverage[5587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 7U)))) {
        vlSymsp->__Vcoverage[5588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 8U)))) {
        vlSymsp->__Vcoverage[5589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 9U)))) {
        vlSymsp->__Vcoverage[5590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xaU)))) {
        vlSymsp->__Vcoverage[5591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xbU)))) {
        vlSymsp->__Vcoverage[5592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xcU)))) {
        vlSymsp->__Vcoverage[5593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xdU)))) {
        vlSymsp->__Vcoverage[5594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xeU)))) {
        vlSymsp->__Vcoverage[5595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0xfU)))) {
        vlSymsp->__Vcoverage[5596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x10U)))) {
        vlSymsp->__Vcoverage[5597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x11U)))) {
        vlSymsp->__Vcoverage[5598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x12U)))) {
        vlSymsp->__Vcoverage[5599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x13U)))) {
        vlSymsp->__Vcoverage[5600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x14U)))) {
        vlSymsp->__Vcoverage[5601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x15U)))) {
        vlSymsp->__Vcoverage[5602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x16U)))) {
        vlSymsp->__Vcoverage[5603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x17U)))) {
        vlSymsp->__Vcoverage[5604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x18U)))) {
        vlSymsp->__Vcoverage[5605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x19U)))) {
        vlSymsp->__Vcoverage[5606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1aU)))) {
        vlSymsp->__Vcoverage[5607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1bU)))) {
        vlSymsp->__Vcoverage[5608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1cU)))) {
        vlSymsp->__Vcoverage[5609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1dU)))) {
        vlSymsp->__Vcoverage[5610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1eU)))) {
        vlSymsp->__Vcoverage[5611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__req, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__req, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__req, 0x1fU)))) {
        vlSymsp->__Vcoverage[5612].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[5504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[5505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[5506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[5507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[5508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[5509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[5510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[5511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[5512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[5513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[5514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[5515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[5516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[5517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[5518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[5519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[5520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[5521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[5522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[5523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[5524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[5525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[5526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[5527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[5528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[5529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[5530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[5531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[5532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[5533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[5534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[5535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[5502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[5503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[5459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[5460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[5461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[5462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[5463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[5464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[5465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[5466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[5467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[5468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[5469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0U)))) {
        vlSymsp->__Vcoverage[5470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 1U)))) {
        vlSymsp->__Vcoverage[5471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 2U)))) {
        vlSymsp->__Vcoverage[5472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 3U)))) {
        vlSymsp->__Vcoverage[5473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 4U)))) {
        vlSymsp->__Vcoverage[5474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 5U)))) {
        vlSymsp->__Vcoverage[5475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 6U)))) {
        vlSymsp->__Vcoverage[5476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 7U)))) {
        vlSymsp->__Vcoverage[5477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 8U)))) {
        vlSymsp->__Vcoverage[5478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 9U)))) {
        vlSymsp->__Vcoverage[5479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xaU)))) {
        vlSymsp->__Vcoverage[5480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xbU)))) {
        vlSymsp->__Vcoverage[5481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xcU)))) {
        vlSymsp->__Vcoverage[5482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xdU)))) {
        vlSymsp->__Vcoverage[5483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xeU)))) {
        vlSymsp->__Vcoverage[5484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0xfU)))) {
        vlSymsp->__Vcoverage[5485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x10U)))) {
        vlSymsp->__Vcoverage[5486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x11U)))) {
        vlSymsp->__Vcoverage[5487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x12U)))) {
        vlSymsp->__Vcoverage[5488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x13U)))) {
        vlSymsp->__Vcoverage[5489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x14U)))) {
        vlSymsp->__Vcoverage[5490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x15U)))) {
        vlSymsp->__Vcoverage[5491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x16U)))) {
        vlSymsp->__Vcoverage[5492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x17U)))) {
        vlSymsp->__Vcoverage[5493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x18U)))) {
        vlSymsp->__Vcoverage[5494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x19U)))) {
        vlSymsp->__Vcoverage[5495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[5496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[5497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[5498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[5499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[5500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[5501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__addr, 0x1fU)));
    }
}
