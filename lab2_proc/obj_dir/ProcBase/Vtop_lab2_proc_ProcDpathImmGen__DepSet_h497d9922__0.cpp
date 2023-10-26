// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcDpathImmGen.h"

VL_INLINE_OPT void Vtop_lab2_proc_ProcDpathImmGen___nba_sequent__TOP__top__DUT__dpath__imm_gen_D__0(Vtop_lab2_proc_ProcDpathImmGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathImmGen___nba_sequent__TOP__top__DUT__dpath__imm_gen_D__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0U)))) {
        vlSymsp->__Vcoverage[6716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 1U)))) {
        vlSymsp->__Vcoverage[6717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 2U)))) {
        vlSymsp->__Vcoverage[6718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 3U)))) {
        vlSymsp->__Vcoverage[6719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 4U)))) {
        vlSymsp->__Vcoverage[6720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 5U)))) {
        vlSymsp->__Vcoverage[6721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 6U)))) {
        vlSymsp->__Vcoverage[6722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 7U)))) {
        vlSymsp->__Vcoverage[6723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 8U)))) {
        vlSymsp->__Vcoverage[6724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 9U)))) {
        vlSymsp->__Vcoverage[6725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xaU)))) {
        vlSymsp->__Vcoverage[6726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xbU)))) {
        vlSymsp->__Vcoverage[6727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xcU)))) {
        vlSymsp->__Vcoverage[6728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xdU)))) {
        vlSymsp->__Vcoverage[6729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xeU)))) {
        vlSymsp->__Vcoverage[6730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xfU)))) {
        vlSymsp->__Vcoverage[6731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x10U)))) {
        vlSymsp->__Vcoverage[6732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x11U)))) {
        vlSymsp->__Vcoverage[6733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x12U)))) {
        vlSymsp->__Vcoverage[6734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x13U)))) {
        vlSymsp->__Vcoverage[6735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x14U)))) {
        vlSymsp->__Vcoverage[6736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x15U)))) {
        vlSymsp->__Vcoverage[6737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x16U)))) {
        vlSymsp->__Vcoverage[6738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x17U)))) {
        vlSymsp->__Vcoverage[6739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x18U)))) {
        vlSymsp->__Vcoverage[6740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x19U)))) {
        vlSymsp->__Vcoverage[6741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1aU)))) {
        vlSymsp->__Vcoverage[6742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1bU)))) {
        vlSymsp->__Vcoverage[6743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1cU)))) {
        vlSymsp->__Vcoverage[6744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1dU)))) {
        vlSymsp->__Vcoverage[6745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1eU)))) {
        vlSymsp->__Vcoverage[6746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1fU)))) {
        vlSymsp->__Vcoverage[6747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcDpathImmGen___nba_sequent__TOP__top__DUT__dpath__imm_gen_D__1(Vtop_lab2_proc_ProcDpathImmGen* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_lab2_proc_ProcDpathImmGen___nba_sequent__TOP__top__DUT__dpath__imm_gen_D__1\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type), 0U)))) {
        vlSymsp->__Vcoverage[6713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type), 1U)))) {
        vlSymsp->__Vcoverage[6714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type), 2U)))) {
        vlSymsp->__Vcoverage[6715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 2U)));
    }
    if ((0U == (IData)(vlSelf->__PVT__imm_type))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,21,11, 
                                           (0x1fffffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)), 0x15U)), 
                                           (0x7ffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x14U, 0xbU)));
        vlSymsp->__Vcoverage[6780].fetch_add(1, std::memory_order_relaxed);
    } else if ((1U == (IData)(vlSelf->__PVT__imm_type))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,21,11, 
                                           (0x1fffffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)), 0x15U)), 
                                           VL_CONCAT_III(11,6,5, 
                                                         (0x3fU 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x19U, 6U)), 
                                                         VL_CONCAT_III(5,4,1, 
                                                                       (0xfU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__inst, 8U, 4U)), 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)))));
        vlSymsp->__Vcoverage[6781].fetch_add(1, std::memory_order_relaxed);
    } else if ((2U == (IData)(vlSelf->__PVT__imm_type))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)), 0x14U)), 
                                           VL_CONCAT_III(12,1,11, 
                                                         (1U 
                                                          & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)), 
                                                         VL_CONCAT_III(11,6,5, 
                                                                       (0x3fU 
                                                                        & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x19U, 6U)), 
                                                                       VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__inst, 8U, 4U)), 0U))));
        vlSymsp->__Vcoverage[6782].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__imm_type))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0xcU, 0x14U)), 0U);
        vlSymsp->__Vcoverage[6783].fetch_add(1, std::memory_order_relaxed);
    } else if (VL_LIKELY((4U == (IData)(vlSelf->__PVT__imm_type)))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,12,20, 
                                           (0xfffU 
                                            & VL_REPLICATE_IOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU)), 0xcU)), 
                                           VL_CONCAT_III(20,8,12, 
                                                         (0xffU 
                                                          & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0xcU, 8U)), 
                                                         VL_CONCAT_III(12,1,11, 
                                                                       (1U 
                                                                        & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U)), 
                                                                       VL_CONCAT_III(11,6,5, 
                                                                                (0x3fU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x19U, 6U)), 
                                                                                VL_CONCAT_III(5,4,1, 
                                                                                (0xfU 
                                                                                & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0x15U, 4U)), 0U)))));
        vlSymsp->__Vcoverage[6784].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_STOP_MT("ProcDpathImmGen.v", 35, "");
    }
    vlSymsp->__Vcoverage[6785].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0U)))) {
        vlSymsp->__Vcoverage[6748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 1U)))) {
        vlSymsp->__Vcoverage[6749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 2U)))) {
        vlSymsp->__Vcoverage[6750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 3U)))) {
        vlSymsp->__Vcoverage[6751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 4U)))) {
        vlSymsp->__Vcoverage[6752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 5U)))) {
        vlSymsp->__Vcoverage[6753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 6U)))) {
        vlSymsp->__Vcoverage[6754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 7U)))) {
        vlSymsp->__Vcoverage[6755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 8U)))) {
        vlSymsp->__Vcoverage[6756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 9U)))) {
        vlSymsp->__Vcoverage[6757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xaU)))) {
        vlSymsp->__Vcoverage[6758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xbU)))) {
        vlSymsp->__Vcoverage[6759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xcU)))) {
        vlSymsp->__Vcoverage[6760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xdU)))) {
        vlSymsp->__Vcoverage[6761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xeU)))) {
        vlSymsp->__Vcoverage[6762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xfU)))) {
        vlSymsp->__Vcoverage[6763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x10U)))) {
        vlSymsp->__Vcoverage[6764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x11U)))) {
        vlSymsp->__Vcoverage[6765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x12U)))) {
        vlSymsp->__Vcoverage[6766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x13U)))) {
        vlSymsp->__Vcoverage[6767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x14U)))) {
        vlSymsp->__Vcoverage[6768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x15U)))) {
        vlSymsp->__Vcoverage[6769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x16U)))) {
        vlSymsp->__Vcoverage[6770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x17U)))) {
        vlSymsp->__Vcoverage[6771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x18U)))) {
        vlSymsp->__Vcoverage[6772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x19U)))) {
        vlSymsp->__Vcoverage[6773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1aU)))) {
        vlSymsp->__Vcoverage[6774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1bU)))) {
        vlSymsp->__Vcoverage[6775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1cU)))) {
        vlSymsp->__Vcoverage[6776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1dU)))) {
        vlSymsp->__Vcoverage[6777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1eU)))) {
        vlSymsp->__Vcoverage[6778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1fU)))) {
        vlSymsp->__Vcoverage[6779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1fU)));
    }
}
