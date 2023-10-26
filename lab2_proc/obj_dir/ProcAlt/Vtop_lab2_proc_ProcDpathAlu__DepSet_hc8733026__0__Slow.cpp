// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcDpathAlu.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__0(Vtop_lab2_proc_ProcDpathAlu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 0U)))) {
        vlSymsp->__Vcoverage[7036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 1U)))) {
        vlSymsp->__Vcoverage[7037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 2U)))) {
        vlSymsp->__Vcoverage[7038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__fn), 3U)))) {
        vlSymsp->__Vcoverage[7039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__fn, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__fn), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[6972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[6973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[6974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[6975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[6976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[6977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[6978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[6979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[6980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[6981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[6982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[6983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[6984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[6985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[6986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[6987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[6988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[6989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[6990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[6991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[6992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[6993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[6994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[6995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[6996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[6997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[6998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[6999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in0 
        = vlSelf->__PVT__in0;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[7004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__in1 
        = vlSelf->__PVT__in1;
    vlSelf->__PVT__ops_lt = VL_LTS_III(32, vlSelf->__PVT__in0, vlSelf->__PVT__in1);
    vlSelf->__PVT__ops_ltu = (vlSelf->__PVT__in0 < vlSelf->__PVT__in1);
    if (((IData)(vlSelf->__PVT__ops_lt) ^ (IData)(vlSelf->__Vtogcov__ops_lt))) {
        vlSymsp->__Vcoverage[7073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_lt = vlSelf->__PVT__ops_lt;
    }
    if (((IData)(vlSelf->__PVT__ops_ltu) ^ (IData)(vlSelf->__Vtogcov__ops_ltu))) {
        vlSymsp->__Vcoverage[7074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_ltu = vlSelf->__PVT__ops_ltu;
    }
    if (((((((((0U == (IData)(vlSelf->__PVT__fn)) | 
               (1U == (IData)(vlSelf->__PVT__fn))) 
              | (2U == (IData)(vlSelf->__PVT__fn))) 
             | (3U == (IData)(vlSelf->__PVT__fn))) 
            | (4U == (IData)(vlSelf->__PVT__fn))) | 
           (5U == (IData)(vlSelf->__PVT__fn))) | (6U 
                                                  == (IData)(vlSelf->__PVT__fn))) 
         | (7U == (IData)(vlSelf->__PVT__fn)))) {
        if ((0U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  + vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[7075].fetch_add(1, std::memory_order_relaxed);
        } else if ((1U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  - vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[7076].fetch_add(1, std::memory_order_relaxed);
        } else if ((2U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  ^ vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[7077].fetch_add(1, std::memory_order_relaxed);
        } else if ((3U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  & vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[7078].fetch_add(1, std::memory_order_relaxed);
        } else if ((4U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  | vlSelf->__PVT__in1);
            vlSymsp->__Vcoverage[7079].fetch_add(1, std::memory_order_relaxed);
        } else if ((5U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  >> (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
            vlSymsp->__Vcoverage[7080].fetch_add(1, std::memory_order_relaxed);
        } else if ((6U == (IData)(vlSelf->__PVT__fn))) {
            vlSelf->__PVT__out = (vlSelf->__PVT__in0 
                                  << (0x1fU & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
            vlSymsp->__Vcoverage[7081].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__out = (0xfffffffeU & (vlSelf->__PVT__in0 
                                                 + vlSelf->__PVT__in1));
            vlSymsp->__Vcoverage[7082].fetch_add(1, std::memory_order_relaxed);
        }
    } else if ((8U == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__ops_lt));
        vlSymsp->__Vcoverage[7083].fetch_add(1, std::memory_order_relaxed);
    } else if ((9U == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_EXTEND_II(32,1, (IData)(vlSelf->__PVT__ops_ltu));
        vlSymsp->__Vcoverage[7084].fetch_add(1, std::memory_order_relaxed);
    } else if ((0xaU == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__in0, 
                                            (0x1fU 
                                             & VL_SEL_IIII(32, vlSelf->__PVT__in1, 0U, 5U)));
        vlSymsp->__Vcoverage[7085].fetch_add(1, std::memory_order_relaxed);
    } else if ((0xbU == (IData)(vlSelf->__PVT__fn))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7086].fetch_add(1, std::memory_order_relaxed);
    } else if (VL_LIKELY((0xcU == (IData)(vlSelf->__PVT__fn)))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[7087].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_STOP_MT("ProcDpathAlu.v", 38, "");
    }
    vlSymsp->__Vcoverage[7088].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__1(Vtop_lab2_proc_ProcDpathAlu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___stl_sequent__TOP__top__DUT__dpath__alu__1\n"); );
    // Body
    vlSelf->__PVT__ops_eq = vlSymsp->TOP__top__DUT__dpath__alu__cond_eq_comp.__PVT__out;
    if (((IData)(vlSelf->__PVT__ops_eq) ^ (IData)(vlSelf->__Vtogcov__ops_eq))) {
        vlSymsp->__Vcoverage[7072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ops_eq = vlSelf->__PVT__ops_eq;
    }
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcDpathAlu___configure_coverage(Vtop_lab2_proc_ProcDpathAlu* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathAlu___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6972]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6973]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6974]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6975]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6976]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6977]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6978]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6979]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6980]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6981]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6982]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6983]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6984]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6985]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6986]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6987]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6988]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6989]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6990]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6991]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6992]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6993]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6994]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6995]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6996]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6997]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6998]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6999]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7000]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7001]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7002]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7003]), first, "ProcDpathAlu.v", 12, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7004]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7005]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7006]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7007]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7008]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7009]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7010]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7011]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7012]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7013]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7014]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7015]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7016]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7017]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7018]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7019]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7020]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7021]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7022]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7023]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7024]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7025]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7026]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7027]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7028]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7029]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7030]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7031]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7032]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7033]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7034]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7035]), first, "ProcDpathAlu.v", 13, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7036]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7037]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7038]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7039]), first, "ProcDpathAlu.v", 14, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "fn[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7040]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7041]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7042]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7043]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7044]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7045]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7046]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7047]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7048]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7049]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7050]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7051]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7052]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7053]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7054]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7055]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7056]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7057]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7058]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7059]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7060]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7061]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7062]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7063]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7064]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7065]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7066]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7067]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7068]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7069]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7070]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7071]), first, "ProcDpathAlu.v", 15, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7072]), first, "ProcDpathAlu.v", 16, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_eq", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7073]), first, "ProcDpathAlu.v", 17, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_lt", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7074]), first, "ProcDpathAlu.v", 18, 23, "", "v_toggle/lab2_proc_ProcDpathAlu", "ops_ltu", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7075]), first, "ProcDpathAlu.v", 24, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "24");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7076]), first, "ProcDpathAlu.v", 25, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "25");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7077]), first, "ProcDpathAlu.v", 26, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "26");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7078]), first, "ProcDpathAlu.v", 27, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "27");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7079]), first, "ProcDpathAlu.v", 28, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "28");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7080]), first, "ProcDpathAlu.v", 29, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "29");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7081]), first, "ProcDpathAlu.v", 30, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "30");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7082]), first, "ProcDpathAlu.v", 31, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "31");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7083]), first, "ProcDpathAlu.v", 32, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7084]), first, "ProcDpathAlu.v", 33, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "33");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7085]), first, "ProcDpathAlu.v", 34, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "34");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7086]), first, "ProcDpathAlu.v", 35, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "35");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7087]), first, "ProcDpathAlu.v", 36, 15, "", "v_line/lab2_proc_ProcDpathAlu", "case", "36");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7088]), first, "ProcDpathAlu.v", 21, 3, "", "v_line/lab2_proc_ProcDpathAlu", "block", "21,23");
}
