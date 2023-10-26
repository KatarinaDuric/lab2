// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcAltDpath.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__0(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__0\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0U)))) {
        vlSymsp->__Vcoverage[3529].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 1U)))) {
        vlSymsp->__Vcoverage[3530].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 2U)))) {
        vlSymsp->__Vcoverage[3531].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 3U)))) {
        vlSymsp->__Vcoverage[3532].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 4U)))) {
        vlSymsp->__Vcoverage[3533].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 5U)))) {
        vlSymsp->__Vcoverage[3534].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 6U)))) {
        vlSymsp->__Vcoverage[3535].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 7U)))) {
        vlSymsp->__Vcoverage[3536].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 8U)))) {
        vlSymsp->__Vcoverage[3537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 9U)))) {
        vlSymsp->__Vcoverage[3538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xaU)))) {
        vlSymsp->__Vcoverage[3539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xbU)))) {
        vlSymsp->__Vcoverage[3540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xcU)))) {
        vlSymsp->__Vcoverage[3541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xdU)))) {
        vlSymsp->__Vcoverage[3542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xeU)))) {
        vlSymsp->__Vcoverage[3543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0xfU)))) {
        vlSymsp->__Vcoverage[3544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x10U)))) {
        vlSymsp->__Vcoverage[3545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x11U)))) {
        vlSymsp->__Vcoverage[3546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x12U)))) {
        vlSymsp->__Vcoverage[3547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x13U)))) {
        vlSymsp->__Vcoverage[3548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x14U)))) {
        vlSymsp->__Vcoverage[3549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x15U)))) {
        vlSymsp->__Vcoverage[3550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x16U)))) {
        vlSymsp->__Vcoverage[3551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x17U)))) {
        vlSymsp->__Vcoverage[3552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x18U)))) {
        vlSymsp->__Vcoverage[3553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x19U)))) {
        vlSymsp->__Vcoverage[3554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1aU)))) {
        vlSymsp->__Vcoverage[3555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1bU)))) {
        vlSymsp->__Vcoverage[3556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1cU)))) {
        vlSymsp->__Vcoverage[3557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1dU)))) {
        vlSymsp->__Vcoverage[3558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1eU)))) {
        vlSymsp->__Vcoverage[3559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__num_cores, 0x1fU)))) {
        vlSymsp->__Vcoverage[3560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__num_cores, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__num_cores, 0x1fU)));
    }
    vlSelf->__PVT__stats_en_W = vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__q;
    vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__num_cores;
    vlSelf->__PVT__ex_result_M = vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__q;
    vlSelf->__PVT__pc_X = vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__q;
    vlSelf->__PVT__wb_result_W = vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__q;
    vlSelf->__PVT__dmem_reqstream_msg_data = vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__q;
    vlSelf->__PVT__br_target_X = vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__q;
    vlSelf->__PVT__pc_F = vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__q;
    vlSelf->__PVT__pc_D = vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__q;
    vlSelf->__PVT__inst_D = vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__q;
    vlSelf->__PVT__op1_X = vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__q;
    vlSelf->__PVT__op2_X = vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__q;
    vlSelf->__PVT__ostream_msg = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_msg;
    vlSelf->__PVT__imul_req_rdy_D = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__istream_rdy;
    vlSelf->__PVT__imul_resp_val_X = vlSymsp->TOP__top__DUT__dpath__imul.__PVT__ostream_val;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0U)))) {
        vlSymsp->__Vcoverage[2937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 1U)))) {
        vlSymsp->__Vcoverage[2938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 2U)))) {
        vlSymsp->__Vcoverage[2939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 3U)))) {
        vlSymsp->__Vcoverage[2940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 4U)))) {
        vlSymsp->__Vcoverage[2941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 5U)))) {
        vlSymsp->__Vcoverage[2942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 6U)))) {
        vlSymsp->__Vcoverage[2943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 7U)))) {
        vlSymsp->__Vcoverage[2944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 8U)))) {
        vlSymsp->__Vcoverage[2945].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 9U)))) {
        vlSymsp->__Vcoverage[2946].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xaU)))) {
        vlSymsp->__Vcoverage[2947].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xbU)))) {
        vlSymsp->__Vcoverage[2948].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xcU)))) {
        vlSymsp->__Vcoverage[2949].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xdU)))) {
        vlSymsp->__Vcoverage[2950].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xeU)))) {
        vlSymsp->__Vcoverage[2951].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0xfU)))) {
        vlSymsp->__Vcoverage[2952].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x10U)))) {
        vlSymsp->__Vcoverage[2953].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x11U)))) {
        vlSymsp->__Vcoverage[2954].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x12U)))) {
        vlSymsp->__Vcoverage[2955].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x13U)))) {
        vlSymsp->__Vcoverage[2956].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x14U)))) {
        vlSymsp->__Vcoverage[2957].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x15U)))) {
        vlSymsp->__Vcoverage[2958].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x16U)))) {
        vlSymsp->__Vcoverage[2959].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x17U)))) {
        vlSymsp->__Vcoverage[2960].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x18U)))) {
        vlSymsp->__Vcoverage[2961].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x19U)))) {
        vlSymsp->__Vcoverage[2962].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1aU)))) {
        vlSymsp->__Vcoverage[2963].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1bU)))) {
        vlSymsp->__Vcoverage[2964].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1cU)))) {
        vlSymsp->__Vcoverage[2965].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1dU)))) {
        vlSymsp->__Vcoverage[2966].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1eU)))) {
        vlSymsp->__Vcoverage[2967].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__core_id, 0x1fU)))) {
        vlSymsp->__Vcoverage[2968].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__core_id, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__core_id, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in2 
        = vlSelf->__PVT__core_id;
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2624].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__reset 
        = vlSelf->__PVT__reset;
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__reset 
        = vlSelf->__PVT__reset;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 0U)))) {
        vlSymsp->__Vcoverage[2895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 1U)))) {
        vlSymsp->__Vcoverage[2896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 2U)))) {
        vlSymsp->__Vcoverage[2897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 3U)))) {
        vlSymsp->__Vcoverage[2898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 4U)))) {
        vlSymsp->__Vcoverage[2899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_addr 
        = vlSelf->__PVT__rf_waddr_W;
    if (((IData)(vlSelf->__PVT__wb_result_sel_M) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[2893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_M;
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__sel 
        = vlSelf->__PVT__wb_result_sel_M;
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 0U)))) {
        vlSymsp->__Vcoverage[2882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 1U)))) {
        vlSymsp->__Vcoverage[2883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 2U)))) {
        vlSymsp->__Vcoverage[2884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 3U)))) {
        vlSymsp->__Vcoverage[2885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__fn = vlSelf->__PVT__alu_fn_X;
    if (((IData)(vlSelf->__PVT__stats_en_wen_W) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[2901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_W = vlSelf->__PVT__stats_en_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__en 
        = vlSelf->__PVT__stats_en_wen_W;
    if (((IData)(vlSelf->__PVT__rf_wen_W) ^ (IData)(vlSelf->__Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[2900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_W = vlSelf->__PVT__rf_wen_W;
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_en 
        = vlSelf->__PVT__rf_wen_W;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 0U)))) {
        vlSymsp->__Vcoverage[2886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 1U)))) {
        vlSymsp->__Vcoverage[2887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__sel 
        = vlSelf->__PVT__ex_result_sel_X;
    vlSelf->__PVT__stats_en = VL_REDOR_I(vlSelf->__PVT__stats_en_W);
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0U)))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 1U)))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 2U)))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 3U)))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 4U)))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 5U)))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 6U)))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 7U)))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 8U)))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 9U)))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xaU)))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xbU)))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xcU)))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xdU)))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xeU)))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0xfU)))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x10U)))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x11U)))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x12U)))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x13U)))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x14U)))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x15U)))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x16U)))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x17U)))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x18U)))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x19U)))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[4067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[4068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[4069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[4070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[4071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__stats_en_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[4072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__stats_en_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__stats_en_W, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0U)))) {
        vlSymsp->__Vcoverage[3913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 1U)))) {
        vlSymsp->__Vcoverage[3914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 2U)))) {
        vlSymsp->__Vcoverage[3915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 3U)))) {
        vlSymsp->__Vcoverage[3916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 4U)))) {
        vlSymsp->__Vcoverage[3917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 5U)))) {
        vlSymsp->__Vcoverage[3918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 6U)))) {
        vlSymsp->__Vcoverage[3919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 7U)))) {
        vlSymsp->__Vcoverage[3920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 8U)))) {
        vlSymsp->__Vcoverage[3921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 9U)))) {
        vlSymsp->__Vcoverage[3922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xaU)))) {
        vlSymsp->__Vcoverage[3923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xbU)))) {
        vlSymsp->__Vcoverage[3924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xcU)))) {
        vlSymsp->__Vcoverage[3925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xdU)))) {
        vlSymsp->__Vcoverage[3926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xeU)))) {
        vlSymsp->__Vcoverage[3927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0xfU)))) {
        vlSymsp->__Vcoverage[3928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x10U)))) {
        vlSymsp->__Vcoverage[3929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x11U)))) {
        vlSymsp->__Vcoverage[3930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x12U)))) {
        vlSymsp->__Vcoverage[3931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x13U)))) {
        vlSymsp->__Vcoverage[3932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x14U)))) {
        vlSymsp->__Vcoverage[3933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x15U)))) {
        vlSymsp->__Vcoverage[3934].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x16U)))) {
        vlSymsp->__Vcoverage[3935].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x17U)))) {
        vlSymsp->__Vcoverage[3936].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x18U)))) {
        vlSymsp->__Vcoverage[3937].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x19U)))) {
        vlSymsp->__Vcoverage[3938].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[3939].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[3940].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[3941].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[3942].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[3943].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[3944].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ex_result_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_M, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_sel_mux_M.__PVT__in0 
        = vlSelf->__PVT__ex_result_M;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0U)))) {
        vlSymsp->__Vcoverage[3785].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 1U)))) {
        vlSymsp->__Vcoverage[3786].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 2U)))) {
        vlSymsp->__Vcoverage[3787].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 3U)))) {
        vlSymsp->__Vcoverage[3788].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 4U)))) {
        vlSymsp->__Vcoverage[3789].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 5U)))) {
        vlSymsp->__Vcoverage[3790].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 6U)))) {
        vlSymsp->__Vcoverage[3791].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 7U)))) {
        vlSymsp->__Vcoverage[3792].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 8U)))) {
        vlSymsp->__Vcoverage[3793].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 9U)))) {
        vlSymsp->__Vcoverage[3794].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3795].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3796].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3797].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3798].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3799].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__in 
        = vlSelf->__PVT__pc_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0U)))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 1U)))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 2U)))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 3U)))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 4U)))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 5U)))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 6U)))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 7U)))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 8U)))) {
        vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 9U)))) {
        vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xaU)))) {
        vlSymsp->__Vcoverage[4019].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xbU)))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xcU)))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xdU)))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xeU)))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0xfU)))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x10U)))) {
        vlSymsp->__Vcoverage[4025].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x11U)))) {
        vlSymsp->__Vcoverage[4026].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x12U)))) {
        vlSymsp->__Vcoverage[4027].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x13U)))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x14U)))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x15U)))) {
        vlSymsp->__Vcoverage[4030].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x16U)))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x17U)))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x18U)))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x19U)))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__wb_result_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__wb_result_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__wb_result_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__d 
        = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__rf_wdata_W = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__proc2mngr_data = vlSelf->__PVT__wb_result_W;
    vlSelf->__PVT__bypass_from_W = vlSelf->__PVT__wb_result_W;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0U)))) {
        vlSymsp->__Vcoverage[2736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 1U)))) {
        vlSymsp->__Vcoverage[2737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 2U)))) {
        vlSymsp->__Vcoverage[2738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 3U)))) {
        vlSymsp->__Vcoverage[2739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 4U)))) {
        vlSymsp->__Vcoverage[2740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 5U)))) {
        vlSymsp->__Vcoverage[2741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 6U)))) {
        vlSymsp->__Vcoverage[2742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 7U)))) {
        vlSymsp->__Vcoverage[2743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 8U)))) {
        vlSymsp->__Vcoverage[2744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 9U)))) {
        vlSymsp->__Vcoverage[2745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0U)))) {
        vlSymsp->__Vcoverage[3066].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 1U)))) {
        vlSymsp->__Vcoverage[3067].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 2U)))) {
        vlSymsp->__Vcoverage[3068].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 3U)))) {
        vlSymsp->__Vcoverage[3069].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 4U)))) {
        vlSymsp->__Vcoverage[3070].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 5U)))) {
        vlSymsp->__Vcoverage[3071].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 6U)))) {
        vlSymsp->__Vcoverage[3072].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 7U)))) {
        vlSymsp->__Vcoverage[3073].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 8U)))) {
        vlSymsp->__Vcoverage[3074].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 9U)))) {
        vlSymsp->__Vcoverage[3075].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3076].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3077].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3078].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3079].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3080].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3081].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3082].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3083].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3084].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3085].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3086].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3087].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3088].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3089].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3090].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3091].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3092].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3093].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3094].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3095].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3096].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__br_target_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3097].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__br_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__br_target_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in1 
        = vlSelf->__PVT__br_target_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0U)))) {
        vlSymsp->__Vcoverage[2970].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 1U)))) {
        vlSymsp->__Vcoverage[2971].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 2U)))) {
        vlSymsp->__Vcoverage[2972].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 3U)))) {
        vlSymsp->__Vcoverage[2973].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 4U)))) {
        vlSymsp->__Vcoverage[2974].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 5U)))) {
        vlSymsp->__Vcoverage[2975].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 6U)))) {
        vlSymsp->__Vcoverage[2976].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 7U)))) {
        vlSymsp->__Vcoverage[2977].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 8U)))) {
        vlSymsp->__Vcoverage[2978].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 9U)))) {
        vlSymsp->__Vcoverage[2979].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xaU)))) {
        vlSymsp->__Vcoverage[2980].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xbU)))) {
        vlSymsp->__Vcoverage[2981].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xcU)))) {
        vlSymsp->__Vcoverage[2982].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xdU)))) {
        vlSymsp->__Vcoverage[2983].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xeU)))) {
        vlSymsp->__Vcoverage[2984].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0xfU)))) {
        vlSymsp->__Vcoverage[2985].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x10U)))) {
        vlSymsp->__Vcoverage[2986].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x11U)))) {
        vlSymsp->__Vcoverage[2987].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x12U)))) {
        vlSymsp->__Vcoverage[2988].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x13U)))) {
        vlSymsp->__Vcoverage[2989].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x14U)))) {
        vlSymsp->__Vcoverage[2990].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x15U)))) {
        vlSymsp->__Vcoverage[2991].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x16U)))) {
        vlSymsp->__Vcoverage[2992].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x17U)))) {
        vlSymsp->__Vcoverage[2993].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x18U)))) {
        vlSymsp->__Vcoverage[2994].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x19U)))) {
        vlSymsp->__Vcoverage[2995].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1aU)))) {
        vlSymsp->__Vcoverage[2996].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1bU)))) {
        vlSymsp->__Vcoverage[2997].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1cU)))) {
        vlSymsp->__Vcoverage[2998].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1dU)))) {
        vlSymsp->__Vcoverage[2999].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1eU)))) {
        vlSymsp->__Vcoverage[3000].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_F, 0x1fU)))) {
        vlSymsp->__Vcoverage[3001].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_F, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__d 
        = vlSelf->__PVT__pc_F;
    vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__in 
        = vlSelf->__PVT__pc_F;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0U)))) {
        vlSymsp->__Vcoverage[3162].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 1U)))) {
        vlSymsp->__Vcoverage[3163].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 2U)))) {
        vlSymsp->__Vcoverage[3164].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 3U)))) {
        vlSymsp->__Vcoverage[3165].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 4U)))) {
        vlSymsp->__Vcoverage[3166].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 5U)))) {
        vlSymsp->__Vcoverage[3167].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 6U)))) {
        vlSymsp->__Vcoverage[3168].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 7U)))) {
        vlSymsp->__Vcoverage[3169].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 8U)))) {
        vlSymsp->__Vcoverage[3170].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 9U)))) {
        vlSymsp->__Vcoverage[3171].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xaU)))) {
        vlSymsp->__Vcoverage[3172].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xbU)))) {
        vlSymsp->__Vcoverage[3173].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xcU)))) {
        vlSymsp->__Vcoverage[3174].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xdU)))) {
        vlSymsp->__Vcoverage[3175].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xeU)))) {
        vlSymsp->__Vcoverage[3176].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0xfU)))) {
        vlSymsp->__Vcoverage[3177].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x10U)))) {
        vlSymsp->__Vcoverage[3178].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x11U)))) {
        vlSymsp->__Vcoverage[3179].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x12U)))) {
        vlSymsp->__Vcoverage[3180].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x13U)))) {
        vlSymsp->__Vcoverage[3181].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x14U)))) {
        vlSymsp->__Vcoverage[3182].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x15U)))) {
        vlSymsp->__Vcoverage[3183].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x16U)))) {
        vlSymsp->__Vcoverage[3184].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x17U)))) {
        vlSymsp->__Vcoverage[3185].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x18U)))) {
        vlSymsp->__Vcoverage[3186].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x19U)))) {
        vlSymsp->__Vcoverage[3187].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[3188].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[3189].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[3190].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[3191].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[3192].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[3193].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__d 
        = vlSelf->__PVT__pc_D;
    vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__pc_D;
    vlSymsp->TOP__top__DUT__dpath__pc_plus_imm_D.__PVT__in0 
        = vlSelf->__PVT__pc_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0U)))) {
        vlSymsp->__Vcoverage[2902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 1U)))) {
        vlSymsp->__Vcoverage[2903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 2U)))) {
        vlSymsp->__Vcoverage[2904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 3U)))) {
        vlSymsp->__Vcoverage[2905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 4U)))) {
        vlSymsp->__Vcoverage[2906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 5U)))) {
        vlSymsp->__Vcoverage[2907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 6U)))) {
        vlSymsp->__Vcoverage[2908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 7U)))) {
        vlSymsp->__Vcoverage[2909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 8U)))) {
        vlSymsp->__Vcoverage[2910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 9U)))) {
        vlSymsp->__Vcoverage[2911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xaU)))) {
        vlSymsp->__Vcoverage[2912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xbU)))) {
        vlSymsp->__Vcoverage[2913].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xcU)))) {
        vlSymsp->__Vcoverage[2914].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xdU)))) {
        vlSymsp->__Vcoverage[2915].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xeU)))) {
        vlSymsp->__Vcoverage[2916].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xfU)))) {
        vlSymsp->__Vcoverage[2917].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x10U)))) {
        vlSymsp->__Vcoverage[2918].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x11U)))) {
        vlSymsp->__Vcoverage[2919].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x12U)))) {
        vlSymsp->__Vcoverage[2920].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x13U)))) {
        vlSymsp->__Vcoverage[2921].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x14U)))) {
        vlSymsp->__Vcoverage[2922].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x15U)))) {
        vlSymsp->__Vcoverage[2923].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x16U)))) {
        vlSymsp->__Vcoverage[2924].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x17U)))) {
        vlSymsp->__Vcoverage[2925].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x18U)))) {
        vlSymsp->__Vcoverage[2926].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x19U)))) {
        vlSymsp->__Vcoverage[2927].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[2928].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[2929].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[2930].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[2931].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[2932].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[2933].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__inst 
        = vlSelf->__PVT__inst_D;
    vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__inst 
        = vlSelf->__PVT__inst_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0U)))) {
        vlSymsp->__Vcoverage[3721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 1U)))) {
        vlSymsp->__Vcoverage[3722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 2U)))) {
        vlSymsp->__Vcoverage[3723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 3U)))) {
        vlSymsp->__Vcoverage[3724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 4U)))) {
        vlSymsp->__Vcoverage[3725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 5U)))) {
        vlSymsp->__Vcoverage[3726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 6U)))) {
        vlSymsp->__Vcoverage[3727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 7U)))) {
        vlSymsp->__Vcoverage[3728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 8U)))) {
        vlSymsp->__Vcoverage[3729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 9U)))) {
        vlSymsp->__Vcoverage[3730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3736].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3737].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3738].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3739].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3740].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3741].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3742].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3743].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3744].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3745].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3746].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3747].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3748].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3749].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3750].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3751].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op1_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3752].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op1_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op1_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in0 = vlSelf->__PVT__op1_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0U)))) {
        vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 1U)))) {
        vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 2U)))) {
        vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 3U)))) {
        vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 4U)))) {
        vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 5U)))) {
        vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 6U)))) {
        vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 7U)))) {
        vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 8U)))) {
        vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 9U)))) {
        vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3768].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3769].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3770].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3771].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3772].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3773].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3774].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3775].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3776].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3777].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3778].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3779].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3780].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3781].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3782].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3783].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__op2_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3784].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__op2_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__op2_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__alu.__PVT__in1 = vlSelf->__PVT__op2_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0U)))) {
        vlSymsp->__Vcoverage[3689].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 1U)))) {
        vlSymsp->__Vcoverage[3690].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 2U)))) {
        vlSymsp->__Vcoverage[3691].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 3U)))) {
        vlSymsp->__Vcoverage[3692].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 4U)))) {
        vlSymsp->__Vcoverage[3693].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 5U)))) {
        vlSymsp->__Vcoverage[3694].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 6U)))) {
        vlSymsp->__Vcoverage[3695].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 7U)))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 8U)))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 9U)))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xaU)))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xbU)))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xcU)))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xdU)))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xeU)))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0xfU)))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x10U)))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x11U)))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x12U)))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x13U)))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x14U)))) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x15U)))) {
        vlSymsp->__Vcoverage[3710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x16U)))) {
        vlSymsp->__Vcoverage[3711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x17U)))) {
        vlSymsp->__Vcoverage[3712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x18U)))) {
        vlSymsp->__Vcoverage[3713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x19U)))) {
        vlSymsp->__Vcoverage[3714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1aU)))) {
        vlSymsp->__Vcoverage[3715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1bU)))) {
        vlSymsp->__Vcoverage[3716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1cU)))) {
        vlSymsp->__Vcoverage[3717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1dU)))) {
        vlSymsp->__Vcoverage[3718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1eU)))) {
        vlSymsp->__Vcoverage[3719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ostream_msg, 0x1fU)))) {
        vlSymsp->__Vcoverage[3720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ostream_msg, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ostream_msg, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in0 
        = vlSelf->__PVT__ostream_msg;
    if (((IData)(vlSelf->__PVT__imul_req_rdy_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[2890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_rdy_D = vlSelf->__PVT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->__PVT__imul_resp_val_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[2891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_val_X = vlSelf->__PVT__imul_resp_val_X;
    }
    if (((IData)(vlSelf->__PVT__stats_en) ^ (IData)(vlSelf->__Vtogcov__stats_en))) {
        vlSymsp->__Vcoverage[2969].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en = vlSelf->__PVT__stats_en;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0U)))) {
        vlSymsp->__Vcoverage[3401].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 1U)))) {
        vlSymsp->__Vcoverage[3402].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 2U)))) {
        vlSymsp->__Vcoverage[3403].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 3U)))) {
        vlSymsp->__Vcoverage[3404].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 4U)))) {
        vlSymsp->__Vcoverage[3405].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 5U)))) {
        vlSymsp->__Vcoverage[3406].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 6U)))) {
        vlSymsp->__Vcoverage[3407].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 7U)))) {
        vlSymsp->__Vcoverage[3408].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 8U)))) {
        vlSymsp->__Vcoverage[3409].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 9U)))) {
        vlSymsp->__Vcoverage[3410].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xaU)))) {
        vlSymsp->__Vcoverage[3411].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xbU)))) {
        vlSymsp->__Vcoverage[3412].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xcU)))) {
        vlSymsp->__Vcoverage[3413].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xdU)))) {
        vlSymsp->__Vcoverage[3414].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xeU)))) {
        vlSymsp->__Vcoverage[3415].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0xfU)))) {
        vlSymsp->__Vcoverage[3416].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x10U)))) {
        vlSymsp->__Vcoverage[3417].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x11U)))) {
        vlSymsp->__Vcoverage[3418].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x12U)))) {
        vlSymsp->__Vcoverage[3419].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x13U)))) {
        vlSymsp->__Vcoverage[3420].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x14U)))) {
        vlSymsp->__Vcoverage[3421].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x15U)))) {
        vlSymsp->__Vcoverage[3422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x16U)))) {
        vlSymsp->__Vcoverage[3423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x17U)))) {
        vlSymsp->__Vcoverage[3424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x18U)))) {
        vlSymsp->__Vcoverage[3425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x19U)))) {
        vlSymsp->__Vcoverage[3426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[3427].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[3428].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[3429].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[3430].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[3431].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__rf_wdata_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[3432].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__rf_wdata_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wdata_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__wr_data 
        = vlSelf->__PVT__rf_wdata_W;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0U)))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 1U)))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 2U)))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 3U)))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 4U)))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 5U)))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 6U)))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 7U)))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 8U)))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 9U)))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__proc2mngr_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__proc2mngr_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__proc2mngr_data, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0U)))) {
        vlSymsp->__Vcoverage[3305].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 1U)))) {
        vlSymsp->__Vcoverage[3306].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 2U)))) {
        vlSymsp->__Vcoverage[3307].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 3U)))) {
        vlSymsp->__Vcoverage[3308].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 4U)))) {
        vlSymsp->__Vcoverage[3309].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 5U)))) {
        vlSymsp->__Vcoverage[3310].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 6U)))) {
        vlSymsp->__Vcoverage[3311].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 7U)))) {
        vlSymsp->__Vcoverage[3312].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 8U)))) {
        vlSymsp->__Vcoverage[3313].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 9U)))) {
        vlSymsp->__Vcoverage[3314].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xaU)))) {
        vlSymsp->__Vcoverage[3315].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xbU)))) {
        vlSymsp->__Vcoverage[3316].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xcU)))) {
        vlSymsp->__Vcoverage[3317].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xdU)))) {
        vlSymsp->__Vcoverage[3318].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xeU)))) {
        vlSymsp->__Vcoverage[3319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0xfU)))) {
        vlSymsp->__Vcoverage[3320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x10U)))) {
        vlSymsp->__Vcoverage[3321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x11U)))) {
        vlSymsp->__Vcoverage[3322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x12U)))) {
        vlSymsp->__Vcoverage[3323].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x13U)))) {
        vlSymsp->__Vcoverage[3324].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x14U)))) {
        vlSymsp->__Vcoverage[3325].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x15U)))) {
        vlSymsp->__Vcoverage[3326].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x16U)))) {
        vlSymsp->__Vcoverage[3327].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x17U)))) {
        vlSymsp->__Vcoverage[3328].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x18U)))) {
        vlSymsp->__Vcoverage[3329].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x19U)))) {
        vlSymsp->__Vcoverage[3330].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[3331].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[3332].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[3333].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[3334].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[3335].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[3336].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__bypass_from_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_W, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in3 
        = vlSelf->__PVT__bypass_from_W;
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in3 
        = vlSelf->__PVT__bypass_from_W;
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__1(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2623].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
    vlSymsp->TOP__top__DUT__dpath__pc_reg_F.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_D.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__inst_D_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__pc_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__op1_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__op2_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__br_target_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__dmem_write_data_reg_X.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__stats_en_reg_W.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__clk = vlSelf->__PVT__clk;
    vlSymsp->TOP__top__DUT__dpath__imul.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSelf->__PVT__br_cond_lt_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_lt;
    vlSelf->__PVT__br_cond_ltu_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_ltu;
    vlSelf->__PVT__alu_result_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__out;
    vlSelf->__PVT__pc_plus4_X = vlSymsp->TOP__top__DUT__dpath__pc_incr_X.__PVT__out;
    vlSelf->__PVT__pc_plus4_F = vlSymsp->TOP__top__DUT__dpath__pc_incr_F.__PVT__out;
    vlSelf->__PVT__inst_rd_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rd;
    vlSelf->__PVT__inst_rs1_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs1;
    vlSelf->__PVT__inst_rs2_D = vlSymsp->TOP__top__DUT__dpath__inst_unpack.__PVT__rs2;
    if (((IData)(vlSelf->__PVT__br_cond_lt_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[2935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_lt_X = vlSelf->__PVT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->__PVT__br_cond_ltu_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[2936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_ltu_X = vlSelf->__PVT__br_cond_ltu_X;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0U)))) {
        vlSymsp->__Vcoverage[3817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 1U)))) {
        vlSymsp->__Vcoverage[3818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 2U)))) {
        vlSymsp->__Vcoverage[3819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 3U)))) {
        vlSymsp->__Vcoverage[3820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 4U)))) {
        vlSymsp->__Vcoverage[3821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 5U)))) {
        vlSymsp->__Vcoverage[3822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 6U)))) {
        vlSymsp->__Vcoverage[3823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 7U)))) {
        vlSymsp->__Vcoverage[3824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 8U)))) {
        vlSymsp->__Vcoverage[3825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 9U)))) {
        vlSymsp->__Vcoverage[3826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3832].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3833].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3834].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3835].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3836].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3837].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3838].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3839].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3840].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3841].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3842].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3843].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3844].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3845].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3846].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3847].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__alu_result_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3848].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__alu_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__alu_result_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in2 
        = vlSelf->__PVT__alu_result_X;
    vlSelf->__PVT__dmem_reqstream_msg_addr = vlSelf->__PVT__alu_result_X;
    vlSelf->__PVT__jalr_target_X = vlSelf->__PVT__alu_result_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0U)))) {
        vlSymsp->__Vcoverage[3881].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 1U)))) {
        vlSymsp->__Vcoverage[3882].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 2U)))) {
        vlSymsp->__Vcoverage[3883].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 3U)))) {
        vlSymsp->__Vcoverage[3884].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 4U)))) {
        vlSymsp->__Vcoverage[3885].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 5U)))) {
        vlSymsp->__Vcoverage[3886].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 6U)))) {
        vlSymsp->__Vcoverage[3887].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 7U)))) {
        vlSymsp->__Vcoverage[3888].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 8U)))) {
        vlSymsp->__Vcoverage[3889].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 9U)))) {
        vlSymsp->__Vcoverage[3890].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3892].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3893].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3894].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3895].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3896].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3897].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3898].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3899].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3900].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3901].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3902].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3903].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3904].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3905].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3906].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3907].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3908].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3909].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3910].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3911].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3912].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_plus4_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__in1 
        = vlSelf->__PVT__pc_plus4_X;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0U)))) {
        vlSymsp->__Vcoverage[3034].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 1U)))) {
        vlSymsp->__Vcoverage[3035].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 2U)))) {
        vlSymsp->__Vcoverage[3036].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 3U)))) {
        vlSymsp->__Vcoverage[3037].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 4U)))) {
        vlSymsp->__Vcoverage[3038].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 5U)))) {
        vlSymsp->__Vcoverage[3039].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 6U)))) {
        vlSymsp->__Vcoverage[3040].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 7U)))) {
        vlSymsp->__Vcoverage[3041].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 8U)))) {
        vlSymsp->__Vcoverage[3042].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 9U)))) {
        vlSymsp->__Vcoverage[3043].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xaU)))) {
        vlSymsp->__Vcoverage[3044].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xbU)))) {
        vlSymsp->__Vcoverage[3045].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xcU)))) {
        vlSymsp->__Vcoverage[3046].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xdU)))) {
        vlSymsp->__Vcoverage[3047].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xeU)))) {
        vlSymsp->__Vcoverage[3048].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0xfU)))) {
        vlSymsp->__Vcoverage[3049].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x10U)))) {
        vlSymsp->__Vcoverage[3050].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x11U)))) {
        vlSymsp->__Vcoverage[3051].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x12U)))) {
        vlSymsp->__Vcoverage[3052].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x13U)))) {
        vlSymsp->__Vcoverage[3053].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x14U)))) {
        vlSymsp->__Vcoverage[3054].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x15U)))) {
        vlSymsp->__Vcoverage[3055].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x16U)))) {
        vlSymsp->__Vcoverage[3056].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x17U)))) {
        vlSymsp->__Vcoverage[3057].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x18U)))) {
        vlSymsp->__Vcoverage[3058].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x19U)))) {
        vlSymsp->__Vcoverage[3059].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1aU)))) {
        vlSymsp->__Vcoverage[3060].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1bU)))) {
        vlSymsp->__Vcoverage[3061].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1cU)))) {
        vlSymsp->__Vcoverage[3062].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1dU)))) {
        vlSymsp->__Vcoverage[3063].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1eU)))) {
        vlSymsp->__Vcoverage[3064].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__pc_plus4_F, 0x1fU)))) {
        vlSymsp->__Vcoverage[3065].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__pc_plus4_F, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__pc_plus4_F, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in0 
        = vlSelf->__PVT__pc_plus4_F;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 0U)))) {
        vlSymsp->__Vcoverage[3194].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 1U)))) {
        vlSymsp->__Vcoverage[3195].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 2U)))) {
        vlSymsp->__Vcoverage[3196].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 3U)))) {
        vlSymsp->__Vcoverage[3197].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 4U)))) {
        vlSymsp->__Vcoverage[3198].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 0U)))) {
        vlSymsp->__Vcoverage[3199].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 1U)))) {
        vlSymsp->__Vcoverage[3200].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 2U)))) {
        vlSymsp->__Vcoverage[3201].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 3U)))) {
        vlSymsp->__Vcoverage[3202].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 4U)))) {
        vlSymsp->__Vcoverage[3203].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr0 
        = vlSelf->__PVT__inst_rs1_D;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 0U)))) {
        vlSymsp->__Vcoverage[3204].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 1U)))) {
        vlSymsp->__Vcoverage[3205].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 2U)))) {
        vlSymsp->__Vcoverage[3206].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 3U)))) {
        vlSymsp->__Vcoverage[3207].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 4U)))) {
        vlSymsp->__Vcoverage[3208].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U)));
    }
    vlSymsp->TOP__top__DUT__dpath__rf.__PVT__rd_addr1 
        = vlSelf->__PVT__inst_rs2_D;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0U)))) {
        vlSymsp->__Vcoverage[2704].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 1U)))) {
        vlSymsp->__Vcoverage[2705].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 2U)))) {
        vlSymsp->__Vcoverage[2706].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 3U)))) {
        vlSymsp->__Vcoverage[2707].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 4U)))) {
        vlSymsp->__Vcoverage[2708].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 5U)))) {
        vlSymsp->__Vcoverage[2709].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 6U)))) {
        vlSymsp->__Vcoverage[2710].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 7U)))) {
        vlSymsp->__Vcoverage[2711].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 8U)))) {
        vlSymsp->__Vcoverage[2712].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 9U)))) {
        vlSymsp->__Vcoverage[2713].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xaU)))) {
        vlSymsp->__Vcoverage[2714].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xbU)))) {
        vlSymsp->__Vcoverage[2715].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xcU)))) {
        vlSymsp->__Vcoverage[2716].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xdU)))) {
        vlSymsp->__Vcoverage[2717].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xeU)))) {
        vlSymsp->__Vcoverage[2718].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0xfU)))) {
        vlSymsp->__Vcoverage[2719].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x10U)))) {
        vlSymsp->__Vcoverage[2720].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x11U)))) {
        vlSymsp->__Vcoverage[2721].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x12U)))) {
        vlSymsp->__Vcoverage[2722].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x13U)))) {
        vlSymsp->__Vcoverage[2723].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x14U)))) {
        vlSymsp->__Vcoverage[2724].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x15U)))) {
        vlSymsp->__Vcoverage[2725].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x16U)))) {
        vlSymsp->__Vcoverage[2726].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x17U)))) {
        vlSymsp->__Vcoverage[2727].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x18U)))) {
        vlSymsp->__Vcoverage[2728].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x19U)))) {
        vlSymsp->__Vcoverage[2729].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1aU)))) {
        vlSymsp->__Vcoverage[2730].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1bU)))) {
        vlSymsp->__Vcoverage[2731].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1cU)))) {
        vlSymsp->__Vcoverage[2732].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1dU)))) {
        vlSymsp->__Vcoverage[2733].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1eU)))) {
        vlSymsp->__Vcoverage[2734].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 0x1fU)))) {
        vlSymsp->__Vcoverage[2735].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__dmem_reqstream_msg_addr, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__dmem_reqstream_msg_addr, 0x1fU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0U)))) {
        vlSymsp->__Vcoverage[3130].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 1U)))) {
        vlSymsp->__Vcoverage[3131].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 2U)))) {
        vlSymsp->__Vcoverage[3132].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 3U)))) {
        vlSymsp->__Vcoverage[3133].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 4U)))) {
        vlSymsp->__Vcoverage[3134].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 5U)))) {
        vlSymsp->__Vcoverage[3135].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 6U)))) {
        vlSymsp->__Vcoverage[3136].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 7U)))) {
        vlSymsp->__Vcoverage[3137].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 8U)))) {
        vlSymsp->__Vcoverage[3138].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 9U)))) {
        vlSymsp->__Vcoverage[3139].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3140].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3141].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3142].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3143].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3144].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3145].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3146].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3147].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3148].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3149].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3150].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3151].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3152].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3153].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3154].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3155].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3156].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3157].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3158].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3159].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3160].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__jalr_target_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3161].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__jalr_target_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__jalr_target_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__pc_sel_mux_F.__PVT__in3 
        = vlSelf->__PVT__jalr_target_X;
}

VL_ATTR_COLD void Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__2(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___stl_sequent__TOP__top__DUT__dpath__2\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0U)))) {
        vlSymsp->__Vcoverage[2800].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 1U)))) {
        vlSymsp->__Vcoverage[2801].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 2U)))) {
        vlSymsp->__Vcoverage[2802].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 3U)))) {
        vlSymsp->__Vcoverage[2803].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 4U)))) {
        vlSymsp->__Vcoverage[2804].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 5U)))) {
        vlSymsp->__Vcoverage[2805].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 6U)))) {
        vlSymsp->__Vcoverage[2806].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 7U)))) {
        vlSymsp->__Vcoverage[2807].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 8U)))) {
        vlSymsp->__Vcoverage[2808].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 9U)))) {
        vlSymsp->__Vcoverage[2809].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xaU)))) {
        vlSymsp->__Vcoverage[2810].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xbU)))) {
        vlSymsp->__Vcoverage[2811].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xcU)))) {
        vlSymsp->__Vcoverage[2812].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xdU)))) {
        vlSymsp->__Vcoverage[2813].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xeU)))) {
        vlSymsp->__Vcoverage[2814].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0xfU)))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x10U)))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x11U)))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x12U)))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x13U)))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x14U)))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x15U)))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x16U)))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x17U)))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x18U)))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x19U)))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1aU)))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1bU)))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1cU)))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1dU)))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1eU)))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__mngr2proc_data, 0x1fU)))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__mngr2proc_data, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__mngr2proc_data, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__csrr_sel_mux_D.__PVT__in0 
        = vlSelf->__PVT__mngr2proc_data;
    if (((IData)(vlSelf->__PVT__op1_sel_D) ^ (IData)(vlSelf->__Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[2869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__op1_sel_D = vlSelf->__PVT__op1_sel_D;
    }
    vlSymsp->TOP__top__DUT__dpath__op1_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op1_sel_D;
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U)));
    }
    vlSymsp->TOP__top__DUT__dpath__op2_sel_mux_D.__PVT__sel 
        = vlSelf->__PVT__op2_sel_D;
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 0U)))) {
        vlSymsp->__Vcoverage[2874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 1U)))) {
        vlSymsp->__Vcoverage[2875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 2U)))) {
        vlSymsp->__Vcoverage[2876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U)));
    }
    vlSymsp->TOP__top__DUT__dpath__imm_gen_D.__PVT__imm_type 
        = vlSelf->__PVT__imm_type_D;
    if (((IData)(vlSelf->__PVT__reg_en_W) ^ (IData)(vlSelf->__Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[2894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_W = vlSelf->__PVT__reg_en_W;
    }
    vlSymsp->TOP__top__DUT__dpath__wb_result_reg_W.__PVT__en 
        = vlSelf->__PVT__reg_en_W;
    vlSelf->__PVT__ex_result_X = vlSymsp->TOP__top__DUT__dpath__ex_result_sel_mux_X.__PVT__out;
    vlSelf->__PVT__br_cond_eq_X = vlSymsp->TOP__top__DUT__dpath__alu.__PVT__ops_eq;
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0U)))) {
        vlSymsp->__Vcoverage[3849].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 1U)))) {
        vlSymsp->__Vcoverage[3850].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 2U)))) {
        vlSymsp->__Vcoverage[3851].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 3U)))) {
        vlSymsp->__Vcoverage[3852].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 4U)))) {
        vlSymsp->__Vcoverage[3853].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 5U)))) {
        vlSymsp->__Vcoverage[3854].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 6U)))) {
        vlSymsp->__Vcoverage[3855].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 7U)))) {
        vlSymsp->__Vcoverage[3856].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 8U)))) {
        vlSymsp->__Vcoverage[3857].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 9U)))) {
        vlSymsp->__Vcoverage[3858].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3859].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3860].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3861].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3862].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3863].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3864].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3865].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3866].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3867].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3868].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3869].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3870].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3871].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3872].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3873].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3874].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3875].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3876].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3877].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3878].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3879].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__ex_result_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3880].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__ex_result_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__ex_result_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__ex_result_reg_M.__PVT__d 
        = vlSelf->__PVT__ex_result_X;
    vlSelf->__PVT__bypass_from_X = vlSelf->__PVT__ex_result_X;
    if (((IData)(vlSelf->__PVT__br_cond_eq_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[2934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_eq_X = vlSelf->__PVT__br_cond_eq_X;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0U)))) {
        vlSymsp->__Vcoverage[3241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 1U)))) {
        vlSymsp->__Vcoverage[3242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 2U)))) {
        vlSymsp->__Vcoverage[3243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 3U)))) {
        vlSymsp->__Vcoverage[3244].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 4U)))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 5U)))) {
        vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 6U)))) {
        vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 7U)))) {
        vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 8U)))) {
        vlSymsp->__Vcoverage[3249].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 9U)))) {
        vlSymsp->__Vcoverage[3250].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xaU)))) {
        vlSymsp->__Vcoverage[3251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xbU)))) {
        vlSymsp->__Vcoverage[3252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xcU)))) {
        vlSymsp->__Vcoverage[3253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xdU)))) {
        vlSymsp->__Vcoverage[3254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xeU)))) {
        vlSymsp->__Vcoverage[3255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0xfU)))) {
        vlSymsp->__Vcoverage[3256].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x10U)))) {
        vlSymsp->__Vcoverage[3257].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x11U)))) {
        vlSymsp->__Vcoverage[3258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x12U)))) {
        vlSymsp->__Vcoverage[3259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x13U)))) {
        vlSymsp->__Vcoverage[3260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x14U)))) {
        vlSymsp->__Vcoverage[3261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x15U)))) {
        vlSymsp->__Vcoverage[3262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x16U)))) {
        vlSymsp->__Vcoverage[3263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x17U)))) {
        vlSymsp->__Vcoverage[3264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x18U)))) {
        vlSymsp->__Vcoverage[3265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x19U)))) {
        vlSymsp->__Vcoverage[3266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[3267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[3268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[3269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[3270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[3271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__bypass_from_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[3272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__bypass_from_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__bypass_from_X, 0x1fU)));
    }
    vlSymsp->TOP__top__DUT__dpath__op1_byp_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__bypass_from_X;
    vlSymsp->TOP__top__DUT__dpath__op2_byp_sel_mux_D.__PVT__in1 
        = vlSelf->__PVT__bypass_from_X;
}
