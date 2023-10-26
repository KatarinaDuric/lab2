// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestRandDelayMem_2ports4B__pi3.h"

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___ico_sequent__TOP__top__mem__0(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___ico_sequent__TOP__top__mem__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[1362].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__mem__vc_trace.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__memreq1_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__mem__mem.__PVT__clk = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__0(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mem_clear) ^ (IData)(vlSelf->__Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_clear = vlSelf->__PVT__mem_clear;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__mem_clear = vlSelf->__PVT__mem_clear;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__mem__vc_trace.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__mem.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__1(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp0_rdy))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp0_rdy = vlSelf->__PVT__memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp0_rdy;
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy 
        = vlSelf->__PVT__memresp0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__2(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_sequent__TOP__top__mem__2\n"); );
    // Body
    vlSelf->__PVT__mem_memresp0_rdy = vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__mem_memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memresp0_rdy = vlSelf->__PVT__mem_memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy 
        = vlSelf->__PVT__mem_memresp0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_comb__TOP__top__mem__0(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_comb__TOP__top__mem__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq0_val) ^ (IData)(vlSelf->__Vtogcov__memreq0_val))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_val = vlSelf->__PVT__memreq0_val;
    }
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val 
        = vlSelf->__PVT__memreq0_val;
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val 
        = vlSelf->__PVT__memreq0_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_comb__TOP__top__mem__1(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___act_comb__TOP__top__mem__1\n"); );
    // Body
    vlSelf->__PVT__mem_memreq0_val = vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val;
    vlSelf->__PVT__memreq0_rdy = vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy;
    VL_ASSIGN_W(77,vlSelf->__PVT__mem_memreq0_msg, vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg);
    if (((IData)(vlSelf->__PVT__mem_memreq0_val) ^ (IData)(vlSelf->__Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memreq0_val = vlSelf->__PVT__mem_memreq0_val;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val 
        = vlSelf->__PVT__mem_memreq0_val;
    if (((IData)(vlSelf->__PVT__memreq0_rdy) ^ (IData)(vlSelf->__Vtogcov__memreq0_rdy))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_rdy = vlSelf->__PVT__memreq0_rdy;
    }
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy 
        = vlSelf->__PVT__memreq0_rdy;
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0U)))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 1U)))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 2U)))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 3U)))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 4U)))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 5U)))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 6U)))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 7U)))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 8U)))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 9U)))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg, vlSelf->__PVT__mem_memreq0_msg);
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_sequent__TOP__top__mem__0(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_sequent__TOP__top__mem__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mem_clear) ^ (IData)(vlSelf->__Vtogcov__mem_clear))) {
        vlSymsp->__Vcoverage[1364].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_clear = vlSelf->__PVT__mem_clear;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__mem_clear = vlSelf->__PVT__mem_clear;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[1363].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memreq1_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__mem.__PVT__reset = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_sequent__TOP__top__mem__1(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_sequent__TOP__top__mem__1\n"); );
    // Body
    vlSymsp->TOP__top__mem__vc_trace.__PVT__reset = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__0(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__0\n"); );
    // Body
    vlSelf->__PVT__mem_memresp0_val = vlSymsp->TOP__top__mem__mem.__PVT__memresp0_val;
    vlSelf->__PVT__mem_memreq0_rdy = vlSymsp->TOP__top__mem__mem.__PVT__memreq0_rdy;
    if (((IData)(vlSelf->__PVT__mem_memresp0_val) ^ (IData)(vlSelf->__Vtogcov__mem_memresp0_val))) {
        vlSymsp->__Vcoverage[1811].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memresp0_val = vlSelf->__PVT__mem_memresp0_val;
    }
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_val 
        = vlSelf->__PVT__mem_memresp0_val;
    if (((IData)(vlSelf->__PVT__mem_memreq0_rdy) ^ (IData)(vlSelf->__Vtogcov__mem_memreq0_rdy))) {
        vlSymsp->__Vcoverage[1654].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memreq0_rdy = vlSelf->__PVT__mem_memreq0_rdy;
    }
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_rdy 
        = vlSelf->__PVT__mem_memreq0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__1(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memresp1_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp1_rdy))) {
        vlSymsp->__Vcoverage[1605].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp1_rdy = vlSelf->__PVT__memresp1_rdy;
    }
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp1_rdy;
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_rdy 
        = vlSelf->__PVT__memresp1_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__2(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__2\n"); );
    // Body
    vlSelf->__PVT__mem_memresp1_val = vlSymsp->TOP__top__mem__mem.__PVT__memresp1_val;
    vlSelf->__PVT__mem_memreq1_rdy = vlSymsp->TOP__top__mem__mem.__PVT__memreq1_rdy;
    if (((IData)(vlSelf->__PVT__mem_memresp1_val) ^ (IData)(vlSelf->__Vtogcov__mem_memresp1_val))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memresp1_val = vlSelf->__PVT__mem_memresp1_val;
    }
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_val 
        = vlSelf->__PVT__mem_memresp1_val;
    if (((IData)(vlSelf->__PVT__mem_memreq1_rdy) ^ (IData)(vlSelf->__Vtogcov__mem_memreq1_rdy))) {
        vlSymsp->__Vcoverage[1733].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memreq1_rdy = vlSelf->__PVT__mem_memreq1_rdy;
    }
    vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_rdy 
        = vlSelf->__PVT__mem_memreq1_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__3(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__3\n"); );
    // Body
    vlSelf->__PVT__memresp0_val = vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_val;
    if (((IData)(vlSelf->__PVT__memresp0_val) ^ (IData)(vlSelf->__Vtogcov__memresp0_val))) {
        vlSymsp->__Vcoverage[1555].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp0_val = vlSelf->__PVT__memresp0_val;
    }
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__val 
        = vlSelf->__PVT__memresp0_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__4(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__4\n"); );
    // Body
    vlSelf->__PVT__memresp1_val = vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_val;
    if (((IData)(vlSelf->__PVT__memresp1_val) ^ (IData)(vlSelf->__Vtogcov__memresp1_val))) {
        vlSymsp->__Vcoverage[1604].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp1_val = vlSelf->__PVT__memresp1_val;
    }
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__val 
        = vlSelf->__PVT__memresp1_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__5(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__5\n"); );
    // Body
    vlSelf->__PVT__mem_memresp1_msg = vlSymsp->TOP__top__mem__mem.__PVT__memresp1_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0U)))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 1U)))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 2U)))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 3U)))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 4U)))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 5U)))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 6U)))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 7U)))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 8U)))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 9U)))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__mem_memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp1_msg, 0x2eU)));
    }
    vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_msg 
        = vlSelf->__PVT__mem_memresp1_msg;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__6(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__6\n"); );
    // Body
    vlSelf->__PVT__mem_memresp0_msg = vlSymsp->TOP__top__mem__mem.__PVT__memresp0_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0U)))) {
        vlSymsp->__Vcoverage[1813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 1U)))) {
        vlSymsp->__Vcoverage[1814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 2U)))) {
        vlSymsp->__Vcoverage[1815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 3U)))) {
        vlSymsp->__Vcoverage[1816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 4U)))) {
        vlSymsp->__Vcoverage[1817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 5U)))) {
        vlSymsp->__Vcoverage[1818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 6U)))) {
        vlSymsp->__Vcoverage[1819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 7U)))) {
        vlSymsp->__Vcoverage[1820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 8U)))) {
        vlSymsp->__Vcoverage[1821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 9U)))) {
        vlSymsp->__Vcoverage[1822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__mem_memresp0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__mem_memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__mem_memresp0_msg, 0x2eU)));
    }
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_msg 
        = vlSelf->__PVT__mem_memresp0_msg;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__7(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__7\n"); );
    // Body
    vlSelf->__PVT__mem_memresp1_rdy = vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__mem_memresp1_rdy) ^ (IData)(vlSelf->__Vtogcov__mem_memresp1_rdy))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memresp1_rdy = vlSelf->__PVT__mem_memresp1_rdy;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memresp1_rdy 
        = vlSelf->__PVT__mem_memresp1_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__8(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__8\n"); );
    // Body
    vlSelf->__PVT__memresp1_msg = vlSymsp->TOP__top__mem__rand_resp_delay1.__PVT__out_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0U)))) {
        vlSymsp->__Vcoverage[1606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 1U)))) {
        vlSymsp->__Vcoverage[1607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 2U)))) {
        vlSymsp->__Vcoverage[1608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 3U)))) {
        vlSymsp->__Vcoverage[1609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 4U)))) {
        vlSymsp->__Vcoverage[1610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 5U)))) {
        vlSymsp->__Vcoverage[1611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 6U)))) {
        vlSymsp->__Vcoverage[1612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 7U)))) {
        vlSymsp->__Vcoverage[1613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 8U)))) {
        vlSymsp->__Vcoverage[1614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 9U)))) {
        vlSymsp->__Vcoverage[1615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1616].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1617].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1618].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1619].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1620].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1621].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1622].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1623].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1624].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__memresp1_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp1_msg, 0x2eU)));
    }
    vlSelf->__Vcellinp__memresp1_trace__msg = vlSelf->__PVT__memresp1_msg;
    vlSymsp->TOP__top__mem__memresp1_trace.__PVT__msg 
        = vlSelf->__Vcellinp__memresp1_trace__msg;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__9(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__9\n"); );
    // Body
    vlSelf->__PVT__memresp0_msg = vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_msg;
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0U)))) {
        vlSymsp->__Vcoverage[1557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 1U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 1U)))) {
        vlSymsp->__Vcoverage[1558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 2U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 2U)))) {
        vlSymsp->__Vcoverage[1559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 3U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 3U)))) {
        vlSymsp->__Vcoverage[1560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 4U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 4U)))) {
        vlSymsp->__Vcoverage[1561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 5U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 5U)))) {
        vlSymsp->__Vcoverage[1562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 6U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 6U)))) {
        vlSymsp->__Vcoverage[1563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 7U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 7U)))) {
        vlSymsp->__Vcoverage[1564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 8U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 8U)))) {
        vlSymsp->__Vcoverage[1565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 9U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 9U)))) {
        vlSymsp->__Vcoverage[1566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xaU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xbU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xcU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xdU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xeU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1571].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xfU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x10U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x11U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x12U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x13U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x14U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1577].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x15U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1578].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x16U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1579].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x17U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1580].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x18U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1581].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x19U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1582].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1583].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x20U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x21U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x22U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x23U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x24U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x25U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x26U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x27U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x28U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x29U) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(47, vlSelf->__Vtogcov__memresp0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__memresp0_msg, 
                        (1U & VL_BITSEL_IQII(47, vlSelf->__PVT__memresp0_msg, 0x2eU)));
    }
    vlSelf->__Vcellinp__memresp0_trace__msg = vlSelf->__PVT__memresp0_msg;
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__msg 
        = vlSelf->__Vcellinp__memresp0_trace__msg;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__10(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__10\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq1_val) ^ (IData)(vlSelf->__Vtogcov__memreq1_val))) {
        vlSymsp->__Vcoverage[1476].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq1_val = vlSelf->__PVT__memreq1_val;
    }
    vlSymsp->TOP__top__mem__memreq1_trace.__PVT__val 
        = vlSelf->__PVT__memreq1_val;
    vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_val 
        = vlSelf->__PVT__memreq1_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__11(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__11\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0U)))) {
        vlSymsp->__Vcoverage[1478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 1U)))) {
        vlSymsp->__Vcoverage[1479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 2U)))) {
        vlSymsp->__Vcoverage[1480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 3U)))) {
        vlSymsp->__Vcoverage[1481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 4U)))) {
        vlSymsp->__Vcoverage[1482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 5U)))) {
        vlSymsp->__Vcoverage[1483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 6U)))) {
        vlSymsp->__Vcoverage[1484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 7U)))) {
        vlSymsp->__Vcoverage[1485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 8U)))) {
        vlSymsp->__Vcoverage[1486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 9U)))) {
        vlSymsp->__Vcoverage[1487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1499].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1500].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1506].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1507].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1511].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1512].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1513].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1514].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1515].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1516].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1517].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1518].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1519].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1520].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1521].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1522].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1523].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1524].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[1525].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[1526].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[1527].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[1528].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[1529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[1530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[1531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[1532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[1533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[1534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[1535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[1536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[1537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[1538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[1539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[1540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[1541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[1542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[1543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[1544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[1548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[1549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[1550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[1551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[1552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[1553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq1_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[1554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq1_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq1_trace__msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_msg, vlSelf->__PVT__memreq1_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__memreq1_trace.__PVT__msg, vlSelf->__Vcellinp__memreq1_trace__msg);
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__12(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__12\n"); );
    // Body
    vlSelf->__PVT__mem_memreq1_val = vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_val;
    vlSelf->__PVT__memreq1_rdy = vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__mem_memreq1_val) ^ (IData)(vlSelf->__Vtogcov__mem_memreq1_val))) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memreq1_val = vlSelf->__PVT__mem_memreq1_val;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memreq1_val 
        = vlSelf->__PVT__mem_memreq1_val;
    if (((IData)(vlSelf->__PVT__memreq1_rdy) ^ (IData)(vlSelf->__Vtogcov__memreq1_rdy))) {
        vlSymsp->__Vcoverage[1477].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq1_rdy = vlSelf->__PVT__memreq1_rdy;
    }
    vlSymsp->TOP__top__mem__memreq1_trace.__PVT__rdy 
        = vlSelf->__PVT__memreq1_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__13(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__13\n"); );
    // Body
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0U)))) {
        vlSymsp->__Vcoverage[1399].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 1U)))) {
        vlSymsp->__Vcoverage[1400].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 2U)))) {
        vlSymsp->__Vcoverage[1401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 3U)))) {
        vlSymsp->__Vcoverage[1402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 4U)))) {
        vlSymsp->__Vcoverage[1403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 5U)))) {
        vlSymsp->__Vcoverage[1404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 6U)))) {
        vlSymsp->__Vcoverage[1405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 7U)))) {
        vlSymsp->__Vcoverage[1406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 8U)))) {
        vlSymsp->__Vcoverage[1407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 9U)))) {
        vlSymsp->__Vcoverage[1408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1433].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1434].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1435].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1436].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1437].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1438].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1439].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1440].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1441].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1442].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1443].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1444].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1445].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[1446].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[1447].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[1448].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[1449].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[1450].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[1451].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[1452].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[1453].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[1454].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[1455].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[1456].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[1457].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[1458].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[1459].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[1460].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[1461].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[1462].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[1463].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[1464].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[1465].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[1466].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[1467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[1468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[1469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[1470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[1471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[1472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[1473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[1474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__memreq0_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[1475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__memreq0_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSelf->__Vcellinp__memreq0_trace__msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_msg, vlSelf->__PVT__memreq0_msg);
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__memreq0_trace.__PVT__msg, vlSelf->__Vcellinp__memreq0_trace__msg);
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__14(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__14\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__mem_memreq1_msg, vlSymsp->TOP__top__mem__rand_req_delay1.__PVT__out_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0U)))) {
        vlSymsp->__Vcoverage[1734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 1U)))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 2U)))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 3U)))) {
        vlSymsp->__Vcoverage[1737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 4U)))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 5U)))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 6U)))) {
        vlSymsp->__Vcoverage[1740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 7U)))) {
        vlSymsp->__Vcoverage[1741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 8U)))) {
        vlSymsp->__Vcoverage[1742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 9U)))) {
        vlSymsp->__Vcoverage[1743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[1798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[1799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[1800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[1801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[1802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[1803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[1804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[1805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[1806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[1807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[1808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[1809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq1_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[1810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__mem_memreq1_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq1_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem.__PVT__memreq1_msg, vlSelf->__PVT__mem_memreq1_msg);
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__15(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__15\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__memresp0_rdy))) {
        vlSymsp->__Vcoverage[1556].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memresp0_rdy = vlSelf->__PVT__memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__memresp0_trace.__PVT__rdy 
        = vlSelf->__PVT__memresp0_rdy;
    vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__out_rdy 
        = vlSelf->__PVT__memresp0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__16(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__16\n"); );
    // Body
    vlSelf->__PVT__mem_memresp0_rdy = vlSymsp->TOP__top__mem__rand_resp_delay0.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__mem_memresp0_rdy) ^ (IData)(vlSelf->__Vtogcov__mem_memresp0_rdy))) {
        vlSymsp->__Vcoverage[1812].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memresp0_rdy = vlSelf->__PVT__mem_memresp0_rdy;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memresp0_rdy 
        = vlSelf->__PVT__mem_memresp0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__17(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__17\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__memreq0_val) ^ (IData)(vlSelf->__Vtogcov__memreq0_val))) {
        vlSymsp->__Vcoverage[1397].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_val = vlSelf->__PVT__memreq0_val;
    }
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__val 
        = vlSelf->__PVT__memreq0_val;
    vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_val 
        = vlSelf->__PVT__memreq0_val;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__18(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__18\n"); );
    // Body
    vlSelf->__PVT__mem_memreq0_val = vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_val;
    vlSelf->__PVT__memreq0_rdy = vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__in_rdy;
    if (((IData)(vlSelf->__PVT__mem_memreq0_val) ^ (IData)(vlSelf->__Vtogcov__mem_memreq0_val))) {
        vlSymsp->__Vcoverage[1653].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mem_memreq0_val = vlSelf->__PVT__mem_memreq0_val;
    }
    vlSymsp->TOP__top__mem__mem.__PVT__memreq0_val 
        = vlSelf->__PVT__mem_memreq0_val;
    if (((IData)(vlSelf->__PVT__memreq0_rdy) ^ (IData)(vlSelf->__Vtogcov__memreq0_rdy))) {
        vlSymsp->__Vcoverage[1398].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__memreq0_rdy = vlSelf->__PVT__memreq0_rdy;
    }
    vlSymsp->TOP__top__mem__memreq0_trace.__PVT__rdy 
        = vlSelf->__PVT__memreq0_rdy;
}

VL_INLINE_OPT void Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__19(Vtop_vc_TestRandDelayMem_2ports4B__pi3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop_vc_TestRandDelayMem_2ports4B__pi3___nba_comb__TOP__top__mem__19\n"); );
    // Body
    VL_ASSIGN_W(77,vlSelf->__PVT__mem_memreq0_msg, vlSymsp->TOP__top__mem__rand_req_delay0.__PVT__out_msg);
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0U)))) {
        vlSymsp->__Vcoverage[1655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 1U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 1U)))) {
        vlSymsp->__Vcoverage[1656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(1U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 2U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 2U)))) {
        vlSymsp->__Vcoverage[1657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(2U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 3U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 3U)))) {
        vlSymsp->__Vcoverage[1658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(3U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 4U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 4U)))) {
        vlSymsp->__Vcoverage[1659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(4U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 5U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 5U)))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(5U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 6U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 6U)))) {
        vlSymsp->__Vcoverage[1661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(6U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 7U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 7U)))) {
        vlSymsp->__Vcoverage[1662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(7U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 8U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 8U)))) {
        vlSymsp->__Vcoverage[1663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(8U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 9U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 9U)))) {
        vlSymsp->__Vcoverage[1664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(9U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xaU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[1665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xaU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xbU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[1666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xbU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xcU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[1667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xcU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xdU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[1668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xdU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xeU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[1669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xeU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xfU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[1670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0xfU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x10U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[1671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x10U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x11U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[1672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x11U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x12U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[1673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x12U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x13U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[1674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x13U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x14U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[1675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x14U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x15U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[1676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x15U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x16U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[1677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x16U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x17U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[1678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x17U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x18U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[1679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x18U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x19U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[1680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x19U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[1681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[1682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[1683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[1684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[1685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[1686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x1fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x20U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[1687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x20U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x21U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[1688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x21U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x22U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[1689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x22U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x23U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[1690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x23U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x24U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[1691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x24U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x25U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[1692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x25U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x26U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[1693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x26U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x27U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[1694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x27U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x28U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[1695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x28U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x29U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[1696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x29U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[1697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[1698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[1699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[1700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[1701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[1702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x2fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x30U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[1703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x30U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x31U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[1704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x31U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x32U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[1705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x32U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x33U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[1706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x33U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x34U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[1707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x34U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x35U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[1708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x35U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x36U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x36U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x37U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x37U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x38U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[1711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x38U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x39U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[1712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x39U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[1713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3dU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3dU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3eU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[1717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3eU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3fU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[1718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x3fU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x3fU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x40U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x40U)))) {
        vlSymsp->__Vcoverage[1719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x40U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x40U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x41U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x41U)))) {
        vlSymsp->__Vcoverage[1720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x41U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x41U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x42U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x42U)))) {
        vlSymsp->__Vcoverage[1721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x42U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x42U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x43U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x43U)))) {
        vlSymsp->__Vcoverage[1722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x43U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x43U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x44U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x44U)))) {
        vlSymsp->__Vcoverage[1723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x44U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x44U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x45U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x45U)))) {
        vlSymsp->__Vcoverage[1724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x45U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x45U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x46U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x46U)))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x46U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x46U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x47U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x47U)))) {
        vlSymsp->__Vcoverage[1726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x47U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x47U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x48U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x48U)))) {
        vlSymsp->__Vcoverage[1727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x48U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x48U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x49U) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x49U)))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x49U, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x49U)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4aU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4aU)))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4aU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4aU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4bU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4bU)))) {
        vlSymsp->__Vcoverage[1730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4bU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4bU)));
    }
    if ((1U & (VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4cU) 
               ^ VL_BITSEL_IWII(77, vlSelf->__Vtogcov__mem_memreq0_msg, 0x4cU)))) {
        vlSymsp->__Vcoverage[1731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_WI(0x4cU, vlSelf->__Vtogcov__mem_memreq0_msg, 
                        (1U & VL_BITSEL_IWII(77, vlSelf->__PVT__mem_memreq0_msg, 0x4cU)));
    }
    VL_ASSIGN_W(77,vlSymsp->TOP__top__mem__mem.__PVT__memreq0_msg, vlSelf->__PVT__mem_memreq0_msg);
}
