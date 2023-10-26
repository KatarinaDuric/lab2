// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_vc_Mux4__P20.h"

VL_ATTR_COLD void Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__0(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0U)))) {
        vlSymsp->__Vcoverage[7657].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 1U)))) {
        vlSymsp->__Vcoverage[7658].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 2U)))) {
        vlSymsp->__Vcoverage[7659].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 3U)))) {
        vlSymsp->__Vcoverage[7660].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 4U)))) {
        vlSymsp->__Vcoverage[7661].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 5U)))) {
        vlSymsp->__Vcoverage[7662].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 6U)))) {
        vlSymsp->__Vcoverage[7663].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 7U)))) {
        vlSymsp->__Vcoverage[7664].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 8U)))) {
        vlSymsp->__Vcoverage[7665].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 9U)))) {
        vlSymsp->__Vcoverage[7666].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xaU)))) {
        vlSymsp->__Vcoverage[7667].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xbU)))) {
        vlSymsp->__Vcoverage[7668].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xcU)))) {
        vlSymsp->__Vcoverage[7669].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xdU)))) {
        vlSymsp->__Vcoverage[7670].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xeU)))) {
        vlSymsp->__Vcoverage[7671].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0xfU)))) {
        vlSymsp->__Vcoverage[7672].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x10U)))) {
        vlSymsp->__Vcoverage[7673].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x11U)))) {
        vlSymsp->__Vcoverage[7674].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x12U)))) {
        vlSymsp->__Vcoverage[7675].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x13U)))) {
        vlSymsp->__Vcoverage[7676].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x14U)))) {
        vlSymsp->__Vcoverage[7677].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x15U)))) {
        vlSymsp->__Vcoverage[7678].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x16U)))) {
        vlSymsp->__Vcoverage[7679].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x17U)))) {
        vlSymsp->__Vcoverage[7680].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x18U)))) {
        vlSymsp->__Vcoverage[7681].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x19U)))) {
        vlSymsp->__Vcoverage[7682].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1aU)))) {
        vlSymsp->__Vcoverage[7683].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1bU)))) {
        vlSymsp->__Vcoverage[7684].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1cU)))) {
        vlSymsp->__Vcoverage[7685].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1dU)))) {
        vlSymsp->__Vcoverage[7686].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1eU)))) {
        vlSymsp->__Vcoverage[7687].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in1, 0x1fU)))) {
        vlSymsp->__Vcoverage[7688].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in1, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in1, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__1(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0U)))) {
        vlSymsp->__Vcoverage[7625].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 1U)))) {
        vlSymsp->__Vcoverage[7626].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 2U)))) {
        vlSymsp->__Vcoverage[7627].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 3U)))) {
        vlSymsp->__Vcoverage[7628].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 4U)))) {
        vlSymsp->__Vcoverage[7629].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 5U)))) {
        vlSymsp->__Vcoverage[7630].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 6U)))) {
        vlSymsp->__Vcoverage[7631].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 7U)))) {
        vlSymsp->__Vcoverage[7632].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 8U)))) {
        vlSymsp->__Vcoverage[7633].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 9U)))) {
        vlSymsp->__Vcoverage[7634].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xaU)))) {
        vlSymsp->__Vcoverage[7635].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xbU)))) {
        vlSymsp->__Vcoverage[7636].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xcU)))) {
        vlSymsp->__Vcoverage[7637].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xdU)))) {
        vlSymsp->__Vcoverage[7638].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xeU)))) {
        vlSymsp->__Vcoverage[7639].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0xfU)))) {
        vlSymsp->__Vcoverage[7640].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x10U)))) {
        vlSymsp->__Vcoverage[7641].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x11U)))) {
        vlSymsp->__Vcoverage[7642].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x12U)))) {
        vlSymsp->__Vcoverage[7643].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x13U)))) {
        vlSymsp->__Vcoverage[7644].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x14U)))) {
        vlSymsp->__Vcoverage[7645].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x15U)))) {
        vlSymsp->__Vcoverage[7646].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x16U)))) {
        vlSymsp->__Vcoverage[7647].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x17U)))) {
        vlSymsp->__Vcoverage[7648].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x18U)))) {
        vlSymsp->__Vcoverage[7649].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x19U)))) {
        vlSymsp->__Vcoverage[7650].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1aU)))) {
        vlSymsp->__Vcoverage[7651].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1bU)))) {
        vlSymsp->__Vcoverage[7652].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1cU)))) {
        vlSymsp->__Vcoverage[7653].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1dU)))) {
        vlSymsp->__Vcoverage[7654].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1eU)))) {
        vlSymsp->__Vcoverage[7655].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in0, 0x1fU)))) {
        vlSymsp->__Vcoverage[7656].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in0, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in0, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0U)))) {
        vlSymsp->__Vcoverage[7721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 1U)))) {
        vlSymsp->__Vcoverage[7722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 2U)))) {
        vlSymsp->__Vcoverage[7723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 3U)))) {
        vlSymsp->__Vcoverage[7724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 4U)))) {
        vlSymsp->__Vcoverage[7725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 5U)))) {
        vlSymsp->__Vcoverage[7726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 6U)))) {
        vlSymsp->__Vcoverage[7727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 7U)))) {
        vlSymsp->__Vcoverage[7728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 8U)))) {
        vlSymsp->__Vcoverage[7729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 9U)))) {
        vlSymsp->__Vcoverage[7730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xaU)))) {
        vlSymsp->__Vcoverage[7731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xbU)))) {
        vlSymsp->__Vcoverage[7732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xcU)))) {
        vlSymsp->__Vcoverage[7733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xdU)))) {
        vlSymsp->__Vcoverage[7734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xeU)))) {
        vlSymsp->__Vcoverage[7735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0xfU)))) {
        vlSymsp->__Vcoverage[7736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x10U)))) {
        vlSymsp->__Vcoverage[7737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x11U)))) {
        vlSymsp->__Vcoverage[7738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x12U)))) {
        vlSymsp->__Vcoverage[7739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x13U)))) {
        vlSymsp->__Vcoverage[7740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x14U)))) {
        vlSymsp->__Vcoverage[7741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x15U)))) {
        vlSymsp->__Vcoverage[7742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x16U)))) {
        vlSymsp->__Vcoverage[7743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x17U)))) {
        vlSymsp->__Vcoverage[7744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x18U)))) {
        vlSymsp->__Vcoverage[7745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x19U)))) {
        vlSymsp->__Vcoverage[7746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1aU)))) {
        vlSymsp->__Vcoverage[7747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1bU)))) {
        vlSymsp->__Vcoverage[7748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1cU)))) {
        vlSymsp->__Vcoverage[7749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1dU)))) {
        vlSymsp->__Vcoverage[7750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1eU)))) {
        vlSymsp->__Vcoverage[7751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in3, 0x1fU)))) {
        vlSymsp->__Vcoverage[7752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in3, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in3, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__2(Vtop_vc_Mux4__P20* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___stl_sequent__TOP__top__DUT__dpath__pc_sel_mux_F__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 0U)))) {
        vlSymsp->__Vcoverage[7753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__sel), 1U)))) {
        vlSymsp->__Vcoverage[7754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__sel, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__sel), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0U)))) {
        vlSymsp->__Vcoverage[7689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 1U)))) {
        vlSymsp->__Vcoverage[7690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 2U)))) {
        vlSymsp->__Vcoverage[7691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 3U)))) {
        vlSymsp->__Vcoverage[7692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 4U)))) {
        vlSymsp->__Vcoverage[7693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 5U)))) {
        vlSymsp->__Vcoverage[7694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 6U)))) {
        vlSymsp->__Vcoverage[7695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 7U)))) {
        vlSymsp->__Vcoverage[7696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 8U)))) {
        vlSymsp->__Vcoverage[7697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 9U)))) {
        vlSymsp->__Vcoverage[7698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xaU)))) {
        vlSymsp->__Vcoverage[7699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xbU)))) {
        vlSymsp->__Vcoverage[7700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xcU)))) {
        vlSymsp->__Vcoverage[7701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xdU)))) {
        vlSymsp->__Vcoverage[7702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xeU)))) {
        vlSymsp->__Vcoverage[7703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0xfU)))) {
        vlSymsp->__Vcoverage[7704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x10U)))) {
        vlSymsp->__Vcoverage[7705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x11U)))) {
        vlSymsp->__Vcoverage[7706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x12U)))) {
        vlSymsp->__Vcoverage[7707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x13U)))) {
        vlSymsp->__Vcoverage[7708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x14U)))) {
        vlSymsp->__Vcoverage[7709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x15U)))) {
        vlSymsp->__Vcoverage[7710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x16U)))) {
        vlSymsp->__Vcoverage[7711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x17U)))) {
        vlSymsp->__Vcoverage[7712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x18U)))) {
        vlSymsp->__Vcoverage[7713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x19U)))) {
        vlSymsp->__Vcoverage[7714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1aU)))) {
        vlSymsp->__Vcoverage[7715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1bU)))) {
        vlSymsp->__Vcoverage[7716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1cU)))) {
        vlSymsp->__Vcoverage[7717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1dU)))) {
        vlSymsp->__Vcoverage[7718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1eU)))) {
        vlSymsp->__Vcoverage[7719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__in2, 0x1fU)))) {
        vlSymsp->__Vcoverage[7720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__in2, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__in2, 0x1fU)));
    }
    if ((0U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in0;
        vlSymsp->__Vcoverage[7787].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in1;
        vlSymsp->__Vcoverage[7788].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in2;
        vlSymsp->__Vcoverage[7789].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__sel))) {
        vlSelf->__PVT__out = vlSelf->__PVT__in3;
        vlSymsp->__Vcoverage[7790].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__out = 0U;
        vlSymsp->__Vcoverage[7791].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[7792].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0U)))) {
        vlSymsp->__Vcoverage[7755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 1U)))) {
        vlSymsp->__Vcoverage[7756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 2U)))) {
        vlSymsp->__Vcoverage[7757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 3U)))) {
        vlSymsp->__Vcoverage[7758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 4U)))) {
        vlSymsp->__Vcoverage[7759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 5U)))) {
        vlSymsp->__Vcoverage[7760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 6U)))) {
        vlSymsp->__Vcoverage[7761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 7U)))) {
        vlSymsp->__Vcoverage[7762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 8U)))) {
        vlSymsp->__Vcoverage[7763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 9U)))) {
        vlSymsp->__Vcoverage[7764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xaU)))) {
        vlSymsp->__Vcoverage[7765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xbU)))) {
        vlSymsp->__Vcoverage[7766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xcU)))) {
        vlSymsp->__Vcoverage[7767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xdU)))) {
        vlSymsp->__Vcoverage[7768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xeU)))) {
        vlSymsp->__Vcoverage[7769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0xfU)))) {
        vlSymsp->__Vcoverage[7770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x10U)))) {
        vlSymsp->__Vcoverage[7771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x11U)))) {
        vlSymsp->__Vcoverage[7772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x12U)))) {
        vlSymsp->__Vcoverage[7773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x13U)))) {
        vlSymsp->__Vcoverage[7774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x14U)))) {
        vlSymsp->__Vcoverage[7775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x15U)))) {
        vlSymsp->__Vcoverage[7776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x16U)))) {
        vlSymsp->__Vcoverage[7777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x17U)))) {
        vlSymsp->__Vcoverage[7778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x18U)))) {
        vlSymsp->__Vcoverage[7779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x19U)))) {
        vlSymsp->__Vcoverage[7780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1aU)))) {
        vlSymsp->__Vcoverage[7781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1bU)))) {
        vlSymsp->__Vcoverage[7782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1cU)))) {
        vlSymsp->__Vcoverage[7783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1dU)))) {
        vlSymsp->__Vcoverage[7784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1eU)))) {
        vlSymsp->__Vcoverage[7785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__out, 0x1fU)))) {
        vlSymsp->__Vcoverage[7786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__out, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__out, 0x1fU)));
    }
}

VL_ATTR_COLD void Vtop_vc_Mux4__P20___configure_coverage(Vtop_vc_Mux4__P20* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_vc_Mux4__P20___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7625]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7626]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7627]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7628]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7629]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7630]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7631]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7632]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7633]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7634]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7635]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7636]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7637]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7638]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7639]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7640]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7641]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7642]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7643]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7644]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7645]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7646]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7647]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7648]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7649]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7650]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7651]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7652]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7653]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7654]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7655]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7656]), first, "../vc/muxes.v", 65, 30, "", "v_toggle/vc_Mux4__P20", "in0[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7657]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7658]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7659]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7660]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7661]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7662]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7663]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7664]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7665]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7666]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7667]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7668]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7669]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7670]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7671]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7672]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7673]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7674]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7675]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7676]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7677]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7678]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7679]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7680]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7681]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7682]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7683]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7684]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7685]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7686]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7687]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7688]), first, "../vc/muxes.v", 65, 35, "", "v_toggle/vc_Mux4__P20", "in1[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7689]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7690]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7691]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7692]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7693]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7694]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7695]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7696]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7697]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7698]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7699]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7700]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7701]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7702]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7703]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7704]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7705]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7706]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7707]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7708]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7709]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7710]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7711]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7712]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7713]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7714]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7715]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7716]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7717]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7718]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7719]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7720]), first, "../vc/muxes.v", 65, 40, "", "v_toggle/vc_Mux4__P20", "in2[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7721]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7722]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7723]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7724]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7725]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7726]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7727]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7728]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7729]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7730]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7731]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7732]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7733]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7734]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7735]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7736]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7737]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7738]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7739]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7740]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7741]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7742]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7743]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7744]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7745]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7746]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7747]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7748]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7749]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7750]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7751]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7752]), first, "../vc/muxes.v", 65, 45, "", "v_toggle/vc_Mux4__P20", "in3[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7753]), first, "../vc/muxes.v", 66, 30, "", "v_toggle/vc_Mux4__P20", "sel[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7754]), first, "../vc/muxes.v", 66, 30, "", "v_toggle/vc_Mux4__P20", "sel[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7755]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7756]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7757]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7758]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7759]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7760]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7761]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7762]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7763]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[8]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7764]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[9]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7765]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[10]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7766]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[11]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7767]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[12]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7768]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[13]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7769]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[14]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7770]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[15]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7771]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[16]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7772]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[17]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7773]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[18]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7774]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[19]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7775]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[20]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7776]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[21]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7777]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[22]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7778]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[23]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7779]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[24]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7780]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[25]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7781]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[26]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7782]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[27]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7783]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[28]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7784]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[29]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7785]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[30]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7786]), first, "../vc/muxes.v", 67, 30, "", "v_toggle/vc_Mux4__P20", "out[31]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7787]), first, "../vc/muxes.v", 73, 12, "", "v_line/vc_Mux4__P20", "case", "73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7788]), first, "../vc/muxes.v", 74, 12, "", "v_line/vc_Mux4__P20", "case", "74");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7789]), first, "../vc/muxes.v", 75, 12, "", "v_line/vc_Mux4__P20", "case", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7790]), first, "../vc/muxes.v", 76, 12, "", "v_line/vc_Mux4__P20", "case", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7791]), first, "../vc/muxes.v", 77, 7, "", "v_line/vc_Mux4__P20", "case", "77");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7792]), first, "../vc/muxes.v", 70, 3, "", "v_line/vc_Mux4__P20", "block", "70-72");
}
