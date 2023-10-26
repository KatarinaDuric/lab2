// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_multiplier2.h"

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__0(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__istream_rdy) ^ (IData)(vlSelf->__Vtogcov__istream_rdy))) {
        vlSymsp->__Vcoverage[8878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_rdy = vlSelf->__PVT__istream_rdy;
    }
    if (((IData)(vlSelf->__PVT__ostream_val) ^ (IData)(vlSelf->__Vtogcov__ostream_val))) {
        vlSymsp->__Vcoverage[8943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_val = vlSelf->__PVT__ostream_val;
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 0U)))) {
        vlSymsp->__Vcoverage[9041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 1U)))) {
        vlSymsp->__Vcoverage[9042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 2U)))) {
        vlSymsp->__Vcoverage[9043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 3U)))) {
        vlSymsp->__Vcoverage[9044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 4U)))) {
        vlSymsp->__Vcoverage[9045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U) 
               ^ VL_BITSEL_IIII(6, (IData)(vlSelf->__Vtogcov__counter), 5U)))) {
        vlSymsp->__Vcoverage[9046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__counter, 
                        (1U & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__counter), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[8945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[8946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[8947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[8949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[8950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[8951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[8952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[8953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[8954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8969].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0U)))) {
        vlSymsp->__Vcoverage[9047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 1U)))) {
        vlSymsp->__Vcoverage[9048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 2U)))) {
        vlSymsp->__Vcoverage[9049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 3U)))) {
        vlSymsp->__Vcoverage[9050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 4U)))) {
        vlSymsp->__Vcoverage[9051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 5U)))) {
        vlSymsp->__Vcoverage[9052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 6U)))) {
        vlSymsp->__Vcoverage[9053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 7U)))) {
        vlSymsp->__Vcoverage[9054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 8U)))) {
        vlSymsp->__Vcoverage[9055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 9U)))) {
        vlSymsp->__Vcoverage[9056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xaU)))) {
        vlSymsp->__Vcoverage[9057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xbU)))) {
        vlSymsp->__Vcoverage[9058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xcU)))) {
        vlSymsp->__Vcoverage[9059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xdU)))) {
        vlSymsp->__Vcoverage[9060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xeU)))) {
        vlSymsp->__Vcoverage[9061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0xfU)))) {
        vlSymsp->__Vcoverage[9062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x10U)))) {
        vlSymsp->__Vcoverage[9063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x11U)))) {
        vlSymsp->__Vcoverage[9064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x12U)))) {
        vlSymsp->__Vcoverage[9065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x13U)))) {
        vlSymsp->__Vcoverage[9066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x14U)))) {
        vlSymsp->__Vcoverage[9067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x15U)))) {
        vlSymsp->__Vcoverage[9068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x16U)))) {
        vlSymsp->__Vcoverage[9069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x17U)))) {
        vlSymsp->__Vcoverage[9070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x18U)))) {
        vlSymsp->__Vcoverage[9071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x19U)))) {
        vlSymsp->__Vcoverage[9072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_reg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_reg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0U)))) {
        vlSymsp->__Vcoverage[9079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 1U)))) {
        vlSymsp->__Vcoverage[9080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 2U)))) {
        vlSymsp->__Vcoverage[9081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 3U)))) {
        vlSymsp->__Vcoverage[9082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 4U)))) {
        vlSymsp->__Vcoverage[9083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 5U)))) {
        vlSymsp->__Vcoverage[9084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 6U)))) {
        vlSymsp->__Vcoverage[9085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 7U)))) {
        vlSymsp->__Vcoverage[9086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 8U)))) {
        vlSymsp->__Vcoverage[9087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 9U)))) {
        vlSymsp->__Vcoverage[9088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xaU)))) {
        vlSymsp->__Vcoverage[9089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xbU)))) {
        vlSymsp->__Vcoverage[9090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xcU)))) {
        vlSymsp->__Vcoverage[9091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xdU)))) {
        vlSymsp->__Vcoverage[9092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xeU)))) {
        vlSymsp->__Vcoverage[9093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0xfU)))) {
        vlSymsp->__Vcoverage[9094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x10U)))) {
        vlSymsp->__Vcoverage[9095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x11U)))) {
        vlSymsp->__Vcoverage[9096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x12U)))) {
        vlSymsp->__Vcoverage[9097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x13U)))) {
        vlSymsp->__Vcoverage[9098].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x14U)))) {
        vlSymsp->__Vcoverage[9099].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x15U)))) {
        vlSymsp->__Vcoverage[9100].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x16U)))) {
        vlSymsp->__Vcoverage[9101].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x17U)))) {
        vlSymsp->__Vcoverage[9102].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x18U)))) {
        vlSymsp->__Vcoverage[9103].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x19U)))) {
        vlSymsp->__Vcoverage[9104].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1aU)))) {
        vlSymsp->__Vcoverage[9105].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1bU)))) {
        vlSymsp->__Vcoverage[9106].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1cU)))) {
        vlSymsp->__Vcoverage[9107].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1dU)))) {
        vlSymsp->__Vcoverage[9108].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1eU)))) {
        vlSymsp->__Vcoverage[9109].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_reg, 0x1fU)))) {
        vlSymsp->__Vcoverage[9110].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b_reg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_reg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__b 
        = vlSelf->__PVT__ostream_msg;
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__1(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[8876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__2(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[8875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__3(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__ostream_rdy) ^ (IData)(vlSelf->__Vtogcov__ostream_rdy))) {
        vlSymsp->__Vcoverage[8944].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostream_rdy = vlSelf->__PVT__ostream_rdy;
    }
    if (((IData)(vlSelf->__PVT__istream_val) ^ (IData)(vlSelf->__Vtogcov__istream_val))) {
        vlSymsp->__Vcoverage[8877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__istream_val = vlSelf->__PVT__istream_val;
    }
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__4(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__4\n"); );
    // Body
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0U)))) {
        vlSymsp->__Vcoverage[8879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 1U)))) {
        vlSymsp->__Vcoverage[8880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(1U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 2U)))) {
        vlSymsp->__Vcoverage[8881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(2U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 3U)))) {
        vlSymsp->__Vcoverage[8882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(3U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 4U)))) {
        vlSymsp->__Vcoverage[8883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(4U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 5U)))) {
        vlSymsp->__Vcoverage[8884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(5U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 6U)))) {
        vlSymsp->__Vcoverage[8885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(6U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 7U)))) {
        vlSymsp->__Vcoverage[8886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(7U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 8U)))) {
        vlSymsp->__Vcoverage[8887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(8U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 9U)))) {
        vlSymsp->__Vcoverage[8888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(9U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[8889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xaU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[8890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xbU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[8891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xcU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[8892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xdU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[8893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xeU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[8894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0xfU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[8895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x10U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[8896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x11U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[8897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x12U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[8898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x13U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[8899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x14U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[8900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x15U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[8901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x16U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[8902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x17U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[8903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x18U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[8904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x19U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[8905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[8906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[8907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[8908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[8909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[8910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x1fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x20U)))) {
        vlSymsp->__Vcoverage[8911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x20U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x21U)))) {
        vlSymsp->__Vcoverage[8912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x21U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x21U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x22U)))) {
        vlSymsp->__Vcoverage[8913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x22U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x22U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x23U)))) {
        vlSymsp->__Vcoverage[8914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x23U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x23U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x24U)))) {
        vlSymsp->__Vcoverage[8915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x24U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x24U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x25U)))) {
        vlSymsp->__Vcoverage[8916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x25U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x25U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x26U)))) {
        vlSymsp->__Vcoverage[8917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x26U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x26U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x27U)))) {
        vlSymsp->__Vcoverage[8918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x27U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x27U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x28U)))) {
        vlSymsp->__Vcoverage[8919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x28U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x28U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x29U)))) {
        vlSymsp->__Vcoverage[8920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x29U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x29U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2aU)))) {
        vlSymsp->__Vcoverage[8921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2bU)))) {
        vlSymsp->__Vcoverage[8922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2cU)))) {
        vlSymsp->__Vcoverage[8923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2dU)))) {
        vlSymsp->__Vcoverage[8924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2eU)))) {
        vlSymsp->__Vcoverage[8925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x2fU)))) {
        vlSymsp->__Vcoverage[8926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x2fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x2fU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x30U)))) {
        vlSymsp->__Vcoverage[8927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x30U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x30U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x31U)))) {
        vlSymsp->__Vcoverage[8928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x31U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x31U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x32U)))) {
        vlSymsp->__Vcoverage[8929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x32U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x32U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x33U)))) {
        vlSymsp->__Vcoverage[8930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x33U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x33U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x34U)))) {
        vlSymsp->__Vcoverage[8931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x34U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x34U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x35U)))) {
        vlSymsp->__Vcoverage[8932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x35U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x35U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x36U)))) {
        vlSymsp->__Vcoverage[8933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x36U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x36U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x37U)))) {
        vlSymsp->__Vcoverage[8934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x37U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x37U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x38U)))) {
        vlSymsp->__Vcoverage[8935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x38U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x38U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x39U)))) {
        vlSymsp->__Vcoverage[8936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x39U, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x39U)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3aU)))) {
        vlSymsp->__Vcoverage[8937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3aU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3aU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3bU)))) {
        vlSymsp->__Vcoverage[8938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3bU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3bU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3cU)))) {
        vlSymsp->__Vcoverage[8939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3cU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3cU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3dU)))) {
        vlSymsp->__Vcoverage[8940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3dU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3dU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3eU)))) {
        vlSymsp->__Vcoverage[8941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3eU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3eU)));
    }
    if ((1U & (VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU) 
               ^ VL_BITSEL_IQII(64, vlSelf->__Vtogcov__istream_msg, 0x3fU)))) {
        vlSymsp->__Vcoverage[8942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vtogcov__istream_msg, 
                        (1U & VL_BITSEL_IQII(64, vlSelf->__PVT__istream_msg, 0x3fU)));
    }
    vlSelf->__PVT__req_msg_a = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0x20U, 0x20U);
    vlSelf->__PVT__req_msg_b = VL_SEL_IQII(64, vlSelf->__PVT__istream_msg, 0U, 0x20U);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0U)))) {
        vlSymsp->__Vcoverage[8977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 1U)))) {
        vlSymsp->__Vcoverage[8978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 2U)))) {
        vlSymsp->__Vcoverage[8979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 3U)))) {
        vlSymsp->__Vcoverage[8980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 4U)))) {
        vlSymsp->__Vcoverage[8981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 5U)))) {
        vlSymsp->__Vcoverage[8982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 6U)))) {
        vlSymsp->__Vcoverage[8983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 7U)))) {
        vlSymsp->__Vcoverage[8984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 8U)))) {
        vlSymsp->__Vcoverage[8985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 9U)))) {
        vlSymsp->__Vcoverage[8986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xaU)))) {
        vlSymsp->__Vcoverage[8987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xbU)))) {
        vlSymsp->__Vcoverage[8988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xcU)))) {
        vlSymsp->__Vcoverage[8989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xdU)))) {
        vlSymsp->__Vcoverage[8990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xeU)))) {
        vlSymsp->__Vcoverage[8991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0xfU)))) {
        vlSymsp->__Vcoverage[8992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x10U)))) {
        vlSymsp->__Vcoverage[8993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x11U)))) {
        vlSymsp->__Vcoverage[8994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x12U)))) {
        vlSymsp->__Vcoverage[8995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x13U)))) {
        vlSymsp->__Vcoverage[8996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x14U)))) {
        vlSymsp->__Vcoverage[8997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x15U)))) {
        vlSymsp->__Vcoverage[8998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x16U)))) {
        vlSymsp->__Vcoverage[8999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x17U)))) {
        vlSymsp->__Vcoverage[9000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x18U)))) {
        vlSymsp->__Vcoverage[9001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x19U)))) {
        vlSymsp->__Vcoverage[9002].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1aU)))) {
        vlSymsp->__Vcoverage[9003].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1bU)))) {
        vlSymsp->__Vcoverage[9004].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1cU)))) {
        vlSymsp->__Vcoverage[9005].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1dU)))) {
        vlSymsp->__Vcoverage[9006].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1eU)))) {
        vlSymsp->__Vcoverage[9007].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_a, 0x1fU)))) {
        vlSymsp->__Vcoverage[9008].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__req_msg_a, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_a, 0x1fU)));
    }
    vlSelf->__Vcellinp__ls_block____pinNumber1 = ((IData)(vlSelf->__PVT__istream_rdy)
                                                   ? vlSelf->__PVT__req_msg_a
                                                   : vlSelf->__PVT__a_reg);
    vlSelf->__Vcellinp__add_mul_block____pinNumber1 
        = ((IData)(vlSelf->__PVT__istream_rdy) ? vlSelf->__PVT__req_msg_a
            : vlSelf->__PVT__a_reg);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0U)))) {
        vlSymsp->__Vcoverage[9009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 1U)))) {
        vlSymsp->__Vcoverage[9010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 2U)))) {
        vlSymsp->__Vcoverage[9011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 3U)))) {
        vlSymsp->__Vcoverage[9012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 4U)))) {
        vlSymsp->__Vcoverage[9013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 5U)))) {
        vlSymsp->__Vcoverage[9014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 6U)))) {
        vlSymsp->__Vcoverage[9015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 7U)))) {
        vlSymsp->__Vcoverage[9016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 8U)))) {
        vlSymsp->__Vcoverage[9017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 9U)))) {
        vlSymsp->__Vcoverage[9018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xaU)))) {
        vlSymsp->__Vcoverage[9019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xbU)))) {
        vlSymsp->__Vcoverage[9020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xcU)))) {
        vlSymsp->__Vcoverage[9021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xdU)))) {
        vlSymsp->__Vcoverage[9022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xeU)))) {
        vlSymsp->__Vcoverage[9023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0xfU)))) {
        vlSymsp->__Vcoverage[9024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x10U)))) {
        vlSymsp->__Vcoverage[9025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x11U)))) {
        vlSymsp->__Vcoverage[9026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x12U)))) {
        vlSymsp->__Vcoverage[9027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x13U)))) {
        vlSymsp->__Vcoverage[9028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x14U)))) {
        vlSymsp->__Vcoverage[9029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x15U)))) {
        vlSymsp->__Vcoverage[9030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x16U)))) {
        vlSymsp->__Vcoverage[9031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x17U)))) {
        vlSymsp->__Vcoverage[9032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x18U)))) {
        vlSymsp->__Vcoverage[9033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x19U)))) {
        vlSymsp->__Vcoverage[9034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1aU)))) {
        vlSymsp->__Vcoverage[9035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1bU)))) {
        vlSymsp->__Vcoverage[9036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1cU)))) {
        vlSymsp->__Vcoverage[9037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1dU)))) {
        vlSymsp->__Vcoverage[9038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1eU)))) {
        vlSymsp->__Vcoverage[9039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__req_msg_b, 0x1fU)))) {
        vlSymsp->__Vcoverage[9040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__req_msg_b, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__req_msg_b, 0x1fU)));
    }
    vlSelf->__Vfunc_jump__0__b = (0x7fU & ((IData)(vlSelf->__PVT__istream_rdy)
                                            ? VL_SEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U, 7U)
                                            : VL_SEL_IIII(32, vlSelf->__PVT__b_reg, 1U, 7U)));
    if ((0U == (IData)(vlSelf->__Vfunc_jump__0__b))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 8U;
        vlSymsp->__Vcoverage[9212].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x40U == (IData)(vlSelf->__Vfunc_jump__0__b))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 7U;
        vlSymsp->__Vcoverage[9213].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x20U == (0x3fU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 6U;
        vlSymsp->__Vcoverage[9214].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 5U;
        vlSymsp->__Vcoverage[9215].fetch_add(1, std::memory_order_relaxed);
    } else if ((8U == (0xfU & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 4U;
        vlSymsp->__Vcoverage[9216].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (7U & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 3U;
        vlSymsp->__Vcoverage[9217].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (3U & (IData)(vlSelf->__Vfunc_jump__0__b)))) {
        vlSelf->__Vfunc_jump__0__Vfuncout = 2U;
        vlSymsp->__Vcoverage[9218].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vfunc_jump__0__Vfuncout = 1U;
        vlSymsp->__Vcoverage[9219].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9220].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__ls_block____pinNumber2 = vlSelf->__Vfunc_jump__0__Vfuncout;
    vlSelf->__Vfunc_jump__1__b = (0x7fU & ((IData)(vlSelf->__PVT__istream_rdy)
                                            ? VL_SEL_IIII(32, vlSelf->__PVT__req_msg_b, 1U, 7U)
                                            : VL_SEL_IIII(32, vlSelf->__PVT__b_reg, 1U, 7U)));
    if ((0U == (IData)(vlSelf->__Vfunc_jump__1__b))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 8U;
        vlSymsp->__Vcoverage[9212].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x40U == (IData)(vlSelf->__Vfunc_jump__1__b))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 7U;
        vlSymsp->__Vcoverage[9213].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x20U == (0x3fU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 6U;
        vlSymsp->__Vcoverage[9214].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x10U == (0x1fU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 5U;
        vlSymsp->__Vcoverage[9215].fetch_add(1, std::memory_order_relaxed);
    } else if ((8U == (0xfU & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 4U;
        vlSymsp->__Vcoverage[9216].fetch_add(1, std::memory_order_relaxed);
    } else if ((4U == (7U & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 3U;
        vlSymsp->__Vcoverage[9217].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (3U & (IData)(vlSelf->__Vfunc_jump__1__b)))) {
        vlSelf->__Vfunc_jump__1__Vfuncout = 2U;
        vlSymsp->__Vcoverage[9218].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vfunc_jump__1__Vfuncout = 1U;
        vlSymsp->__Vcoverage[9219].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[9220].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__Vcellinp__rs_block____pinNumber2 = vlSelf->__Vfunc_jump__1__Vfuncout;
    vlSelf->__Vcellinp__rs_block____pinNumber1 = ((IData)(vlSelf->__PVT__istream_rdy)
                                                   ? vlSelf->__PVT__req_msg_b
                                                   : vlSelf->__PVT__b_reg);
    vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__a 
        = vlSelf->__Vcellinp__ls_block____pinNumber1;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__a 
        = vlSelf->__Vcellinp__add_mul_block____pinNumber1;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__shamt 
        = vlSelf->__Vcellinp__ls_block____pinNumber2;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__shamt 
        = vlSelf->__Vcellinp__rs_block____pinNumber2;
    vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__a 
        = vlSelf->__Vcellinp__rs_block____pinNumber1;
}

VL_ATTR_COLD void Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__5(Vtop_multiplier2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___stl_sequent__TOP__top__DUT__dpath__imul__multi__5\n"); );
    // Body
    vlSelf->__PVT__a_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__ls_block.__PVT__result;
    vlSelf->__PVT__msg_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__add_mul_block.__PVT__sum;
    vlSelf->__PVT__b_new = vlSymsp->TOP__top__DUT__dpath__imul__multi__rs_block.__PVT__result;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0U)))) {
        vlSymsp->__Vcoverage[9111].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 1U)))) {
        vlSymsp->__Vcoverage[9112].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 2U)))) {
        vlSymsp->__Vcoverage[9113].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 3U)))) {
        vlSymsp->__Vcoverage[9114].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 4U)))) {
        vlSymsp->__Vcoverage[9115].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 5U)))) {
        vlSymsp->__Vcoverage[9116].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 6U)))) {
        vlSymsp->__Vcoverage[9117].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 7U)))) {
        vlSymsp->__Vcoverage[9118].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 8U)))) {
        vlSymsp->__Vcoverage[9119].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 9U)))) {
        vlSymsp->__Vcoverage[9120].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xaU)))) {
        vlSymsp->__Vcoverage[9121].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xbU)))) {
        vlSymsp->__Vcoverage[9122].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xcU)))) {
        vlSymsp->__Vcoverage[9123].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xdU)))) {
        vlSymsp->__Vcoverage[9124].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xeU)))) {
        vlSymsp->__Vcoverage[9125].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0xfU)))) {
        vlSymsp->__Vcoverage[9126].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x10U)))) {
        vlSymsp->__Vcoverage[9127].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x11U)))) {
        vlSymsp->__Vcoverage[9128].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x12U)))) {
        vlSymsp->__Vcoverage[9129].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x13U)))) {
        vlSymsp->__Vcoverage[9130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x14U)))) {
        vlSymsp->__Vcoverage[9131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x15U)))) {
        vlSymsp->__Vcoverage[9132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x16U)))) {
        vlSymsp->__Vcoverage[9133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x17U)))) {
        vlSymsp->__Vcoverage[9134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x18U)))) {
        vlSymsp->__Vcoverage[9135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x19U)))) {
        vlSymsp->__Vcoverage[9136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[9137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[9138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[9139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[9140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[9141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__a_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[9142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__a_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__a_new, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0U)))) {
        vlSymsp->__Vcoverage[9175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 1U)))) {
        vlSymsp->__Vcoverage[9176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 2U)))) {
        vlSymsp->__Vcoverage[9177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 3U)))) {
        vlSymsp->__Vcoverage[9178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 4U)))) {
        vlSymsp->__Vcoverage[9179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 5U)))) {
        vlSymsp->__Vcoverage[9180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 6U)))) {
        vlSymsp->__Vcoverage[9181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 7U)))) {
        vlSymsp->__Vcoverage[9182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 8U)))) {
        vlSymsp->__Vcoverage[9183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 9U)))) {
        vlSymsp->__Vcoverage[9184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xaU)))) {
        vlSymsp->__Vcoverage[9185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xbU)))) {
        vlSymsp->__Vcoverage[9186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xcU)))) {
        vlSymsp->__Vcoverage[9187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xdU)))) {
        vlSymsp->__Vcoverage[9188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xeU)))) {
        vlSymsp->__Vcoverage[9189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0xfU)))) {
        vlSymsp->__Vcoverage[9190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x10U)))) {
        vlSymsp->__Vcoverage[9191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x11U)))) {
        vlSymsp->__Vcoverage[9192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x12U)))) {
        vlSymsp->__Vcoverage[9193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x13U)))) {
        vlSymsp->__Vcoverage[9194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x14U)))) {
        vlSymsp->__Vcoverage[9195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x15U)))) {
        vlSymsp->__Vcoverage[9196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x16U)))) {
        vlSymsp->__Vcoverage[9197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x17U)))) {
        vlSymsp->__Vcoverage[9198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x18U)))) {
        vlSymsp->__Vcoverage[9199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x19U)))) {
        vlSymsp->__Vcoverage[9200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[9201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[9202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[9203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[9204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[9205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__msg_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[9206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__msg_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__msg_new, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0U)))) {
        vlSymsp->__Vcoverage[9143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 1U)))) {
        vlSymsp->__Vcoverage[9144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 2U)))) {
        vlSymsp->__Vcoverage[9145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 3U)))) {
        vlSymsp->__Vcoverage[9146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 4U)))) {
        vlSymsp->__Vcoverage[9147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 5U)))) {
        vlSymsp->__Vcoverage[9148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 6U)))) {
        vlSymsp->__Vcoverage[9149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 7U)))) {
        vlSymsp->__Vcoverage[9150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 8U)))) {
        vlSymsp->__Vcoverage[9151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 9U)))) {
        vlSymsp->__Vcoverage[9152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xaU)))) {
        vlSymsp->__Vcoverage[9153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xbU)))) {
        vlSymsp->__Vcoverage[9154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xcU)))) {
        vlSymsp->__Vcoverage[9155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xdU)))) {
        vlSymsp->__Vcoverage[9156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xeU)))) {
        vlSymsp->__Vcoverage[9157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0xfU)))) {
        vlSymsp->__Vcoverage[9158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x10U)))) {
        vlSymsp->__Vcoverage[9159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x11U)))) {
        vlSymsp->__Vcoverage[9160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x12U)))) {
        vlSymsp->__Vcoverage[9161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x13U)))) {
        vlSymsp->__Vcoverage[9162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x14U)))) {
        vlSymsp->__Vcoverage[9163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x15U)))) {
        vlSymsp->__Vcoverage[9164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x16U)))) {
        vlSymsp->__Vcoverage[9165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x17U)))) {
        vlSymsp->__Vcoverage[9166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x18U)))) {
        vlSymsp->__Vcoverage[9167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x19U)))) {
        vlSymsp->__Vcoverage[9168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1aU)))) {
        vlSymsp->__Vcoverage[9169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1bU)))) {
        vlSymsp->__Vcoverage[9170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1cU)))) {
        vlSymsp->__Vcoverage[9171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1dU)))) {
        vlSymsp->__Vcoverage[9172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1eU)))) {
        vlSymsp->__Vcoverage[9173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__b_new, 0x1fU)))) {
        vlSymsp->__Vcoverage[9174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__b_new, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__b_new, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_multiplier2___configure_coverage(Vtop_multiplier2* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtop_multiplier2___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8875]), first, "lab1_imul/IntMulAlt.v", 90, 23, "", "v_toggle/multiplier2", "clk", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8876]), first, "lab1_imul/IntMulAlt.v", 91, 23, "", "v_toggle/multiplier2", "reset", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8877]), first, "lab1_imul/IntMulAlt.v", 93, 23, "", "v_toggle/multiplier2", "istream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8878]), first, "lab1_imul/IntMulAlt.v", 94, 23, "", "v_toggle/multiplier2", "istream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8879]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8880]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8881]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8882]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8883]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8884]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8885]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8886]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8887]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8888]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8889]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8890]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8891]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8892]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8893]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8894]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8895]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8896]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8897]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8898]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8899]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8900]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8901]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8902]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8903]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8904]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8905]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8906]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8907]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8908]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8909]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8910]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8911]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[32]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8912]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[33]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8913]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[34]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8914]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[35]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8915]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[36]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8916]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[37]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8917]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[38]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8918]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[39]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8919]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[40]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8920]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[41]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8921]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[42]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8922]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[43]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8923]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[44]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8924]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[45]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8925]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[46]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8926]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[47]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8927]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[48]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8928]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[49]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8929]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[50]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8930]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[51]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8931]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[52]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8932]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[53]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8933]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[54]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8934]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[55]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8935]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[56]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8936]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[57]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8937]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[58]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8938]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[59]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8939]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[60]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8940]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[61]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8941]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[62]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8942]), first, "lab1_imul/IntMulAlt.v", 95, 23, "", "v_toggle/multiplier2", "istream_msg[63]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8943]), first, "lab1_imul/IntMulAlt.v", 97, 23, "", "v_toggle/multiplier2", "ostream_val", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8944]), first, "lab1_imul/IntMulAlt.v", 98, 23, "", "v_toggle/multiplier2", "ostream_rdy", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8945]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8946]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8947]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8948]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8949]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8950]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8951]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8952]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8953]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8954]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8955]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8956]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8957]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8958]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8959]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8960]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8961]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8962]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8963]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8964]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8965]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8966]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8967]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8968]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8969]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8970]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8971]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8972]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8973]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8974]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8975]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8976]), first, "lab1_imul/IntMulAlt.v", 99, 23, "", "v_toggle/multiplier2", "ostream_msg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8977]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8978]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8979]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8980]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8981]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8982]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8983]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8984]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8985]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8986]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8987]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8988]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8989]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8990]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8991]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8992]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8993]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8994]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8995]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8996]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8997]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8998]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8999]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9000]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9001]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9002]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9003]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9004]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9005]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9006]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9007]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9008]), first, "lab1_imul/IntMulAlt.v", 101, 15, "", "v_toggle/multiplier2", "req_msg_a[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9009]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9010]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9011]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9012]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9013]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9014]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9015]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9016]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9017]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9018]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9019]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9020]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9021]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9022]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9023]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9024]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9025]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9026]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9027]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9028]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9029]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9030]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9031]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9032]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9033]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9034]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9035]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9036]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9037]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9038]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9039]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9040]), first, "lab1_imul/IntMulAlt.v", 101, 26, "", "v_toggle/multiplier2", "req_msg_b[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9041]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9042]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9043]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9044]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9045]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9046]), first, "lab1_imul/IntMulAlt.v", 104, 14, "", "v_toggle/multiplier2", "counter[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9047]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9048]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9049]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9050]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9051]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9052]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9053]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9054]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9055]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9056]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9057]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9058]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9059]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9060]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9061]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9062]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9063]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9064]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9065]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9066]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9067]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9068]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9069]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9070]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9071]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9072]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9073]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9074]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9075]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9076]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9077]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9078]), first, "lab1_imul/IntMulAlt.v", 105, 15, "", "v_toggle/multiplier2", "a_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9079]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9080]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9081]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9082]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9083]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9084]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9085]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9086]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9087]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9088]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9089]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9090]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9091]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9092]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9093]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9094]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9095]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9096]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9097]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9098]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9099]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9100]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9101]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9102]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9103]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9104]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9105]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9106]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9107]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9108]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9109]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9110]), first, "lab1_imul/IntMulAlt.v", 105, 22, "", "v_toggle/multiplier2", "b_reg[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9111]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9112]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9113]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9114]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9115]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9116]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9117]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9118]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9119]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9120]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9121]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9122]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9123]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9124]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9125]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9126]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9127]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9128]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9129]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9130]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9131]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9132]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9133]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9134]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9135]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9136]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9137]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9138]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9139]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9140]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9141]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9142]), first, "lab1_imul/IntMulAlt.v", 105, 29, "", "v_toggle/multiplier2", "a_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9143]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9144]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9145]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9146]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9147]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9148]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9149]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9150]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9151]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9152]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9153]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9154]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9155]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9156]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9157]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9158]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9159]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9160]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9161]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9162]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9163]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9164]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9165]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9166]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9167]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9168]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9169]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9170]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9171]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9172]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9173]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9174]), first, "lab1_imul/IntMulAlt.v", 105, 36, "", "v_toggle/multiplier2", "b_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9175]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9176]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9177]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9178]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9179]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9180]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9181]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9182]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9183]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9184]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9185]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9186]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9187]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9188]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9189]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9190]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9191]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9192]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9193]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9194]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9195]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9196]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9197]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9198]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9199]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9200]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9201]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9202]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9203]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9204]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9205]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9206]), first, "lab1_imul/IntMulAlt.v", 105, 43, "", "v_toggle/multiplier2", "msg_new[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9207]), first, "lab1_imul/IntMulAlt.v", 131, 8, "", "v_line/multiplier2", "if", "131-136");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9208]), first, "lab1_imul/IntMulAlt.v", 131, 9, "", "v_line/multiplier2", "else", "139-141");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9209]), first, "lab1_imul/IntMulAlt.v", 122, 8, "", "v_line/multiplier2", "elsif", "122-129");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9210]), first, "lab1_imul/IntMulAlt.v", 113, 3, "", "v_line/multiplier2", "elsif", "113-120");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9211]), first, "lab1_imul/IntMulAlt.v", 112, 2, "", "v_line/multiplier2", "block", "112");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9212]), first, "lab1_imul/IntMulAlt.v", 149, 14, "", "v_line/multiplier2", "case", "149");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9213]), first, "lab1_imul/IntMulAlt.v", 150, 14, "", "v_line/multiplier2", "case", "150");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9214]), first, "lab1_imul/IntMulAlt.v", 151, 14, "", "v_line/multiplier2", "case", "151");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9215]), first, "lab1_imul/IntMulAlt.v", 152, 14, "", "v_line/multiplier2", "case", "152");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9216]), first, "lab1_imul/IntMulAlt.v", 153, 14, "", "v_line/multiplier2", "case", "153");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9217]), first, "lab1_imul/IntMulAlt.v", 154, 14, "", "v_line/multiplier2", "case", "154");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9218]), first, "lab1_imul/IntMulAlt.v", 155, 14, "", "v_line/multiplier2", "case", "155");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9219]), first, "lab1_imul/IntMulAlt.v", 156, 4, "", "v_line/multiplier2", "case", "156");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9220]), first, "lab1_imul/IntMulAlt.v", 146, 17, "", "v_line/multiplier2", "block", "146,148");
}
