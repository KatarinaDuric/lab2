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
        vlSymsp->__Vcoverage[6902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 1U)))) {
        vlSymsp->__Vcoverage[6903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 2U)))) {
        vlSymsp->__Vcoverage[6904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 3U)))) {
        vlSymsp->__Vcoverage[6905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 4U)))) {
        vlSymsp->__Vcoverage[6906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 5U)))) {
        vlSymsp->__Vcoverage[6907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 6U)))) {
        vlSymsp->__Vcoverage[6908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 7U)))) {
        vlSymsp->__Vcoverage[6909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 8U)))) {
        vlSymsp->__Vcoverage[6910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 9U)))) {
        vlSymsp->__Vcoverage[6911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xaU)))) {
        vlSymsp->__Vcoverage[6912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xbU)))) {
        vlSymsp->__Vcoverage[6913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xcU)))) {
        vlSymsp->__Vcoverage[6914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xdU)))) {
        vlSymsp->__Vcoverage[6915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xeU)))) {
        vlSymsp->__Vcoverage[6916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0xfU)))) {
        vlSymsp->__Vcoverage[6917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x10U)))) {
        vlSymsp->__Vcoverage[6918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x11U)))) {
        vlSymsp->__Vcoverage[6919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x12U)))) {
        vlSymsp->__Vcoverage[6920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x13U)))) {
        vlSymsp->__Vcoverage[6921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x14U)))) {
        vlSymsp->__Vcoverage[6922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x15U)))) {
        vlSymsp->__Vcoverage[6923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x16U)))) {
        vlSymsp->__Vcoverage[6924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x17U)))) {
        vlSymsp->__Vcoverage[6925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x18U)))) {
        vlSymsp->__Vcoverage[6926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x19U)))) {
        vlSymsp->__Vcoverage[6927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1aU)))) {
        vlSymsp->__Vcoverage[6928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1bU)))) {
        vlSymsp->__Vcoverage[6929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1cU)))) {
        vlSymsp->__Vcoverage[6930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1dU)))) {
        vlSymsp->__Vcoverage[6931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1eU)))) {
        vlSymsp->__Vcoverage[6932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst, 0x1fU)))) {
        vlSymsp->__Vcoverage[6933].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type), 1U)))) {
        vlSymsp->__Vcoverage[6900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type), 2U)))) {
        vlSymsp->__Vcoverage[6901].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6966].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6967].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6968].fetch_add(1, std::memory_order_relaxed);
    } else if ((3U == (IData)(vlSelf->__PVT__imm_type))) {
        vlSelf->__PVT__imm = VL_CONCAT_III(32,20,12, 
                                           (0xfffffU 
                                            & VL_SEL_IIII(32, vlSelf->__PVT__inst, 0xcU, 0x14U)), 0U);
        vlSymsp->__Vcoverage[6969].fetch_add(1, std::memory_order_relaxed);
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
        vlSymsp->__Vcoverage[6970].fetch_add(1, std::memory_order_relaxed);
    } else {
        VL_STOP_MT("ProcDpathImmGen.v", 35, "");
    }
    vlSymsp->__Vcoverage[6971].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0U)))) {
        vlSymsp->__Vcoverage[6934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 1U)))) {
        vlSymsp->__Vcoverage[6935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 2U)))) {
        vlSymsp->__Vcoverage[6936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 3U)))) {
        vlSymsp->__Vcoverage[6937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 4U)))) {
        vlSymsp->__Vcoverage[6938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 5U)))) {
        vlSymsp->__Vcoverage[6939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 6U)))) {
        vlSymsp->__Vcoverage[6940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 7U)))) {
        vlSymsp->__Vcoverage[6941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 8U)))) {
        vlSymsp->__Vcoverage[6942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 9U)))) {
        vlSymsp->__Vcoverage[6943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xaU)))) {
        vlSymsp->__Vcoverage[6944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xbU)))) {
        vlSymsp->__Vcoverage[6945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xcU)))) {
        vlSymsp->__Vcoverage[6946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xdU)))) {
        vlSymsp->__Vcoverage[6947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xeU)))) {
        vlSymsp->__Vcoverage[6948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0xfU)))) {
        vlSymsp->__Vcoverage[6949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x10U)))) {
        vlSymsp->__Vcoverage[6950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x11U)))) {
        vlSymsp->__Vcoverage[6951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x12U)))) {
        vlSymsp->__Vcoverage[6952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x13U)))) {
        vlSymsp->__Vcoverage[6953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x14U)))) {
        vlSymsp->__Vcoverage[6954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x15U)))) {
        vlSymsp->__Vcoverage[6955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x16U)))) {
        vlSymsp->__Vcoverage[6956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x17U)))) {
        vlSymsp->__Vcoverage[6957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x18U)))) {
        vlSymsp->__Vcoverage[6958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x19U)))) {
        vlSymsp->__Vcoverage[6959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1aU)))) {
        vlSymsp->__Vcoverage[6960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1bU)))) {
        vlSymsp->__Vcoverage[6961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1cU)))) {
        vlSymsp->__Vcoverage[6962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1dU)))) {
        vlSymsp->__Vcoverage[6963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1eU)))) {
        vlSymsp->__Vcoverage[6964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__imm, 0x1fU)))) {
        vlSymsp->__Vcoverage[6965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__imm, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__imm, 0x1fU)));
    }
}
