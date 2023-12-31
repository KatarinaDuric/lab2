// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_TestSinkFile__P20_PBa.h"

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___ico_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___ico_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[4239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[4285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[4286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[4287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[4288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
    vlSelf->__PVT__done = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                           & ((IData)(vlSelf->__PVT__index) 
                              == (IData)(vlSelf->__PVT__index_max)));
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[4275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[4329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[4276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___act_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

void Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
void Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__0\n"); );
    // Body
    vlSymsp->__Vcoverage[4328].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSymsp->__Vcoverage[4386].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[4377].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4379].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4381].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4383].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[4385].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4387].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__failed = vlSelf->__PVT__failed;
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset_reg;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__failed = 0U;
        vlSymsp->__Vcoverage[4373].fetch_add(1, std::memory_order_relaxed);
    } else if (((~ (IData)(vlSelf->__PVT__reset)) & (IData)(vlSelf->__PVT__go))) {
        if ((vlSelf->__PVT__msg == vlSelf->__PVT__m_curr)) {
            Vtop___024unit____Vdpiimwrap_pass_TOP____024unit();
            VL_WRITEF("     [ passed ] expected = %x, actual = %x\n",
                      32,((9U >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[4367].fetch_add(1, std::memory_order_relaxed);
        } else {
            Vtop___024unit____Vdpiimwrap_fail_TOP____024unit();
            vlSelf->__Vdly__failed = 1U;
            VL_WRITEF("     [ FAILED ] expected = %x, actual = %x\n",
                      32,((9U >= (IData)(vlSelf->__PVT__index))
                           ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                           : 0U),32,vlSelf->__PVT__msg);
            vlSymsp->__Vcoverage[4369].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[4370].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[4371].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[4372].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[4374].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vdly__reset_reg = vlSelf->__PVT__reset;
    vlSymsp->__Vcoverage[4290].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__failed = vlSelf->__Vdly__failed;
    vlSelf->__PVT__reset_reg = vlSelf->__Vdly__reset_reg;
    if (((IData)(vlSelf->__PVT__failed) ^ (IData)(vlSelf->__Vtogcov__failed))) {
        vlSymsp->__Vcoverage[4330].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__failed = vlSelf->__PVT__failed;
    }
    if (((IData)(vlSelf->__PVT__reset_reg) ^ (IData)(vlSelf->__Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[4289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset_reg = vlSelf->__PVT__reset_reg;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 0U)))) {
        vlSymsp->__Vcoverage[4285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 1U)))) {
        vlSymsp->__Vcoverage[4286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 2U)))) {
        vlSymsp->__Vcoverage[4287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_max), 3U)))) {
        vlSymsp->__Vcoverage[4288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_max, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_max), 3U)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__2(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[4240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__3(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__3\n"); );
    // Body
    vlSelf->__PVT__index = vlSymsp->TOP__top__sink__sink__index_reg.__PVT__q;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 0U)))) {
        vlSymsp->__Vcoverage[4281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 1U)))) {
        vlSymsp->__Vcoverage[4282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 2U)))) {
        vlSymsp->__Vcoverage[4283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index), 3U)))) {
        vlSymsp->__Vcoverage[4284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index), 3U)));
    }
    vlSelf->__PVT__index_next = (0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->__PVT__index)));
    vlSelf->__PVT__m_curr = ((9U >= (IData)(vlSelf->__PVT__index))
                              ? vlSelf->__PVT__m[vlSelf->__PVT__index]
                              : 0U);
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 0U)))) {
        vlSymsp->__Vcoverage[4277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 1U)))) {
        vlSymsp->__Vcoverage[4278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 2U)))) {
        vlSymsp->__Vcoverage[4279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__index_next), 3U)))) {
        vlSymsp->__Vcoverage[4280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__index_next, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__index_next), 3U)));
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__d 
        = vlSelf->__PVT__index_next;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0U)))) {
        vlSymsp->__Vcoverage[4335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 1U)))) {
        vlSymsp->__Vcoverage[4336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 2U)))) {
        vlSymsp->__Vcoverage[4337].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 3U)))) {
        vlSymsp->__Vcoverage[4338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 4U)))) {
        vlSymsp->__Vcoverage[4339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 5U)))) {
        vlSymsp->__Vcoverage[4340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 6U)))) {
        vlSymsp->__Vcoverage[4341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 7U)))) {
        vlSymsp->__Vcoverage[4342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 8U)))) {
        vlSymsp->__Vcoverage[4343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 9U)))) {
        vlSymsp->__Vcoverage[4344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xaU)))) {
        vlSymsp->__Vcoverage[4345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xbU)))) {
        vlSymsp->__Vcoverage[4346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xcU)))) {
        vlSymsp->__Vcoverage[4347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xdU)))) {
        vlSymsp->__Vcoverage[4348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xeU)))) {
        vlSymsp->__Vcoverage[4349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0xfU)))) {
        vlSymsp->__Vcoverage[4350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x10U)))) {
        vlSymsp->__Vcoverage[4351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x11U)))) {
        vlSymsp->__Vcoverage[4352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x12U)))) {
        vlSymsp->__Vcoverage[4353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x13U)))) {
        vlSymsp->__Vcoverage[4354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x14U)))) {
        vlSymsp->__Vcoverage[4355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x15U)))) {
        vlSymsp->__Vcoverage[4356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x16U)))) {
        vlSymsp->__Vcoverage[4357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x17U)))) {
        vlSymsp->__Vcoverage[4358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x18U)))) {
        vlSymsp->__Vcoverage[4359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x19U)))) {
        vlSymsp->__Vcoverage[4360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1aU)))) {
        vlSymsp->__Vcoverage[4361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1bU)))) {
        vlSymsp->__Vcoverage[4362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1cU)))) {
        vlSymsp->__Vcoverage[4363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1dU)))) {
        vlSymsp->__Vcoverage[4364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1eU)))) {
        vlSymsp->__Vcoverage[4365].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__m_curr, 0x1fU)))) {
        vlSymsp->__Vcoverage[4366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__m_curr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__m_curr, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__4(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_sequent__TOP__top__sink__sink__4\n"); );
    // Body
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__0(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__0\n"); );
    // Body
    vlSelf->__PVT__done = ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                           & ((IData)(vlSelf->__PVT__index) 
                              == (IData)(vlSelf->__PVT__index_max)));
    if (((IData)(vlSelf->__PVT__done) ^ (IData)(vlSelf->__Vtogcov__done))) {
        vlSymsp->__Vcoverage[4275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__done = vlSelf->__PVT__done;
    }
    vlSelf->__PVT__rdy = (1U & ((~ (IData)(vlSelf->__PVT__reset_reg)) 
                                & (~ (IData)(vlSelf->__PVT__done))));
    if (((IData)(vlSelf->__PVT__rdy) ^ (IData)(vlSelf->__Vtogcov__rdy))) {
        vlSymsp->__Vcoverage[4242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rdy = vlSelf->__PVT__rdy;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__1(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__val) ^ (IData)(vlSelf->__Vtogcov__val))) {
        vlSymsp->__Vcoverage[4241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val = vlSelf->__PVT__val;
    }
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__2(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__2\n"); );
    // Body
    vlSelf->__PVT__go = ((IData)(vlSelf->__PVT__val) 
                         & (IData)(vlSelf->__PVT__rdy));
    vlSelf->__PVT__index_en = ((IData)(vlSelf->__PVT__val) 
                               & (IData)(vlSelf->__PVT__rdy));
    if (((IData)(vlSelf->__PVT__go) ^ (IData)(vlSelf->__Vtogcov__go))) {
        vlSymsp->__Vcoverage[4329].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__go = vlSelf->__PVT__go;
    }
    if (((IData)(vlSelf->__PVT__index_en) ^ (IData)(vlSelf->__Vtogcov__index_en))) {
        vlSymsp->__Vcoverage[4276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__index_en = vlSelf->__PVT__index_en;
    }
    vlSymsp->TOP__top__sink__sink__index_reg.__PVT__en 
        = vlSelf->__PVT__index_en;
}

VL_INLINE_OPT void Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__3(Vtop_vc_TestSinkFile__P20_PBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_vc_TestSinkFile__P20_PBa___nba_comb__TOP__top__sink__sink__3\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0U)))) {
        vlSymsp->__Vcoverage[4243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 1U)))) {
        vlSymsp->__Vcoverage[4244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 2U)))) {
        vlSymsp->__Vcoverage[4245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 3U)))) {
        vlSymsp->__Vcoverage[4246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 4U)))) {
        vlSymsp->__Vcoverage[4247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 5U)))) {
        vlSymsp->__Vcoverage[4248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 6U)))) {
        vlSymsp->__Vcoverage[4249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 7U)))) {
        vlSymsp->__Vcoverage[4250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 8U)))) {
        vlSymsp->__Vcoverage[4251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 9U)))) {
        vlSymsp->__Vcoverage[4252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xaU)))) {
        vlSymsp->__Vcoverage[4253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xbU)))) {
        vlSymsp->__Vcoverage[4254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xcU)))) {
        vlSymsp->__Vcoverage[4255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xdU)))) {
        vlSymsp->__Vcoverage[4256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xeU)))) {
        vlSymsp->__Vcoverage[4257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0xfU)))) {
        vlSymsp->__Vcoverage[4258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x10U)))) {
        vlSymsp->__Vcoverage[4259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x11U)))) {
        vlSymsp->__Vcoverage[4260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x12U)))) {
        vlSymsp->__Vcoverage[4261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x13U)))) {
        vlSymsp->__Vcoverage[4262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x14U)))) {
        vlSymsp->__Vcoverage[4263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x15U)))) {
        vlSymsp->__Vcoverage[4264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x16U)))) {
        vlSymsp->__Vcoverage[4265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x17U)))) {
        vlSymsp->__Vcoverage[4266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x18U)))) {
        vlSymsp->__Vcoverage[4267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x19U)))) {
        vlSymsp->__Vcoverage[4268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[4269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[4270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[4271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[4272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[4273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[4274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg, 0x1fU)));
    }
}
