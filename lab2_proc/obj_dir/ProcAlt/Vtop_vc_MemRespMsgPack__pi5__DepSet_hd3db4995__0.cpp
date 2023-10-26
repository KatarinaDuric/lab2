// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_MemRespMsgPack__pi5.h"

VL_INLINE_OPT void Vtop_vc_MemRespMsgPack__pi5___nba_sequent__TOP__top__mem__mem__memresp0_msg_pack__0(Vtop_vc_MemRespMsgPack__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsgPack__pi5___nba_sequent__TOP__top__mem__mem__memresp0_msg_pack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[8662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[8663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[8651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[8652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[8653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[8654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[8655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[8656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[8657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[8658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[8659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[8660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[8661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    VL_ASSIGNSEL_QI(47,11,0x24U, vlSelf->__PVT__resp, 
                    VL_CONCAT_III(11,3,8, (IData)(vlSelf->__PVT__type_), (IData)(vlSelf->__PVT__opaque)));
}

VL_INLINE_OPT void Vtop_vc_MemRespMsgPack__pi5___nba_comb__TOP__top__mem__mem__memresp0_msg_pack__0(Vtop_vc_MemRespMsgPack__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsgPack__pi5___nba_comb__TOP__top__mem__mem__memresp0_msg_pack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[8664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[8665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[8666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[8667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[8668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[8669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[8670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[8671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[8672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[8673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[8674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[8675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[8676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[8677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[8678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[8679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[8680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[8681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[8682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[8683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[8684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[8685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[8686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[8687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[8688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[8689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[8690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[8691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[8692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[8693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[8694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[8695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    VL_ASSIGNSEL_QQ(47,34,0U, vlSelf->__PVT__resp, 
                    VL_CONCAT_QII(34,2,32, (IData)(vlSelf->__PVT__len), vlSelf->__PVT__data));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2cU)))) {
        vlSymsp->__Vcoverage[8698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2dU)))) {
        vlSymsp->__Vcoverage[8699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2eU)))) {
        vlSymsp->__Vcoverage[8700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x24U)))) {
        vlSymsp->__Vcoverage[8701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x25U)))) {
        vlSymsp->__Vcoverage[8702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x26U)))) {
        vlSymsp->__Vcoverage[8703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x27U)))) {
        vlSymsp->__Vcoverage[8704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x28U)))) {
        vlSymsp->__Vcoverage[8705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x29U)))) {
        vlSymsp->__Vcoverage[8706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2aU)))) {
        vlSymsp->__Vcoverage[8707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2bU)))) {
        vlSymsp->__Vcoverage[8708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x22U)))) {
        vlSymsp->__Vcoverage[8709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x23U)))) {
        vlSymsp->__Vcoverage[8710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x20U)))) {
        vlSymsp->__Vcoverage[8711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x21U)))) {
        vlSymsp->__Vcoverage[8712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0U)))) {
        vlSymsp->__Vcoverage[8713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 1U)))) {
        vlSymsp->__Vcoverage[8714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 2U)))) {
        vlSymsp->__Vcoverage[8715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 3U)))) {
        vlSymsp->__Vcoverage[8716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 4U)))) {
        vlSymsp->__Vcoverage[8717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 5U)))) {
        vlSymsp->__Vcoverage[8718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 6U)))) {
        vlSymsp->__Vcoverage[8719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 7U)))) {
        vlSymsp->__Vcoverage[8720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 8U)))) {
        vlSymsp->__Vcoverage[8721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 9U)))) {
        vlSymsp->__Vcoverage[8722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xaU)))) {
        vlSymsp->__Vcoverage[8723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xbU)))) {
        vlSymsp->__Vcoverage[8724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xcU)))) {
        vlSymsp->__Vcoverage[8725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xdU)))) {
        vlSymsp->__Vcoverage[8726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xeU)))) {
        vlSymsp->__Vcoverage[8727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xfU)))) {
        vlSymsp->__Vcoverage[8728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x10U)))) {
        vlSymsp->__Vcoverage[8729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x11U)))) {
        vlSymsp->__Vcoverage[8730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x12U)))) {
        vlSymsp->__Vcoverage[8731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x13U)))) {
        vlSymsp->__Vcoverage[8732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x14U)))) {
        vlSymsp->__Vcoverage[8733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x15U)))) {
        vlSymsp->__Vcoverage[8734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x16U)))) {
        vlSymsp->__Vcoverage[8735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x17U)))) {
        vlSymsp->__Vcoverage[8736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x18U)))) {
        vlSymsp->__Vcoverage[8737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x19U)))) {
        vlSymsp->__Vcoverage[8738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1aU)))) {
        vlSymsp->__Vcoverage[8739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1bU)))) {
        vlSymsp->__Vcoverage[8740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1cU)))) {
        vlSymsp->__Vcoverage[8741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1dU)))) {
        vlSymsp->__Vcoverage[8742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1eU)))) {
        vlSymsp->__Vcoverage[8743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1fU)))) {
        vlSymsp->__Vcoverage[8744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1fU)));
    }
    vlSelf->__PVT__msg = vlSelf->__PVT__resp;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[8604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[8605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[8606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[8607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[8608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[8609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[8610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[8611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[8612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[8613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
}

VL_INLINE_OPT void Vtop_vc_MemRespMsgPack__pi5___nba_sequent__TOP__top__mem__mem__memresp1_msg_pack__0(Vtop_vc_MemRespMsgPack__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsgPack__pi5___nba_sequent__TOP__top__mem__mem__memresp1_msg_pack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 0U)))) {
        vlSymsp->__Vcoverage[8662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__len), 1U)))) {
        vlSymsp->__Vcoverage[8663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__len, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__len), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 0U)))) {
        vlSymsp->__Vcoverage[8651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 1U)))) {
        vlSymsp->__Vcoverage[8652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__type_), 2U)))) {
        vlSymsp->__Vcoverage[8653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__type_, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__type_), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 0U)))) {
        vlSymsp->__Vcoverage[8654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 1U)))) {
        vlSymsp->__Vcoverage[8655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 2U)))) {
        vlSymsp->__Vcoverage[8656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 3U)))) {
        vlSymsp->__Vcoverage[8657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 4U)))) {
        vlSymsp->__Vcoverage[8658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 5U)))) {
        vlSymsp->__Vcoverage[8659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 6U)))) {
        vlSymsp->__Vcoverage[8660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U) 
               ^ VL_BITSEL_IIII(8, (IData)(vlSelf->__Vtogcov__opaque), 7U)))) {
        vlSymsp->__Vcoverage[8661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__opaque, 
                        (1U & VL_BITSEL_IIII(8, (IData)(vlSelf->__PVT__opaque), 7U)));
    }
    VL_ASSIGNSEL_QI(47,11,0x24U, vlSelf->__PVT__resp, 
                    VL_CONCAT_III(11,3,8, (IData)(vlSelf->__PVT__type_), (IData)(vlSelf->__PVT__opaque)));
}

VL_INLINE_OPT void Vtop_vc_MemRespMsgPack__pi5___nba_comb__TOP__top__mem__mem__memresp1_msg_pack__0(Vtop_vc_MemRespMsgPack__pi5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_MemRespMsgPack__pi5___nba_comb__TOP__top__mem__mem__memresp1_msg_pack__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0U)))) {
        vlSymsp->__Vcoverage[8664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 1U)))) {
        vlSymsp->__Vcoverage[8665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 2U)))) {
        vlSymsp->__Vcoverage[8666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 3U)))) {
        vlSymsp->__Vcoverage[8667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 4U)))) {
        vlSymsp->__Vcoverage[8668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 5U)))) {
        vlSymsp->__Vcoverage[8669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 6U)))) {
        vlSymsp->__Vcoverage[8670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 7U)))) {
        vlSymsp->__Vcoverage[8671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 8U)))) {
        vlSymsp->__Vcoverage[8672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 9U)))) {
        vlSymsp->__Vcoverage[8673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xaU)))) {
        vlSymsp->__Vcoverage[8674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xbU)))) {
        vlSymsp->__Vcoverage[8675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xcU)))) {
        vlSymsp->__Vcoverage[8676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xdU)))) {
        vlSymsp->__Vcoverage[8677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xeU)))) {
        vlSymsp->__Vcoverage[8678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0xfU)))) {
        vlSymsp->__Vcoverage[8679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x10U)))) {
        vlSymsp->__Vcoverage[8680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x11U)))) {
        vlSymsp->__Vcoverage[8681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x12U)))) {
        vlSymsp->__Vcoverage[8682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x13U)))) {
        vlSymsp->__Vcoverage[8683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x14U)))) {
        vlSymsp->__Vcoverage[8684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x15U)))) {
        vlSymsp->__Vcoverage[8685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x16U)))) {
        vlSymsp->__Vcoverage[8686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x17U)))) {
        vlSymsp->__Vcoverage[8687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x18U)))) {
        vlSymsp->__Vcoverage[8688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x19U)))) {
        vlSymsp->__Vcoverage[8689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1aU)))) {
        vlSymsp->__Vcoverage[8690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1bU)))) {
        vlSymsp->__Vcoverage[8691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1cU)))) {
        vlSymsp->__Vcoverage[8692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1dU)))) {
        vlSymsp->__Vcoverage[8693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1eU)))) {
        vlSymsp->__Vcoverage[8694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__data, 0x1fU)))) {
        vlSymsp->__Vcoverage[8695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__data, 0x1fU)));
    }
    VL_ASSIGNSEL_QQ(47,34,0U, vlSelf->__PVT__resp, 
                    VL_CONCAT_QII(34,2,32, (IData)(vlSelf->__PVT__len), vlSelf->__PVT__data));
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2cU)))) {
        vlSymsp->__Vcoverage[8698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2dU)))) {
        vlSymsp->__Vcoverage[8699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2eU)))) {
        vlSymsp->__Vcoverage[8700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x24U)))) {
        vlSymsp->__Vcoverage[8701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x25U)))) {
        vlSymsp->__Vcoverage[8702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x26U)))) {
        vlSymsp->__Vcoverage[8703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x27U)))) {
        vlSymsp->__Vcoverage[8704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x28U)))) {
        vlSymsp->__Vcoverage[8705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x29U)))) {
        vlSymsp->__Vcoverage[8706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2aU)))) {
        vlSymsp->__Vcoverage[8707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x2bU)))) {
        vlSymsp->__Vcoverage[8708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x22U)))) {
        vlSymsp->__Vcoverage[8709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x23U)))) {
        vlSymsp->__Vcoverage[8710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x20U)))) {
        vlSymsp->__Vcoverage[8711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x21U)))) {
        vlSymsp->__Vcoverage[8712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0U)))) {
        vlSymsp->__Vcoverage[8713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 1U)))) {
        vlSymsp->__Vcoverage[8714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 2U)))) {
        vlSymsp->__Vcoverage[8715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 3U)))) {
        vlSymsp->__Vcoverage[8716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 4U)))) {
        vlSymsp->__Vcoverage[8717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 5U)))) {
        vlSymsp->__Vcoverage[8718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 6U)))) {
        vlSymsp->__Vcoverage[8719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 7U)))) {
        vlSymsp->__Vcoverage[8720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 8U)))) {
        vlSymsp->__Vcoverage[8721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 9U)))) {
        vlSymsp->__Vcoverage[8722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xaU)))) {
        vlSymsp->__Vcoverage[8723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xbU)))) {
        vlSymsp->__Vcoverage[8724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xcU)))) {
        vlSymsp->__Vcoverage[8725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xdU)))) {
        vlSymsp->__Vcoverage[8726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xeU)))) {
        vlSymsp->__Vcoverage[8727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0xfU)))) {
        vlSymsp->__Vcoverage[8728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x10U)))) {
        vlSymsp->__Vcoverage[8729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x11U)))) {
        vlSymsp->__Vcoverage[8730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x12U)))) {
        vlSymsp->__Vcoverage[8731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x13U)))) {
        vlSymsp->__Vcoverage[8732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x14U)))) {
        vlSymsp->__Vcoverage[8733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x15U)))) {
        vlSymsp->__Vcoverage[8734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x16U)))) {
        vlSymsp->__Vcoverage[8735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x17U)))) {
        vlSymsp->__Vcoverage[8736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x18U)))) {
        vlSymsp->__Vcoverage[8737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x19U)))) {
        vlSymsp->__Vcoverage[8738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1aU)))) {
        vlSymsp->__Vcoverage[8739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1bU)))) {
        vlSymsp->__Vcoverage[8740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1cU)))) {
        vlSymsp->__Vcoverage[8741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1dU)))) {
        vlSymsp->__Vcoverage[8742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1eU)))) {
        vlSymsp->__Vcoverage[8743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__resp, 0x1fU)))) {
        vlSymsp->__Vcoverage[8744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__resp, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__resp, 0x1fU)));
    }
    vlSelf->__PVT__msg = vlSelf->__PVT__resp;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[8604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[8605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[8606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[8607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[8608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[8609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[8610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[8611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[8612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[8613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__msg, 0x2eU)));
    }
}
