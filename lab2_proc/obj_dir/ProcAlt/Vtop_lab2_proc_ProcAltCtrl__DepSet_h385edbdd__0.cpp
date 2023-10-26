// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcAltCtrl.h"

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___ico_sequent__TOP__top__DUT__ctrl__0(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___ico_sequent__TOP__top__DUT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__clk) ^ (IData)(vlSelf->__Vtogcov__clk))) {
        vlSymsp->__Vcoverage[2204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__clk = vlSelf->__PVT__clk;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___act_sequent__TOP__top__DUT__ctrl__0(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___act_sequent__TOP__top__DUT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___act_sequent__TOP__top__DUT__ctrl__1(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___act_sequent__TOP__top__DUT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
    vlSelf->__PVT__ostall_mngr2proc_D = (((IData)(vlSelf->__PVT__val_D) 
                                          & (IData)(vlSelf->__PVT__mngr2proc_rdy_D)) 
                                         & (~ (IData)(vlSelf->__PVT__mngr2proc_val)));
    if (((IData)(vlSelf->__PVT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_mngr2proc_D = vlSelf->__PVT__ostall_mngr2proc_D;
    }
    vlSelf->__PVT__ostall_D = ((IData)(vlSelf->__PVT__val_D) 
                               & (((IData)(vlSelf->__PVT__ostall_mngr2proc_D) 
                                   | (IData)(vlSelf->__PVT__ostall_hazard_D)) 
                                  | (~ (IData)(vlSelf->__PVT__imul_req_rdy_D))));
    if (((IData)(vlSelf->__PVT__ostall_D) ^ (IData)(vlSelf->__Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_D = vlSelf->__PVT__ostall_D;
    }
    vlSelf->__PVT__stall_D = ((IData)(vlSelf->__PVT__val_D) 
                              & ((((IData)(vlSelf->__PVT__ostall_D) 
                                   | (IData)(vlSelf->__PVT__ostall_X)) 
                                  | (IData)(vlSelf->__PVT__ostall_M)) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    vlSelf->__PVT__imem_respstream_rdy = (1U & ((~ 
                                                 ((IData)(vlSelf->__PVT__val_F) 
                                                  & ((((IData)(vlSelf->__PVT__ostall_D) 
                                                       | (IData)(vlSelf->__PVT__ostall_X)) 
                                                      | (IData)(vlSelf->__PVT__ostall_M)) 
                                                     | (IData)(vlSelf->__PVT__ostall_W)))) 
                                                | (IData)(vlSelf->__PVT__squash_F)));
    vlSelf->__PVT__stall_F = ((IData)(vlSelf->__PVT__val_F) 
                              & (((((IData)(vlSelf->__PVT__ostall_F) 
                                    | (IData)(vlSelf->__PVT__ostall_D)) 
                                   | (IData)(vlSelf->__PVT__ostall_X)) 
                                  | (IData)(vlSelf->__PVT__ostall_M)) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    if (((IData)(vlSelf->__PVT__stall_D) ^ (IData)(vlSelf->__Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_D = vlSelf->__PVT__stall_D;
    }
    vlSelf->__PVT__next_val_D = (((IData)(vlSelf->__PVT__val_D) 
                                  & (~ (IData)(vlSelf->__PVT__stall_D))) 
                                 & (~ (IData)(vlSelf->__PVT__squash_D)));
    vlSelf->__PVT__reg_en_D = (1U & ((~ (IData)(vlSelf->__PVT__stall_D)) 
                                     | (IData)(vlSelf->__PVT__squash_D)));
    if ((0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__PVT__imul_req_val_D = (1U & (~ (IData)(vlSelf->__PVT__stall_D)));
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__imul_req_val_D = 0U;
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__mngr2proc_rdy = (((IData)(vlSelf->__PVT__val_D) 
                                     & (~ (IData)(vlSelf->__PVT__stall_D))) 
                                    & (IData)(vlSelf->__PVT__mngr2proc_rdy_D));
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
    if (((IData)(vlSelf->__PVT__stall_F) ^ (IData)(vlSelf->__Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_F = vlSelf->__PVT__stall_F;
    }
    vlSelf->__PVT__next_val_F = (((IData)(vlSelf->__PVT__val_F) 
                                  & (~ (IData)(vlSelf->__PVT__stall_F))) 
                                 & (~ (IData)(vlSelf->__PVT__squash_F)));
    vlSelf->__PVT__reg_en_F = (1U & ((~ (IData)(vlSelf->__PVT__stall_F)) 
                                     | (IData)(vlSelf->__PVT__squash_F)));
    if (((IData)(vlSelf->__PVT__next_val_D) ^ (IData)(vlSelf->__Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_D = vlSelf->__PVT__next_val_D;
    }
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
    if (((IData)(vlSelf->__PVT__next_val_F) ^ (IData)(vlSelf->__Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_F = vlSelf->__PVT__next_val_F;
    }
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___act_comb__TOP__top__DUT__ctrl__0(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___act_comb__TOP__top__DUT__ctrl__0\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_val = (1U & (((~ (IData)(vlSelf->__PVT__stall_F)) 
                                                | (IData)(vlSelf->__PVT__squash_F)) 
                                               & (~ (IData)(vlSelf->__PVT__reset))));
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__0(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__0\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[2207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_rdy = vlSelf->__PVT__imem_reqstream_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__1(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__1\n"); );
    // Body
    vlSelf->__Vdly__val_D = vlSelf->__PVT__val_D;
    vlSelf->__Vdly__val_F = vlSelf->__PVT__val_F;
    vlSelf->__Vdly__alu_fn_X = vlSelf->__PVT__alu_fn_X;
    vlSelf->__Vdly__br_type_X = vlSelf->__PVT__br_type_X;
    vlSelf->__Vdly__val_X = vlSelf->__PVT__val_X;
    vlSelf->__Vdly__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_M;
    vlSelf->__Vdly__dmem_reqstream_type_M = vlSelf->__PVT__dmem_reqstream_type_M;
    vlSelf->__Vdly__val_M = vlSelf->__PVT__val_M;
    vlSelf->__Vdly__stats_en_wen_pending_W = vlSelf->__PVT__stats_en_wen_pending_W;
    vlSelf->__Vdly__inst_W = vlSelf->__PVT__inst_W;
    vlSelf->__Vdly__rf_wen_pending_W = vlSelf->__PVT__rf_wen_pending_W;
    vlSelf->__Vdly__rf_waddr_W = vlSelf->__PVT__rf_waddr_W;
    vlSelf->__Vdly__proc2mngr_val_W = vlSelf->__PVT__proc2mngr_val_W;
    vlSelf->__Vdly__val_W = vlSelf->__PVT__val_W;
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__val_D = 0U;
        vlSymsp->__Vcoverage[2336].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__reg_en_D) {
        vlSelf->__Vdly__val_D = vlSelf->__PVT__next_val_F;
        vlSymsp->__Vcoverage[2334].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2335].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2337].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__val_F = 0U;
        vlSymsp->__Vcoverage[2315].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__reg_en_F) {
        vlSelf->__Vdly__val_F = 1U;
        vlSymsp->__Vcoverage[2313].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2314].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2316].fetch_add(1, std::memory_order_relaxed);
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__val_W = 0U;
        vlSymsp->__Vcoverage[2621].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__reg_en_W) {
        vlSelf->__Vdly__val_W = vlSelf->__PVT__next_val_M;
        vlSelf->__Vdly__rf_wen_pending_W = vlSelf->__PVT__rf_wen_M;
        vlSelf->__Vdly__inst_W = vlSelf->__PVT__inst_M;
        vlSelf->__Vdly__rf_waddr_W = vlSelf->__PVT__rf_waddr_M;
        vlSelf->__Vdly__proc2mngr_val_W = vlSelf->__PVT__proc2mngr_val_M;
        vlSelf->__Vdly__stats_en_wen_pending_W = vlSelf->__PVT__stats_en_wen_M;
        vlSymsp->__Vcoverage[2619].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2620].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2622].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__val_D = vlSelf->__Vdly__val_D;
    vlSelf->__PVT__val_F = vlSelf->__Vdly__val_F;
    vlSelf->__PVT__stats_en_wen_pending_W = vlSelf->__Vdly__stats_en_wen_pending_W;
    vlSelf->__PVT__inst_W = vlSelf->__Vdly__inst_W;
    vlSelf->__PVT__rf_wen_pending_W = vlSelf->__Vdly__rf_wen_pending_W;
    vlSelf->__PVT__rf_waddr_W = vlSelf->__Vdly__rf_waddr_W;
    vlSelf->__PVT__proc2mngr_val_W = vlSelf->__Vdly__proc2mngr_val_W;
    vlSelf->__PVT__val_W = vlSelf->__Vdly__val_W;
    vlSelf->__Vdly__proc2mngr_val_M = vlSelf->__PVT__proc2mngr_val_M;
    vlSelf->__Vdly__stats_en_wen_M = vlSelf->__PVT__stats_en_wen_M;
    vlSelf->__Vdly__inst_M = vlSelf->__PVT__inst_M;
    vlSelf->__Vdly__rf_wen_M = vlSelf->__PVT__rf_wen_M;
    vlSelf->__Vdly__rf_waddr_M = vlSelf->__PVT__rf_waddr_M;
    if (((IData)(vlSelf->__PVT__val_D) ^ (IData)(vlSelf->__Vtogcov__val_D))) {
        vlSymsp->__Vcoverage[2295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val_D = vlSelf->__PVT__val_D;
    }
    if (((IData)(vlSelf->__PVT__val_F) ^ (IData)(vlSelf->__Vtogcov__val_F))) {
        vlSymsp->__Vcoverage[2294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val_F = vlSelf->__PVT__val_F;
    }
    if (((IData)(vlSelf->__PVT__stats_en_wen_pending_W) 
         ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_pending_W))) {
        vlSymsp->__Vcoverage[2618].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_pending_W = vlSelf->__PVT__stats_en_wen_pending_W;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0U)))) {
        vlSymsp->__Vcoverage[2584].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 1U)))) {
        vlSymsp->__Vcoverage[2585].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 2U)))) {
        vlSymsp->__Vcoverage[2586].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 3U)))) {
        vlSymsp->__Vcoverage[2587].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 4U)))) {
        vlSymsp->__Vcoverage[2588].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 5U)))) {
        vlSymsp->__Vcoverage[2589].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 6U)))) {
        vlSymsp->__Vcoverage[2590].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 7U)))) {
        vlSymsp->__Vcoverage[2591].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 8U)))) {
        vlSymsp->__Vcoverage[2592].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 9U)))) {
        vlSymsp->__Vcoverage[2593].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xaU)))) {
        vlSymsp->__Vcoverage[2594].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xbU)))) {
        vlSymsp->__Vcoverage[2595].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xcU)))) {
        vlSymsp->__Vcoverage[2596].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xdU)))) {
        vlSymsp->__Vcoverage[2597].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xeU)))) {
        vlSymsp->__Vcoverage[2598].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0xfU)))) {
        vlSymsp->__Vcoverage[2599].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x10U)))) {
        vlSymsp->__Vcoverage[2600].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x11U)))) {
        vlSymsp->__Vcoverage[2601].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x12U)))) {
        vlSymsp->__Vcoverage[2602].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x13U)))) {
        vlSymsp->__Vcoverage[2603].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x14U)))) {
        vlSymsp->__Vcoverage[2604].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x15U)))) {
        vlSymsp->__Vcoverage[2605].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x16U)))) {
        vlSymsp->__Vcoverage[2606].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x17U)))) {
        vlSymsp->__Vcoverage[2607].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x18U)))) {
        vlSymsp->__Vcoverage[2608].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x19U)))) {
        vlSymsp->__Vcoverage[2609].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1aU)))) {
        vlSymsp->__Vcoverage[2610].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1bU)))) {
        vlSymsp->__Vcoverage[2611].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1cU)))) {
        vlSymsp->__Vcoverage[2612].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1dU)))) {
        vlSymsp->__Vcoverage[2613].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1eU)))) {
        vlSymsp->__Vcoverage[2614].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_W, 0x1fU)))) {
        vlSymsp->__Vcoverage[2615].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_W, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_W, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__rf_wen_pending_W) ^ (IData)(vlSelf->__Vtogcov__rf_wen_pending_W))) {
        vlSymsp->__Vcoverage[2617].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_pending_W = vlSelf->__PVT__rf_wen_pending_W;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 0U)))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 1U)))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 2U)))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 3U)))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_W), 4U)))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_W, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_W), 4U)));
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_val_W) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val_W))) {
        vlSymsp->__Vcoverage[2616].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val_W = vlSelf->__PVT__proc2mngr_val_W;
    }
    if (((IData)(vlSelf->__PVT__val_W) ^ (IData)(vlSelf->__Vtogcov__val_W))) {
        vlSymsp->__Vcoverage[2298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val_W = vlSelf->__PVT__val_W;
    }
    vlSelf->__PVT__stats_en_wen_W = ((IData)(vlSelf->__PVT__val_W) 
                                     & (IData)(vlSelf->__PVT__stats_en_wen_pending_W));
    vlSelf->__PVT__rf_wen_W = ((IData)(vlSelf->__PVT__val_W) 
                               & (IData)(vlSelf->__PVT__rf_wen_pending_W));
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__val_M = 0U;
        vlSymsp->__Vcoverage[2581].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__reg_en_M) {
        vlSelf->__Vdly__val_M = vlSelf->__PVT__next_val_X;
        vlSelf->__Vdly__rf_wen_M = vlSelf->__PVT__rf_wen_X;
        vlSelf->__Vdly__inst_M = vlSelf->__PVT__inst_X;
        vlSelf->__Vdly__rf_waddr_M = vlSelf->__PVT__rf_waddr_X;
        vlSelf->__Vdly__proc2mngr_val_M = vlSelf->__PVT__proc2mngr_val_X;
        vlSelf->__Vdly__dmem_reqstream_type_M = vlSelf->__PVT__dmem_reqstream_type_X;
        vlSelf->__Vdly__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_X;
        vlSelf->__Vdly__stats_en_wen_M = vlSelf->__PVT__stats_en_wen_X;
        vlSymsp->__Vcoverage[2579].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2580].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2582].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__stats_en_wen_W) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_W))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_W = vlSelf->__PVT__stats_en_wen_W;
    }
    if (((IData)(vlSelf->__PVT__rf_wen_W) ^ (IData)(vlSelf->__Vtogcov__rf_wen_W))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_W = vlSelf->__PVT__rf_wen_W;
    }
    vlSelf->__PVT__proc2mngr_val_M = vlSelf->__Vdly__proc2mngr_val_M;
    vlSelf->__PVT__stats_en_wen_M = vlSelf->__Vdly__stats_en_wen_M;
    vlSelf->__PVT__inst_M = vlSelf->__Vdly__inst_M;
    vlSelf->__PVT__wb_result_sel_M = vlSelf->__Vdly__wb_result_sel_M;
    vlSelf->__PVT__rf_wen_M = vlSelf->__Vdly__rf_wen_M;
    vlSelf->__PVT__rf_waddr_M = vlSelf->__Vdly__rf_waddr_M;
    vlSelf->__PVT__dmem_reqstream_type_M = vlSelf->__Vdly__dmem_reqstream_type_M;
    vlSelf->__PVT__val_M = vlSelf->__Vdly__val_M;
    vlSelf->__Vdly__proc2mngr_val_X = vlSelf->__PVT__proc2mngr_val_X;
    vlSelf->__Vdly__wb_result_sel_X = vlSelf->__PVT__wb_result_sel_X;
    vlSelf->__Vdly__stats_en_wen_X = vlSelf->__PVT__stats_en_wen_X;
    vlSelf->__Vdly__rf_wen_X = vlSelf->__PVT__rf_wen_X;
    vlSelf->__Vdly__rf_waddr_X = vlSelf->__PVT__rf_waddr_X;
    vlSelf->__Vdly__dmem_reqstream_type_X = vlSelf->__PVT__dmem_reqstream_type_X;
    vlSelf->__Vdly__inst_X = vlSelf->__PVT__inst_X;
    if (((IData)(vlSelf->__PVT__proc2mngr_val_M) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[2577].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val_M = vlSelf->__PVT__proc2mngr_val_M;
    }
    if (((IData)(vlSelf->__PVT__stats_en_wen_M) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_M))) {
        vlSymsp->__Vcoverage[2578].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_M = vlSelf->__PVT__stats_en_wen_M;
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0U)))) {
        vlSymsp->__Vcoverage[2537].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 1U)))) {
        vlSymsp->__Vcoverage[2538].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 2U)))) {
        vlSymsp->__Vcoverage[2539].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 3U)))) {
        vlSymsp->__Vcoverage[2540].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 4U)))) {
        vlSymsp->__Vcoverage[2541].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 5U)))) {
        vlSymsp->__Vcoverage[2542].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 6U)))) {
        vlSymsp->__Vcoverage[2543].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 7U)))) {
        vlSymsp->__Vcoverage[2544].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 8U)))) {
        vlSymsp->__Vcoverage[2545].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 9U)))) {
        vlSymsp->__Vcoverage[2546].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xaU)))) {
        vlSymsp->__Vcoverage[2547].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xbU)))) {
        vlSymsp->__Vcoverage[2548].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xcU)))) {
        vlSymsp->__Vcoverage[2549].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xdU)))) {
        vlSymsp->__Vcoverage[2550].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xeU)))) {
        vlSymsp->__Vcoverage[2551].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0xfU)))) {
        vlSymsp->__Vcoverage[2552].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x10U)))) {
        vlSymsp->__Vcoverage[2553].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x11U)))) {
        vlSymsp->__Vcoverage[2554].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x12U)))) {
        vlSymsp->__Vcoverage[2555].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x13U)))) {
        vlSymsp->__Vcoverage[2556].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x14U)))) {
        vlSymsp->__Vcoverage[2557].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x15U)))) {
        vlSymsp->__Vcoverage[2558].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x16U)))) {
        vlSymsp->__Vcoverage[2559].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x17U)))) {
        vlSymsp->__Vcoverage[2560].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x18U)))) {
        vlSymsp->__Vcoverage[2561].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x19U)))) {
        vlSymsp->__Vcoverage[2562].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1aU)))) {
        vlSymsp->__Vcoverage[2563].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1bU)))) {
        vlSymsp->__Vcoverage[2564].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1cU)))) {
        vlSymsp->__Vcoverage[2565].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1dU)))) {
        vlSymsp->__Vcoverage[2566].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1eU)))) {
        vlSymsp->__Vcoverage[2567].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_M, 0x1fU)))) {
        vlSymsp->__Vcoverage[2568].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_M, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_M, 0x1fU)));
    }
    if (((IData)(vlSelf->__PVT__wb_result_sel_M) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_M))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_M = vlSelf->__PVT__wb_result_sel_M;
    }
    if (((IData)(vlSelf->__PVT__rf_wen_M) ^ (IData)(vlSelf->__Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[2571].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_M = vlSelf->__PVT__rf_wen_M;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_M), 0U)))) {
        vlSymsp->__Vcoverage[2572].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_M, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_M), 1U)))) {
        vlSymsp->__Vcoverage[2573].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_M, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_M), 2U)))) {
        vlSymsp->__Vcoverage[2574].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_M, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_M), 3U)))) {
        vlSymsp->__Vcoverage[2575].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_M, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_M), 4U)))) {
        vlSymsp->__Vcoverage[2576].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_M, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_M), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_M), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_M), 0U)))) {
        vlSymsp->__Vcoverage[2569].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_type_M, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_M), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_M), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_M), 1U)))) {
        vlSymsp->__Vcoverage[2570].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_type_M, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_M), 1U)));
    }
    if (((IData)(vlSelf->__PVT__val_M) ^ (IData)(vlSelf->__Vtogcov__val_M))) {
        vlSymsp->__Vcoverage[2297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val_M = vlSelf->__PVT__val_M;
    }
    if (vlSelf->__PVT__reset) {
        vlSelf->__Vdly__val_X = 0U;
        vlSymsp->__Vcoverage[2513].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__reg_en_X) {
        vlSelf->__Vdly__val_X = vlSelf->__PVT__next_val_D;
        vlSelf->__Vdly__rf_wen_X = vlSelf->__PVT__rf_wen_D;
        vlSelf->__Vdly__inst_X = vlSelf->__PVT__inst_D;
        vlSelf->__Vdly__alu_fn_X = vlSelf->__PVT__alu_fn_D;
        vlSelf->__Vdly__rf_waddr_X = vlSelf->__PVT__rf_waddr_D;
        vlSelf->__Vdly__proc2mngr_val_X = vlSelf->__PVT__proc2mngr_val_D;
        vlSelf->__Vdly__dmem_reqstream_type_X = vlSelf->__PVT__dmem_reqstream_type_D;
        vlSelf->__Vdly__wb_result_sel_X = vlSelf->__PVT__wb_result_sel_D;
        vlSelf->__Vdly__stats_en_wen_X = vlSelf->__PVT__stats_en_wen_D;
        vlSelf->__Vdly__br_type_X = vlSelf->__PVT__br_type_D;
        vlSymsp->__Vcoverage[2511].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2512].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2514].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__proc2mngr_val_X = vlSelf->__Vdly__proc2mngr_val_X;
    vlSelf->__PVT__wb_result_sel_X = vlSelf->__Vdly__wb_result_sel_X;
    vlSelf->__PVT__stats_en_wen_X = vlSelf->__Vdly__stats_en_wen_X;
    vlSelf->__PVT__rf_wen_X = vlSelf->__Vdly__rf_wen_X;
    vlSelf->__PVT__rf_waddr_X = vlSelf->__Vdly__rf_waddr_X;
    vlSelf->__PVT__alu_fn_X = vlSelf->__Vdly__alu_fn_X;
    vlSelf->__PVT__br_type_X = vlSelf->__Vdly__br_type_X;
    vlSelf->__PVT__dmem_reqstream_type_X = vlSelf->__Vdly__dmem_reqstream_type_X;
    vlSelf->__PVT__inst_X = vlSelf->__Vdly__inst_X;
    vlSelf->__PVT__val_X = vlSelf->__Vdly__val_X;
    if (((IData)(vlSelf->__PVT__proc2mngr_val_X) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[2506].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val_X = vlSelf->__PVT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->__PVT__wb_result_sel_X) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[2499].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_X = vlSelf->__PVT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->__PVT__stats_en_wen_X) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[2507].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_X = vlSelf->__PVT__stats_en_wen_X;
    }
    if (((IData)(vlSelf->__PVT__rf_wen_X) ^ (IData)(vlSelf->__Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[2500].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_X = vlSelf->__PVT__rf_wen_X;
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_X), 0U)))) {
        vlSymsp->__Vcoverage[2501].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_X, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_X), 1U)))) {
        vlSymsp->__Vcoverage[2502].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_X, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_X), 2U)))) {
        vlSymsp->__Vcoverage[2503].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_X, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_X), 3U)))) {
        vlSymsp->__Vcoverage[2504].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_X, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_X), 4U)))) {
        vlSymsp->__Vcoverage[2505].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_X, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_X), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 0U)))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 1U)))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 2U)))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_X), 3U)))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_fn_X, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_X), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_X), 0U)))) {
        vlSymsp->__Vcoverage[2508].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__br_type_X, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_X), 1U)))) {
        vlSymsp->__Vcoverage[2509].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__br_type_X, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_X), 2U)))) {
        vlSymsp->__Vcoverage[2510].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__br_type_X, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_X), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_X), 0U)))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_type_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_X), 1U)))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_type_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_X), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0U)))) {
        vlSymsp->__Vcoverage[2467].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 1U)))) {
        vlSymsp->__Vcoverage[2468].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 2U)))) {
        vlSymsp->__Vcoverage[2469].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 3U)))) {
        vlSymsp->__Vcoverage[2470].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 4U)))) {
        vlSymsp->__Vcoverage[2471].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 5U)))) {
        vlSymsp->__Vcoverage[2472].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 6U)))) {
        vlSymsp->__Vcoverage[2473].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 7U)))) {
        vlSymsp->__Vcoverage[2474].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 8U)))) {
        vlSymsp->__Vcoverage[2475].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 9U)))) {
        vlSymsp->__Vcoverage[2476].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xaU)))) {
        vlSymsp->__Vcoverage[2477].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xbU)))) {
        vlSymsp->__Vcoverage[2478].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xcU)))) {
        vlSymsp->__Vcoverage[2479].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xdU)))) {
        vlSymsp->__Vcoverage[2480].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xeU)))) {
        vlSymsp->__Vcoverage[2481].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0xfU)))) {
        vlSymsp->__Vcoverage[2482].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x10U)))) {
        vlSymsp->__Vcoverage[2483].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x11U)))) {
        vlSymsp->__Vcoverage[2484].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x12U)))) {
        vlSymsp->__Vcoverage[2485].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x13U)))) {
        vlSymsp->__Vcoverage[2486].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x14U)))) {
        vlSymsp->__Vcoverage[2487].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x15U)))) {
        vlSymsp->__Vcoverage[2488].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x16U)))) {
        vlSymsp->__Vcoverage[2489].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x17U)))) {
        vlSymsp->__Vcoverage[2490].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x18U)))) {
        vlSymsp->__Vcoverage[2491].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x19U)))) {
        vlSymsp->__Vcoverage[2492].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1aU)))) {
        vlSymsp->__Vcoverage[2493].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1bU)))) {
        vlSymsp->__Vcoverage[2494].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1cU)))) {
        vlSymsp->__Vcoverage[2495].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1dU)))) {
        vlSymsp->__Vcoverage[2496].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1eU)))) {
        vlSymsp->__Vcoverage[2497].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_X, 0x1fU)))) {
        vlSymsp->__Vcoverage[2498].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_X, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_X, 0x1fU)));
    }
    if ((0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__ex_result_sel_X = 0U;
        vlSymsp->__Vcoverage[2532].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x6fU == (0x7fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__ex_result_sel_X = 1U;
        vlSymsp->__Vcoverage[2533].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x67U == (0x707fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__ex_result_sel_X = 1U;
        vlSymsp->__Vcoverage[2534].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__ex_result_sel_X = 2U;
        vlSymsp->__Vcoverage[2535].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2536].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__val_X) ^ (IData)(vlSelf->__Vtogcov__val_X))) {
        vlSymsp->__Vcoverage[2296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__val_X = vlSelf->__PVT__val_X;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 0U)))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__ex_result_sel_X), 1U)))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__ex_result_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_result_sel_X), 1U)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__2(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__2\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__proc2mngr_rdy) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_rdy))) {
        vlSymsp->__Vcoverage[2218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_rdy = vlSelf->__PVT__proc2mngr_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__3(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[2212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_rdy = vlSelf->__PVT__dmem_reqstream_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__4(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__4\n"); );
    // Body
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0U)))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 1U)))) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 2U)))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 3U)))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 4U)))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 5U)))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 6U)))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 7U)))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 8U)))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 9U)))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xaU)))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xbU)))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xbU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xcU)))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xcU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xcU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xdU)))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xdU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xdU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xeU)))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xeU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xeU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0xfU)))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xfU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0xfU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x10U)))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x10U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x10U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x11U)))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x11U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x11U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x12U)))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x12U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x12U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x13U)))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x13U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x13U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x14U)))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x14U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x14U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x15U)))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x15U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x15U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x16U)))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x16U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x16U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x17U)))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x17U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x17U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x18U)))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x18U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x18U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x19U)))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x19U, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x19U)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1aU)))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1aU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1aU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1bU)))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1bU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1bU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1cU)))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1cU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1cU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1dU)))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1dU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1dU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1eU)))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1eU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1eU)));
    }
    if ((1U & (VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU) 
               ^ VL_BITSEL_IIII(32, vlSelf->__Vtogcov__inst_D, 0x1fU)))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0x1fU, vlSelf->__Vtogcov__inst_D, 
                        (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__inst_D, 0x1fU)));
    }
    if ((0x17U == (0x7fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__PVT__op1_sel_D = 1U;
        vlSymsp->__Vcoverage[2331].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__op1_sel_D = 0U;
        vlSymsp->__Vcoverage[2332].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2333].fetch_add(1, std::memory_order_relaxed);
    if ((0x6fU == (0x7fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__PVT__osquash_D = 1U;
        vlSymsp->__Vcoverage[2460].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__osquash_D = 0U;
        vlSymsp->__Vcoverage[2461].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2462].fetch_add(1, std::memory_order_relaxed);
    if ((0x6fU == (0x7fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__PVT__pc_redirect_D = 1U;
        vlSelf->__PVT__pc_sel_D = 2U;
        vlSymsp->__Vcoverage[2328].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__pc_redirect_D = 0U;
        vlSelf->__PVT__pc_sel_D = 0U;
        vlSymsp->__Vcoverage[2329].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2330].fetch_add(1, std::memory_order_relaxed);
    vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__inst 
        = vlSelf->__PVT__inst_D;
    if (((((((((0x13U == vlSelf->__PVT__inst_D) | (0x33U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->__PVT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->__PVT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->__PVT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->__PVT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->__PVT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_D)))) {
        if ((0x13U == vlSelf->__PVT__inst_D)) {
            vlSelf->__Vtask_cs__0__cs_csrw = 0U;
            vlSelf->__Vtask_cs__0__cs_csrr = 0U;
            vlSelf->__Vtask_cs__0__cs_rf_wen = 0U;
            vlSelf->__Vtask_cs__0__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__0__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__0__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__0__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__0__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__0__cs_rs1_en = 0U;
            vlSelf->__Vtask_cs__0__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__0__cs_br_type = 0U;
            vlSelf->__Vtask_cs__0__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__0__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__0__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__0__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__0__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__0__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__0__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__0__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__0__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__0__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__0__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__0__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__0__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2385].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x33U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__1__cs_csrw = 0U;
            vlSelf->__Vtask_cs__1__cs_csrr = 0U;
            vlSelf->__Vtask_cs__1__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__1__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__1__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__1__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__1__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__1__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__1__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__1__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__1__cs_br_type = 0U;
            vlSelf->__Vtask_cs__1__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__1__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__1__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__1__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__1__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__1__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__1__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__1__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__1__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__1__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__1__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__1__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__1__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2386].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x2003U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__2__cs_csrw = 0U;
            vlSelf->__Vtask_cs__2__cs_csrr = 0U;
            vlSelf->__Vtask_cs__2__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__2__cs_wb_result_sel = 1U;
            vlSelf->__Vtask_cs__2__cs_dmem_reqstream_type = 1U;
            vlSelf->__Vtask_cs__2__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__2__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__2__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__2__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__2__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__2__cs_br_type = 0U;
            vlSelf->__Vtask_cs__2__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__2__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__2__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__2__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__2__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__2__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__2__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__2__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__2__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__2__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__2__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__2__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__2__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2387].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x1063U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__3__cs_csrw = 0U;
            vlSelf->__Vtask_cs__3__cs_csrr = 0U;
            vlSelf->__Vtask_cs__3__cs_rf_wen = 0U;
            vlSelf->__Vtask_cs__3__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__3__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__3__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__3__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__3__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__3__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__3__cs_imm_type = 2U;
            vlSelf->__Vtask_cs__3__cs_br_type = 1U;
            vlSelf->__Vtask_cs__3__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__3__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__3__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__3__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__3__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__3__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__3__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__3__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__3__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__3__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__3__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__3__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__3__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2388].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x2073U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__4__cs_csrw = 0U;
            vlSelf->__Vtask_cs__4__cs_csrr = 1U;
            vlSelf->__Vtask_cs__4__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__4__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__4__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__4__cs_alu_fn = 0xcU;
            vlSelf->__Vtask_cs__4__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__4__cs_op2_sel = 2U;
            vlSelf->__Vtask_cs__4__cs_rs1_en = 0U;
            vlSelf->__Vtask_cs__4__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__4__cs_br_type = 0U;
            vlSelf->__Vtask_cs__4__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__4__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__4__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__4__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__4__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__4__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__4__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__4__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__4__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__4__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__4__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__4__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__4__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2389].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x1073U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__5__cs_csrw = 1U;
            vlSelf->__Vtask_cs__5__cs_csrr = 0U;
            vlSelf->__Vtask_cs__5__cs_rf_wen = 0U;
            vlSelf->__Vtask_cs__5__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__5__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__5__cs_alu_fn = 0xbU;
            vlSelf->__Vtask_cs__5__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__5__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__5__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__5__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__5__cs_br_type = 0U;
            vlSelf->__Vtask_cs__5__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__5__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__5__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__5__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__5__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__5__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__5__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__5__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__5__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__5__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__5__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__5__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__5__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2390].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x40000033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__6__cs_csrw = 0U;
            vlSelf->__Vtask_cs__6__cs_csrr = 0U;
            vlSelf->__Vtask_cs__6__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__6__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__6__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__6__cs_alu_fn = 1U;
            vlSelf->__Vtask_cs__6__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__6__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__6__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__6__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__6__cs_br_type = 0U;
            vlSelf->__Vtask_cs__6__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__6__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__6__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__6__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__6__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__6__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__6__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__6__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__6__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__6__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__6__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__6__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__6__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2391].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vtask_cs__7__cs_csrw = 0U;
            vlSelf->__Vtask_cs__7__cs_csrr = 0U;
            vlSelf->__Vtask_cs__7__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__7__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__7__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__7__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__7__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__7__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__7__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__7__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__7__cs_br_type = 0U;
            vlSelf->__Vtask_cs__7__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__7__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__7__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__7__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__7__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__7__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__7__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__7__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__7__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__7__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__7__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__7__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__7__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2392].fetch_add(1, std::memory_order_relaxed);
        }
    } else if (((((((((0x7033U == (0xfe00707fU & vlSelf->__PVT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlSelf->__PVT__inst_D)))) {
        if ((0x7033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__8__cs_csrw = 0U;
            vlSelf->__Vtask_cs__8__cs_csrr = 0U;
            vlSelf->__Vtask_cs__8__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__8__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__8__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__8__cs_alu_fn = 3U;
            vlSelf->__Vtask_cs__8__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__8__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__8__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__8__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__8__cs_br_type = 0U;
            vlSelf->__Vtask_cs__8__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__8__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__8__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__8__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__8__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__8__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__8__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__8__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__8__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__8__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__8__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__8__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__8__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2393].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x6033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__9__cs_csrw = 0U;
            vlSelf->__Vtask_cs__9__cs_csrr = 0U;
            vlSelf->__Vtask_cs__9__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__9__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__9__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__9__cs_alu_fn = 4U;
            vlSelf->__Vtask_cs__9__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__9__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__9__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__9__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__9__cs_br_type = 0U;
            vlSelf->__Vtask_cs__9__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__9__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__9__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__9__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__9__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__9__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__9__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__9__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__9__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__9__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__9__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__9__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__9__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2394].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x4033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__10__cs_csrw = 0U;
            vlSelf->__Vtask_cs__10__cs_csrr = 0U;
            vlSelf->__Vtask_cs__10__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__10__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__10__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__10__cs_alu_fn = 2U;
            vlSelf->__Vtask_cs__10__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__10__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__10__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__10__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__10__cs_br_type = 0U;
            vlSelf->__Vtask_cs__10__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__10__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__10__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__10__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__10__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__10__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__10__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__10__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__10__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__10__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__10__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__10__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__10__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2395].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x2033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__11__cs_csrw = 0U;
            vlSelf->__Vtask_cs__11__cs_csrr = 0U;
            vlSelf->__Vtask_cs__11__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__11__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__11__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__11__cs_alu_fn = 8U;
            vlSelf->__Vtask_cs__11__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__11__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__11__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__11__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__11__cs_br_type = 0U;
            vlSelf->__Vtask_cs__11__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__11__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__11__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__11__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__11__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__11__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__11__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__11__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__11__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__11__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__11__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__11__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__11__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2396].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x3033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__12__cs_csrw = 0U;
            vlSelf->__Vtask_cs__12__cs_csrr = 0U;
            vlSelf->__Vtask_cs__12__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__12__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__12__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__12__cs_alu_fn = 9U;
            vlSelf->__Vtask_cs__12__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__12__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__12__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__12__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__12__cs_br_type = 0U;
            vlSelf->__Vtask_cs__12__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__12__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__12__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__12__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__12__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__12__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__12__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__12__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__12__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__12__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__12__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__12__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__12__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2397].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x40005033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__13__cs_csrw = 0U;
            vlSelf->__Vtask_cs__13__cs_csrr = 0U;
            vlSelf->__Vtask_cs__13__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__13__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__13__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__13__cs_alu_fn = 0xaU;
            vlSelf->__Vtask_cs__13__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__13__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__13__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__13__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__13__cs_br_type = 0U;
            vlSelf->__Vtask_cs__13__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__13__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__13__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__13__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__13__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__13__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__13__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__13__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__13__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__13__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__13__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__13__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__13__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2398].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x5033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__14__cs_csrw = 0U;
            vlSelf->__Vtask_cs__14__cs_csrr = 0U;
            vlSelf->__Vtask_cs__14__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__14__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__14__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__14__cs_alu_fn = 5U;
            vlSelf->__Vtask_cs__14__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__14__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__14__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__14__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__14__cs_br_type = 0U;
            vlSelf->__Vtask_cs__14__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__14__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__14__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__14__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__14__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__14__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__14__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__14__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__14__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__14__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__14__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__14__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__14__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2399].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vtask_cs__15__cs_csrw = 0U;
            vlSelf->__Vtask_cs__15__cs_csrr = 0U;
            vlSelf->__Vtask_cs__15__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__15__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__15__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__15__cs_alu_fn = 6U;
            vlSelf->__Vtask_cs__15__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__15__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__15__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__15__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__15__cs_br_type = 0U;
            vlSelf->__Vtask_cs__15__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__15__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__15__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__15__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__15__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__15__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__15__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__15__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__15__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__15__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__15__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__15__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__15__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2400].fetch_add(1, std::memory_order_relaxed);
        }
    } else if (((((((((0x13U == (0x707fU & vlSelf->__PVT__inst_D)) 
                      | (0x6013U == (0x707fU & vlSelf->__PVT__inst_D))) 
                     | (0x7013U == (0x707fU & vlSelf->__PVT__inst_D))) 
                    | (0x4013U == (0x707fU & vlSelf->__PVT__inst_D))) 
                   | (0x2013U == (0x707fU & vlSelf->__PVT__inst_D))) 
                  | (0x3013U == (0x707fU & vlSelf->__PVT__inst_D))) 
                 | (0x40005013U == (0xfe00707fU & vlSelf->__PVT__inst_D))) 
                | (0x5013U == (0xfe00707fU & vlSelf->__PVT__inst_D)))) {
        if ((0x13U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__16__cs_csrw = 0U;
            vlSelf->__Vtask_cs__16__cs_csrr = 0U;
            vlSelf->__Vtask_cs__16__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__16__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__16__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__16__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__16__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__16__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__16__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__16__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__16__cs_br_type = 0U;
            vlSelf->__Vtask_cs__16__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__16__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__16__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__16__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__16__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__16__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__16__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__16__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__16__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__16__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__16__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__16__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__16__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2401].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x6013U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__17__cs_csrw = 0U;
            vlSelf->__Vtask_cs__17__cs_csrr = 0U;
            vlSelf->__Vtask_cs__17__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__17__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__17__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__17__cs_alu_fn = 4U;
            vlSelf->__Vtask_cs__17__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__17__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__17__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__17__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__17__cs_br_type = 0U;
            vlSelf->__Vtask_cs__17__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__17__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__17__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__17__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__17__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__17__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__17__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__17__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__17__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__17__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__17__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__17__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__17__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2402].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x7013U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__18__cs_csrw = 0U;
            vlSelf->__Vtask_cs__18__cs_csrr = 0U;
            vlSelf->__Vtask_cs__18__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__18__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__18__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__18__cs_alu_fn = 3U;
            vlSelf->__Vtask_cs__18__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__18__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__18__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__18__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__18__cs_br_type = 0U;
            vlSelf->__Vtask_cs__18__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__18__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__18__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__18__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__18__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__18__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__18__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__18__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__18__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__18__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__18__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__18__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__18__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2403].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x4013U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__19__cs_csrw = 0U;
            vlSelf->__Vtask_cs__19__cs_csrr = 0U;
            vlSelf->__Vtask_cs__19__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__19__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__19__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__19__cs_alu_fn = 2U;
            vlSelf->__Vtask_cs__19__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__19__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__19__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__19__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__19__cs_br_type = 0U;
            vlSelf->__Vtask_cs__19__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__19__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__19__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__19__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__19__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__19__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__19__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__19__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__19__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__19__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__19__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__19__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__19__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2404].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x2013U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__20__cs_csrw = 0U;
            vlSelf->__Vtask_cs__20__cs_csrr = 0U;
            vlSelf->__Vtask_cs__20__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__20__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__20__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__20__cs_alu_fn = 8U;
            vlSelf->__Vtask_cs__20__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__20__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__20__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__20__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__20__cs_br_type = 0U;
            vlSelf->__Vtask_cs__20__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__20__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__20__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__20__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__20__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__20__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__20__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__20__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__20__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__20__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__20__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__20__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__20__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2405].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x3013U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__21__cs_csrw = 0U;
            vlSelf->__Vtask_cs__21__cs_csrr = 0U;
            vlSelf->__Vtask_cs__21__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__21__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__21__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__21__cs_alu_fn = 9U;
            vlSelf->__Vtask_cs__21__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__21__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__21__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__21__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__21__cs_br_type = 0U;
            vlSelf->__Vtask_cs__21__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__21__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__21__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__21__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__21__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__21__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__21__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__21__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__21__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__21__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__21__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__21__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__21__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2406].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x40005013U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__22__cs_csrw = 0U;
            vlSelf->__Vtask_cs__22__cs_csrr = 0U;
            vlSelf->__Vtask_cs__22__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__22__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__22__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__22__cs_alu_fn = 0xaU;
            vlSelf->__Vtask_cs__22__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__22__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__22__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__22__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__22__cs_br_type = 0U;
            vlSelf->__Vtask_cs__22__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__22__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__22__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__22__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__22__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__22__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__22__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__22__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__22__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__22__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__22__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__22__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__22__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2407].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vtask_cs__23__cs_csrw = 0U;
            vlSelf->__Vtask_cs__23__cs_csrr = 0U;
            vlSelf->__Vtask_cs__23__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__23__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__23__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__23__cs_alu_fn = 5U;
            vlSelf->__Vtask_cs__23__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__23__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__23__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__23__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__23__cs_br_type = 0U;
            vlSelf->__Vtask_cs__23__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__23__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__23__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__23__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__23__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__23__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__23__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__23__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__23__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__23__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__23__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__23__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__23__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2408].fetch_add(1, std::memory_order_relaxed);
        }
    } else if (((((((((0x1013U == (0xfe00707fU & vlSelf->__PVT__inst_D)) 
                      | (0x37U == (0x7fU & vlSelf->__PVT__inst_D))) 
                     | (0x17U == (0x7fU & vlSelf->__PVT__inst_D))) 
                    | (0x2023U == (0x707fU & vlSelf->__PVT__inst_D))) 
                   | (0x6fU == (0x7fU & vlSelf->__PVT__inst_D))) 
                  | (0x67U == (0x707fU & vlSelf->__PVT__inst_D))) 
                 | (0x63U == (0x707fU & vlSelf->__PVT__inst_D))) 
                | (0x4063U == (0x707fU & vlSelf->__PVT__inst_D)))) {
        if ((0x1013U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__24__cs_csrw = 0U;
            vlSelf->__Vtask_cs__24__cs_csrr = 0U;
            vlSelf->__Vtask_cs__24__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__24__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__24__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__24__cs_alu_fn = 6U;
            vlSelf->__Vtask_cs__24__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__24__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__24__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__24__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__24__cs_br_type = 0U;
            vlSelf->__Vtask_cs__24__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__24__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__24__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__24__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__24__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__24__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__24__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__24__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__24__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__24__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__24__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__24__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__24__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2409].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x37U == (0x7fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__25__cs_csrw = 0U;
            vlSelf->__Vtask_cs__25__cs_csrr = 0U;
            vlSelf->__Vtask_cs__25__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__25__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__25__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__25__cs_alu_fn = 0xcU;
            vlSelf->__Vtask_cs__25__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__25__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__25__cs_rs1_en = 0U;
            vlSelf->__Vtask_cs__25__cs_imm_type = 3U;
            vlSelf->__Vtask_cs__25__cs_br_type = 0U;
            vlSelf->__Vtask_cs__25__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__25__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__25__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__25__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__25__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__25__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__25__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__25__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__25__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__25__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__25__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__25__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__25__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2410].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x17U == (0x7fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__26__cs_csrw = 0U;
            vlSelf->__Vtask_cs__26__cs_csrr = 0U;
            vlSelf->__Vtask_cs__26__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__26__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__26__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__26__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__26__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__26__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__26__cs_rs1_en = 0U;
            vlSelf->__Vtask_cs__26__cs_imm_type = 3U;
            vlSelf->__Vtask_cs__26__cs_br_type = 0U;
            vlSelf->__Vtask_cs__26__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__26__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__26__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__26__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__26__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__26__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__26__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__26__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__26__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__26__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__26__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__26__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__26__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2411].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x2023U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__27__cs_csrw = 0U;
            vlSelf->__Vtask_cs__27__cs_csrr = 0U;
            vlSelf->__Vtask_cs__27__cs_rf_wen = 0U;
            vlSelf->__Vtask_cs__27__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__27__cs_dmem_reqstream_type = 2U;
            vlSelf->__Vtask_cs__27__cs_alu_fn = 7U;
            vlSelf->__Vtask_cs__27__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__27__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__27__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__27__cs_imm_type = 1U;
            vlSelf->__Vtask_cs__27__cs_br_type = 0U;
            vlSelf->__Vtask_cs__27__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__27__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__27__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__27__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__27__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__27__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__27__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__27__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__27__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__27__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__27__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__27__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__27__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2412].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x6fU == (0x7fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__28__cs_csrw = 0U;
            vlSelf->__Vtask_cs__28__cs_csrr = 0U;
            vlSelf->__Vtask_cs__28__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__28__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__28__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__28__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__28__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__28__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__28__cs_rs1_en = 0U;
            vlSelf->__Vtask_cs__28__cs_imm_type = 4U;
            vlSelf->__Vtask_cs__28__cs_br_type = 0U;
            vlSelf->__Vtask_cs__28__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__28__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__28__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__28__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__28__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__28__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__28__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__28__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__28__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__28__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__28__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__28__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__28__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2413].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x67U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__29__cs_csrw = 0U;
            vlSelf->__Vtask_cs__29__cs_csrr = 0U;
            vlSelf->__Vtask_cs__29__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__29__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__29__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__29__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__29__cs_rs2_en = 0U;
            vlSelf->__Vtask_cs__29__cs_op2_sel = 1U;
            vlSelf->__Vtask_cs__29__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__29__cs_imm_type = 0U;
            vlSelf->__Vtask_cs__29__cs_br_type = 0U;
            vlSelf->__Vtask_cs__29__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__29__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__29__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__29__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__29__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__29__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__29__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__29__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__29__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__29__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__29__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__29__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__29__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2414].fetch_add(1, std::memory_order_relaxed);
        } else if ((0x63U == (0x707fU & vlSelf->__PVT__inst_D))) {
            vlSelf->__Vtask_cs__30__cs_csrw = 0U;
            vlSelf->__Vtask_cs__30__cs_csrr = 0U;
            vlSelf->__Vtask_cs__30__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__30__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__30__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__30__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__30__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__30__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__30__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__30__cs_imm_type = 2U;
            vlSelf->__Vtask_cs__30__cs_br_type = 2U;
            vlSelf->__Vtask_cs__30__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__30__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__30__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__30__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__30__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__30__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__30__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__30__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__30__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__30__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__30__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__30__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__30__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2415].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__Vtask_cs__31__cs_csrw = 0U;
            vlSelf->__Vtask_cs__31__cs_csrr = 0U;
            vlSelf->__Vtask_cs__31__cs_rf_wen = 1U;
            vlSelf->__Vtask_cs__31__cs_wb_result_sel = 0U;
            vlSelf->__Vtask_cs__31__cs_dmem_reqstream_type = 0U;
            vlSelf->__Vtask_cs__31__cs_alu_fn = 0U;
            vlSelf->__Vtask_cs__31__cs_rs2_en = 1U;
            vlSelf->__Vtask_cs__31__cs_op2_sel = 0U;
            vlSelf->__Vtask_cs__31__cs_rs1_en = 1U;
            vlSelf->__Vtask_cs__31__cs_imm_type = 2U;
            vlSelf->__Vtask_cs__31__cs_br_type = 3U;
            vlSelf->__Vtask_cs__31__cs_inst_val = 1U;
            vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__31__cs_inst_val;
            vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__31__cs_br_type;
            vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__31__cs_imm_type;
            vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__31__cs_rs1_en;
            vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__31__cs_op2_sel;
            vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__31__cs_rs2_en;
            vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__31__cs_alu_fn;
            vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__31__cs_dmem_reqstream_type;
            vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__31__cs_wb_result_sel;
            vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__31__cs_rf_wen;
            vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__31__cs_csrr;
            vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__31__cs_csrw;
            vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[2416].fetch_add(1, std::memory_order_relaxed);
        }
    } else if ((0x6063U == (0x707fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__Vtask_cs__32__cs_csrw = 0U;
        vlSelf->__Vtask_cs__32__cs_csrr = 0U;
        vlSelf->__Vtask_cs__32__cs_rf_wen = 1U;
        vlSelf->__Vtask_cs__32__cs_wb_result_sel = 0U;
        vlSelf->__Vtask_cs__32__cs_dmem_reqstream_type = 0U;
        vlSelf->__Vtask_cs__32__cs_alu_fn = 0U;
        vlSelf->__Vtask_cs__32__cs_rs2_en = 1U;
        vlSelf->__Vtask_cs__32__cs_op2_sel = 0U;
        vlSelf->__Vtask_cs__32__cs_rs1_en = 1U;
        vlSelf->__Vtask_cs__32__cs_imm_type = 2U;
        vlSelf->__Vtask_cs__32__cs_br_type = 4U;
        vlSelf->__Vtask_cs__32__cs_inst_val = 1U;
        vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__32__cs_inst_val;
        vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__32__cs_br_type;
        vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__32__cs_imm_type;
        vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__32__cs_rs1_en;
        vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__32__cs_op2_sel;
        vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__32__cs_rs2_en;
        vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__32__cs_alu_fn;
        vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__32__cs_dmem_reqstream_type;
        vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__32__cs_wb_result_sel;
        vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__32__cs_rf_wen;
        vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__32__cs_csrr;
        vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__32__cs_csrw;
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2417].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x5063U == (0x707fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__Vtask_cs__33__cs_csrw = 0U;
        vlSelf->__Vtask_cs__33__cs_csrr = 0U;
        vlSelf->__Vtask_cs__33__cs_rf_wen = 1U;
        vlSelf->__Vtask_cs__33__cs_wb_result_sel = 0U;
        vlSelf->__Vtask_cs__33__cs_dmem_reqstream_type = 0U;
        vlSelf->__Vtask_cs__33__cs_alu_fn = 0U;
        vlSelf->__Vtask_cs__33__cs_rs2_en = 1U;
        vlSelf->__Vtask_cs__33__cs_op2_sel = 0U;
        vlSelf->__Vtask_cs__33__cs_rs1_en = 1U;
        vlSelf->__Vtask_cs__33__cs_imm_type = 2U;
        vlSelf->__Vtask_cs__33__cs_br_type = 5U;
        vlSelf->__Vtask_cs__33__cs_inst_val = 1U;
        vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__33__cs_inst_val;
        vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__33__cs_br_type;
        vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__33__cs_imm_type;
        vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__33__cs_rs1_en;
        vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__33__cs_op2_sel;
        vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__33__cs_rs2_en;
        vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__33__cs_alu_fn;
        vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__33__cs_dmem_reqstream_type;
        vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__33__cs_wb_result_sel;
        vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__33__cs_rf_wen;
        vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__33__cs_csrr;
        vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__33__cs_csrw;
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2418].fetch_add(1, std::memory_order_relaxed);
    } else if ((0x7063U == (0x707fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__Vtask_cs__34__cs_csrw = 0U;
        vlSelf->__Vtask_cs__34__cs_csrr = 0U;
        vlSelf->__Vtask_cs__34__cs_rf_wen = 1U;
        vlSelf->__Vtask_cs__34__cs_wb_result_sel = 0U;
        vlSelf->__Vtask_cs__34__cs_dmem_reqstream_type = 0U;
        vlSelf->__Vtask_cs__34__cs_alu_fn = 0U;
        vlSelf->__Vtask_cs__34__cs_rs2_en = 1U;
        vlSelf->__Vtask_cs__34__cs_op2_sel = 0U;
        vlSelf->__Vtask_cs__34__cs_rs1_en = 1U;
        vlSelf->__Vtask_cs__34__cs_imm_type = 2U;
        vlSelf->__Vtask_cs__34__cs_br_type = 6U;
        vlSelf->__Vtask_cs__34__cs_inst_val = 1U;
        vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__34__cs_inst_val;
        vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__34__cs_br_type;
        vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__34__cs_imm_type;
        vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__34__cs_rs1_en;
        vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__34__cs_op2_sel;
        vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__34__cs_rs2_en;
        vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__34__cs_alu_fn;
        vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__34__cs_dmem_reqstream_type;
        vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__34__cs_wb_result_sel;
        vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__34__cs_rf_wen;
        vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__34__cs_csrr;
        vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__34__cs_csrw;
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2419].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__Vtask_cs__35__cs_csrw = 0U;
        vlSelf->__Vtask_cs__35__cs_csrr = 0U;
        vlSelf->__Vtask_cs__35__cs_rf_wen = 0U;
        vlSelf->__Vtask_cs__35__cs_wb_result_sel = 0U;
        vlSelf->__Vtask_cs__35__cs_dmem_reqstream_type = 0U;
        vlSelf->__Vtask_cs__35__cs_alu_fn = 0U;
        vlSelf->__Vtask_cs__35__cs_rs2_en = 0U;
        vlSelf->__Vtask_cs__35__cs_op2_sel = 0U;
        vlSelf->__Vtask_cs__35__cs_rs1_en = 0U;
        vlSelf->__Vtask_cs__35__cs_imm_type = 0U;
        vlSelf->__Vtask_cs__35__cs_br_type = 0U;
        vlSelf->__Vtask_cs__35__cs_inst_val = 0U;
        vlSelf->__PVT__inst_val_D = vlSelf->__Vtask_cs__35__cs_inst_val;
        vlSelf->__PVT__br_type_D = vlSelf->__Vtask_cs__35__cs_br_type;
        vlSelf->__PVT__imm_type_D = vlSelf->__Vtask_cs__35__cs_imm_type;
        vlSelf->__PVT__rs1_en_D = vlSelf->__Vtask_cs__35__cs_rs1_en;
        vlSelf->__PVT__op2_sel_D = vlSelf->__Vtask_cs__35__cs_op2_sel;
        vlSelf->__PVT__rs2_en_D = vlSelf->__Vtask_cs__35__cs_rs2_en;
        vlSelf->__PVT__alu_fn_D = vlSelf->__Vtask_cs__35__cs_alu_fn;
        vlSelf->__PVT__dmem_reqstream_type_D = vlSelf->__Vtask_cs__35__cs_dmem_reqstream_type;
        vlSelf->__PVT__wb_result_sel_D = vlSelf->__Vtask_cs__35__cs_wb_result_sel;
        vlSelf->__PVT__rf_wen_D = vlSelf->__Vtask_cs__35__cs_rf_wen;
        vlSelf->__PVT__csrr_D = vlSelf->__Vtask_cs__35__cs_csrr;
        vlSelf->__PVT__csrw_D = vlSelf->__Vtask_cs__35__cs_csrw;
        vlSymsp->__Vcoverage[2384].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[2420].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2421].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__op1_sel_D) ^ (IData)(vlSelf->__Vtogcov__op1_sel_D))) {
        vlSymsp->__Vcoverage[2223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__op1_sel_D = vlSelf->__PVT__op1_sel_D;
    }
    if (((IData)(vlSelf->__PVT__osquash_D) ^ (IData)(vlSelf->__Vtogcov__osquash_D))) {
        vlSymsp->__Vcoverage[2309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__osquash_D = vlSelf->__PVT__osquash_D;
    }
    if (((IData)(vlSelf->__PVT__pc_redirect_D) ^ (IData)(vlSelf->__Vtogcov__pc_redirect_D))) {
        vlSymsp->__Vcoverage[2317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_redirect_D = vlSelf->__PVT__pc_redirect_D;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2319].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2320].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_D), 1U)));
    }
    if (((IData)(vlSelf->__PVT__inst_val_D) ^ (IData)(vlSelf->__Vtogcov__inst_val_D))) {
        vlSymsp->__Vcoverage[2365].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__inst_val_D = vlSelf->__PVT__inst_val_D;
    }
    if (((IData)(vlSelf->__PVT__wb_result_sel_D) ^ (IData)(vlSelf->__Vtogcov__wb_result_sel_D))) {
        vlSymsp->__Vcoverage[2377].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__wb_result_sel_D = vlSelf->__PVT__wb_result_sel_D;
    }
    if (((IData)(vlSelf->__PVT__rf_wen_D) ^ (IData)(vlSelf->__Vtogcov__rf_wen_D))) {
        vlSymsp->__Vcoverage[2378].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rf_wen_D = vlSelf->__PVT__rf_wen_D;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_D), 0U)))) {
        vlSymsp->__Vcoverage[2375].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__dmem_reqstream_type_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__dmem_reqstream_type_D), 1U)))) {
        vlSymsp->__Vcoverage[2376].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__dmem_reqstream_type_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__dmem_reqstream_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_D), 0U)))) {
        vlSymsp->__Vcoverage[2366].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__br_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_D), 1U)))) {
        vlSymsp->__Vcoverage[2367].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__br_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__br_type_D), 2U)))) {
        vlSymsp->__Vcoverage[2368].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__br_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__br_type_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 0U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_D), 0U)))) {
        vlSymsp->__Vcoverage[2371].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__alu_fn_D, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 1U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_D), 1U)))) {
        vlSymsp->__Vcoverage[2372].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__alu_fn_D, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 2U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_D), 2U)))) {
        vlSymsp->__Vcoverage[2373].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__alu_fn_D, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 3U) 
               ^ VL_BITSEL_IIII(4, (IData)(vlSelf->__Vtogcov__alu_fn_D), 3U)))) {
        vlSymsp->__Vcoverage[2374].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__alu_fn_D, 
                        (1U & VL_BITSEL_IIII(4, (IData)(vlSelf->__PVT__alu_fn_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2224].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2225].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_sel_D), 1U)));
    }
    if (((IData)(vlSelf->__PVT__csrr_D) ^ (IData)(vlSelf->__Vtogcov__csrr_D))) {
        vlSymsp->__Vcoverage[2379].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__csrr_D = vlSelf->__PVT__csrr_D;
    }
    if (((IData)(vlSelf->__PVT__csrw_D) ^ (IData)(vlSelf->__Vtogcov__csrw_D))) {
        vlSymsp->__Vcoverage[2380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__csrw_D = vlSelf->__PVT__csrw_D;
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 0U)))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 1U)))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U) 
               ^ VL_BITSEL_IIII(3, (IData)(vlSelf->__Vtogcov__imm_type_D), 2U)))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__imm_type_D, 
                        (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__imm_type_D), 2U)));
    }
    if (((IData)(vlSelf->__PVT__rs1_en_D) ^ (IData)(vlSelf->__Vtogcov__rs1_en_D))) {
        vlSymsp->__Vcoverage[2369].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rs1_en_D = vlSelf->__PVT__rs1_en_D;
    }
    if (((IData)(vlSelf->__PVT__rs2_en_D) ^ (IData)(vlSelf->__Vtogcov__rs2_en_D))) {
        vlSymsp->__Vcoverage[2370].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__rs2_en_D = vlSelf->__PVT__rs2_en_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__5(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__5\n"); );
    // Body
    vlSelf->__PVT__inst_rd_D = vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rd;
    vlSelf->__PVT__inst_csr_D = vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__csr;
    vlSelf->__PVT__inst_rs1_D = vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs1;
    vlSelf->__PVT__inst_rs2_D = vlSymsp->TOP__top__DUT__ctrl__inst_unpack.__PVT__rs2;
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 0U)))) {
        vlSymsp->__Vcoverage[2338].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 1U)))) {
        vlSymsp->__Vcoverage[2339].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 2U)))) {
        vlSymsp->__Vcoverage[2340].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 3U)))) {
        vlSymsp->__Vcoverage[2341].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rd_D), 4U)))) {
        vlSymsp->__Vcoverage[2342].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rd_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rd_D), 4U)));
    }
    vlSelf->__PVT__rf_waddr_D = vlSelf->__PVT__inst_rd_D;
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 0U)))) {
        vlSymsp->__Vcoverage[2353].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 1U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 1U)))) {
        vlSymsp->__Vcoverage[2354].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 2U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 2U)))) {
        vlSymsp->__Vcoverage[2355].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 3U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 3U)))) {
        vlSymsp->__Vcoverage[2356].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 4U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 4U)))) {
        vlSymsp->__Vcoverage[2357].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 5U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 5U)))) {
        vlSymsp->__Vcoverage[2358].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(5U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 5U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 6U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 6U)))) {
        vlSymsp->__Vcoverage[2359].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(6U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 6U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 7U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 7U)))) {
        vlSymsp->__Vcoverage[2360].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(7U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 7U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 8U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 8U)))) {
        vlSymsp->__Vcoverage[2361].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(8U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 8U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 9U) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 9U)))) {
        vlSymsp->__Vcoverage[2362].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(9U, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 9U)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0xaU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 0xaU)))) {
        vlSymsp->__Vcoverage[2363].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xaU, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0xaU)));
    }
    if ((1U & (VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0xbU) 
               ^ VL_BITSEL_IIII(12, (IData)(vlSelf->__Vtogcov__inst_csr_D), 0xbU)))) {
        vlSymsp->__Vcoverage[2364].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0xbU, vlSelf->__Vtogcov__inst_csr_D, 
                        (1U & VL_BITSEL_IIII(12, (IData)(vlSelf->__PVT__inst_csr_D), 0xbU)));
    }
    vlSelf->__PVT__proc2mngr_val_D = 0U;
    vlSelf->__PVT__mngr2proc_rdy_D = 0U;
    vlSelf->__PVT__csrr_sel_D = 0U;
    vlSelf->__PVT__stats_en_wen_D = 0U;
    if (((IData)(vlSelf->__PVT__csrw_D) & (0x7c0U == (IData)(vlSelf->__PVT__inst_csr_D)))) {
        vlSelf->__PVT__proc2mngr_val_D = 1U;
        vlSymsp->__Vcoverage[2427].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2428].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__csrr_D) & (0xfc0U == (IData)(vlSelf->__PVT__inst_csr_D)))) {
        vlSelf->__PVT__mngr2proc_rdy_D = 1U;
        vlSymsp->__Vcoverage[2429].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2430].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__csrw_D) & (0x7c1U == (IData)(vlSelf->__PVT__inst_csr_D)))) {
        vlSelf->__PVT__stats_en_wen_D = 1U;
        vlSymsp->__Vcoverage[2431].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2432].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__csrr_D) & (0xfc1U == (IData)(vlSelf->__PVT__inst_csr_D)))) {
        vlSelf->__PVT__csrr_sel_D = 1U;
        vlSymsp->__Vcoverage[2433].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2434].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->__PVT__csrr_D) & (0xf14U == (IData)(vlSelf->__PVT__inst_csr_D)))) {
        vlSelf->__PVT__csrr_sel_D = 2U;
        vlSymsp->__Vcoverage[2435].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSymsp->__Vcoverage[2436].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2437].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 0U)))) {
        vlSymsp->__Vcoverage[2343].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 1U)))) {
        vlSymsp->__Vcoverage[2344].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 2U)))) {
        vlSymsp->__Vcoverage[2345].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 3U)))) {
        vlSymsp->__Vcoverage[2346].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs1_D), 4U)))) {
        vlSymsp->__Vcoverage[2347].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs1_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs1_D), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 0U)))) {
        vlSymsp->__Vcoverage[2348].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 1U)))) {
        vlSymsp->__Vcoverage[2349].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 2U)))) {
        vlSymsp->__Vcoverage[2350].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 3U)))) {
        vlSymsp->__Vcoverage[2351].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__inst_rs2_D), 4U)))) {
        vlSymsp->__Vcoverage[2352].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__inst_rs2_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__inst_rs2_D), 4U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 0U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_D), 0U)))) {
        vlSymsp->__Vcoverage[2422].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__rf_waddr_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 1U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_D), 1U)))) {
        vlSymsp->__Vcoverage[2423].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__rf_waddr_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 2U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_D), 2U)))) {
        vlSymsp->__Vcoverage[2424].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(2U, vlSelf->__Vtogcov__rf_waddr_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 2U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 3U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_D), 3U)))) {
        vlSymsp->__Vcoverage[2425].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(3U, vlSelf->__Vtogcov__rf_waddr_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 3U)));
    }
    if ((1U & (VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 4U) 
               ^ VL_BITSEL_IIII(5, (IData)(vlSelf->__Vtogcov__rf_waddr_D), 4U)))) {
        vlSymsp->__Vcoverage[2426].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(4U, vlSelf->__Vtogcov__rf_waddr_D, 
                        (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__rf_waddr_D), 4U)));
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_val_D) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val_D))) {
        vlSymsp->__Vcoverage[2381].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val_D = vlSelf->__PVT__proc2mngr_val_D;
    }
    if (((IData)(vlSelf->__PVT__stats_en_wen_D) ^ (IData)(vlSelf->__Vtogcov__stats_en_wen_D))) {
        vlSymsp->__Vcoverage[2383].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stats_en_wen_D = vlSelf->__PVT__stats_en_wen_D;
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2226].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__csrr_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2227].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__csrr_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__csrr_sel_D), 1U)));
    }
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy_D) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy_D))) {
        vlSymsp->__Vcoverage[2382].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy_D = vlSelf->__PVT__mngr2proc_rdy_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__6(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_sequent__TOP__top__DUT__ctrl__6\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__reset) ^ (IData)(vlSelf->__Vtogcov__reset))) {
        vlSymsp->__Vcoverage[2205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reset = vlSelf->__PVT__reset;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__0(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__0\n"); );
    // Body
    vlSelf->__PVT__ostall_W = (((IData)(vlSelf->__PVT__val_W) 
                                & (IData)(vlSelf->__PVT__proc2mngr_val_W)) 
                               & (~ (IData)(vlSelf->__PVT__proc2mngr_rdy)));
    if (((IData)(vlSelf->__PVT__ostall_W) ^ (IData)(vlSelf->__Vtogcov__ostall_W))) {
        vlSymsp->__Vcoverage[2303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_W = vlSelf->__PVT__ostall_W;
    }
    vlSelf->__PVT__stall_W = ((IData)(vlSelf->__PVT__val_W) 
                              & (IData)(vlSelf->__PVT__ostall_W));
    if (((IData)(vlSelf->__PVT__stall_W) ^ (IData)(vlSelf->__Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[2308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_W = vlSelf->__PVT__stall_W;
    }
    vlSelf->__PVT__commit_inst = ((IData)(vlSelf->__PVT__val_W) 
                                  & (~ (IData)(vlSelf->__PVT__stall_W)));
    vlSelf->__PVT__reg_en_W = (1U & (~ (IData)(vlSelf->__PVT__stall_W)));
    vlSelf->__PVT__proc2mngr_val = (((IData)(vlSelf->__PVT__val_W) 
                                     & (~ (IData)(vlSelf->__PVT__stall_W))) 
                                    & (IData)(vlSelf->__PVT__proc2mngr_val_W));
    if (((IData)(vlSelf->__PVT__commit_inst) ^ (IData)(vlSelf->__Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[2293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__commit_inst = vlSelf->__PVT__commit_inst;
    }
    if (((IData)(vlSelf->__PVT__reg_en_W) ^ (IData)(vlSelf->__Vtogcov__reg_en_W))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_W = vlSelf->__PVT__reg_en_W;
    }
    if (((IData)(vlSelf->__PVT__proc2mngr_val) ^ (IData)(vlSelf->__Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[2217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__proc2mngr_val = vlSelf->__PVT__proc2mngr_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__1(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__1\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imul_req_rdy_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_rdy_D))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_rdy_D = vlSelf->__PVT__imul_req_rdy_D;
    }
    if (((IData)(vlSelf->__PVT__imul_resp_val_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_val_X))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_val_X = vlSelf->__PVT__imul_resp_val_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__2(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__2\n"); );
    // Body
    vlSelf->__PVT__bypass_waddr_W_rs1_D = (((((IData)(vlSelf->__PVT__rs1_en_D) 
                                              & (IData)(vlSelf->__PVT__val_W)) 
                                             & (IData)(vlSelf->__PVT__rf_wen_W)) 
                                            & ((IData)(vlSelf->__PVT__inst_rs1_D) 
                                               == (IData)(vlSelf->__PVT__rf_waddr_W))) 
                                           & (0U != (IData)(vlSelf->__PVT__rf_waddr_W)));
    vlSelf->__PVT__bypass_waddr_X_rs1_D = (((((((IData)(vlSelf->__PVT__val_D) 
                                                & (IData)(vlSelf->__PVT__rs1_en_D)) 
                                               & (IData)(vlSelf->__PVT__val_X)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_X)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs1_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                           & (1U != (IData)(vlSelf->__PVT__dmem_reqstream_type_X)));
    vlSelf->__PVT__ostall_waddr_X_rs1_D = ((((((IData)(vlSelf->__PVT__rs1_en_D) 
                                               & (IData)(vlSelf->__PVT__val_X)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_X)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs1_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                           & (1U == (IData)(vlSelf->__PVT__dmem_reqstream_type_X)));
    vlSelf->__PVT__bypass_waddr_W_rs2_D = (((((IData)(vlSelf->__PVT__rs2_en_D) 
                                              & (IData)(vlSelf->__PVT__val_W)) 
                                             & (IData)(vlSelf->__PVT__rf_wen_W)) 
                                            & ((IData)(vlSelf->__PVT__inst_rs2_D) 
                                               == (IData)(vlSelf->__PVT__rf_waddr_W))) 
                                           & (0U != (IData)(vlSelf->__PVT__rf_waddr_W)));
    vlSelf->__PVT__bypass_waddr_X_rs2_D = (((((((IData)(vlSelf->__PVT__val_D) 
                                                & (IData)(vlSelf->__PVT__rs2_en_D)) 
                                               & (IData)(vlSelf->__PVT__val_X)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_X)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs2_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                           & (1U != (IData)(vlSelf->__PVT__dmem_reqstream_type_X)));
    vlSelf->__PVT__ostall_waddr_X_rs2_D = ((((((IData)(vlSelf->__PVT__rs2_en_D) 
                                               & (IData)(vlSelf->__PVT__val_X)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_X)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs2_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_X))) 
                                           & (1U == (IData)(vlSelf->__PVT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->__PVT__bypass_waddr_W_rs1_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_W_rs1_D))) {
        vlSymsp->__Vcoverage[2448].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_W_rs1_D = vlSelf->__PVT__bypass_waddr_W_rs1_D;
    }
    if (((IData)(vlSelf->__PVT__bypass_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[2444].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_X_rs1_D = vlSelf->__PVT__bypass_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->__PVT__ostall_waddr_X_rs1_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_waddr_X_rs1_D))) {
        vlSymsp->__Vcoverage[2439].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_waddr_X_rs1_D = vlSelf->__PVT__ostall_waddr_X_rs1_D;
    }
    if (((IData)(vlSelf->__PVT__bypass_waddr_W_rs2_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_W_rs2_D))) {
        vlSymsp->__Vcoverage[2449].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_W_rs2_D = vlSelf->__PVT__bypass_waddr_W_rs2_D;
    }
    if (((IData)(vlSelf->__PVT__bypass_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[2445].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_X_rs2_D = vlSelf->__PVT__bypass_waddr_X_rs2_D;
    }
    if (((IData)(vlSelf->__PVT__ostall_waddr_X_rs2_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_waddr_X_rs2_D))) {
        vlSymsp->__Vcoverage[2441].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_waddr_X_rs2_D = vlSelf->__PVT__ostall_waddr_X_rs2_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__3(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__3\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__br_cond_lt_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_lt_X))) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_lt_X = vlSelf->__PVT__br_cond_lt_X;
    }
    if (((IData)(vlSelf->__PVT__br_cond_ltu_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_ltu_X))) {
        vlSymsp->__Vcoverage[2292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_ltu_X = vlSelf->__PVT__br_cond_ltu_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__4(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__4\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__br_cond_eq_X) ^ (IData)(vlSelf->__Vtogcov__br_cond_eq_X))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__br_cond_eq_X = vlSelf->__PVT__br_cond_eq_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__5(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__5\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__mngr2proc_val) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_val))) {
        vlSymsp->__Vcoverage[2215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_val = vlSelf->__PVT__mngr2proc_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__6(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__6\n"); );
    // Body
    if ((0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__ostall_X = ((IData)(vlSelf->__PVT__val_X) 
                                   & (~ (IData)(vlSelf->__PVT__imul_resp_val_X)));
        vlSymsp->__Vcoverage[2525].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__ostall_X = (((IData)(vlSelf->__PVT__val_X) 
                                    & (0U != (IData)(vlSelf->__PVT__dmem_reqstream_type_X))) 
                                   & (~ (IData)(vlSelf->__PVT__dmem_reqstream_rdy)));
        vlSymsp->__Vcoverage[2526].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2527].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__ostall_X) ^ (IData)(vlSelf->__Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[2301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_X = vlSelf->__PVT__ostall_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__7(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__7\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__dmem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[2213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_val = vlSelf->__PVT__dmem_respstream_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__8(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__8\n"); );
    // Body
    if ((0x67U == (0x707fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__pc_redirect_X = 1U;
        vlSelf->__PVT__pc_sel_X = 3U;
        vlSymsp->__Vcoverage[2515].fetch_add(1, std::memory_order_relaxed);
    } else {
        if (((IData)(vlSelf->__PVT__val_X) & (1U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = (1U & (~ (IData)(vlSelf->__PVT__br_cond_eq_X)));
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2522].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__val_X) & 
                    (2U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = vlSelf->__PVT__br_cond_eq_X;
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2521].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__val_X) & 
                    (3U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = vlSelf->__PVT__br_cond_lt_X;
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2520].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__val_X) & 
                    (4U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = vlSelf->__PVT__br_cond_ltu_X;
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2519].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__val_X) & 
                    (5U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = (1U & (~ (IData)(vlSelf->__PVT__br_cond_lt_X)));
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2518].fetch_add(1, std::memory_order_relaxed);
        } else if (((IData)(vlSelf->__PVT__val_X) & 
                    (6U == (IData)(vlSelf->__PVT__br_type_X)))) {
            vlSelf->__PVT__pc_redirect_X = (1U & (~ (IData)(vlSelf->__PVT__br_cond_ltu_X)));
            vlSelf->__PVT__pc_sel_X = 1U;
            vlSymsp->__Vcoverage[2516].fetch_add(1, std::memory_order_relaxed);
        } else {
            vlSelf->__PVT__pc_redirect_X = 0U;
            vlSelf->__PVT__pc_sel_X = 0U;
            vlSymsp->__Vcoverage[2517].fetch_add(1, std::memory_order_relaxed);
        }
        vlSymsp->__Vcoverage[2523].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2524].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_X), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_X), 0U)))) {
        vlSymsp->__Vcoverage[2321].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_X), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_X), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_X), 1U)))) {
        vlSymsp->__Vcoverage[2322].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_sel_X, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_X), 1U)));
    }
    if (((IData)(vlSelf->__PVT__pc_redirect_X) ^ (IData)(vlSelf->__Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[2318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__pc_redirect_X = vlSelf->__PVT__pc_redirect_X;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__9(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__9\n"); );
    // Body
    vlSelf->__PVT__ostall_mngr2proc_D = (((IData)(vlSelf->__PVT__val_D) 
                                          & (IData)(vlSelf->__PVT__mngr2proc_rdy_D)) 
                                         & (~ (IData)(vlSelf->__PVT__mngr2proc_val)));
    if (((IData)(vlSelf->__PVT__ostall_mngr2proc_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_mngr2proc_D))) {
        vlSymsp->__Vcoverage[2438].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_mngr2proc_D = vlSelf->__PVT__ostall_mngr2proc_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__10(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__10\n"); );
    // Body
    vlSelf->__PVT__bypass_waddr_M_rs1_D = ((((((IData)(vlSelf->__PVT__rs1_en_D) 
                                               & (IData)(vlSelf->__PVT__val_M)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_M)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs1_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                           & ((~ (IData)(vlSelf->__PVT__wb_result_sel_M)) 
                                              | (IData)(vlSelf->__PVT__dmem_respstream_val)));
    vlSelf->__PVT__bypass_waddr_M_rs2_D = ((((((IData)(vlSelf->__PVT__rs2_en_D) 
                                               & (IData)(vlSelf->__PVT__val_M)) 
                                              & (IData)(vlSelf->__PVT__rf_wen_M)) 
                                             & ((IData)(vlSelf->__PVT__inst_rs2_D) 
                                                == (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                            & (0U != (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                           & ((~ (IData)(vlSelf->__PVT__wb_result_sel_M)) 
                                              | (IData)(vlSelf->__PVT__dmem_respstream_val)));
    vlSelf->__PVT__ostall_waddr_M_rs1_D = (((((((IData)(vlSelf->__PVT__rs1_en_D) 
                                                & (IData)(vlSelf->__PVT__val_M)) 
                                               & (IData)(vlSelf->__PVT__rf_wen_M)) 
                                              & ((IData)(vlSelf->__PVT__inst_rs1_D) 
                                                 == (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                            & (1U == (IData)(vlSelf->__PVT__dmem_reqstream_type_M))) 
                                           & (~ (IData)(vlSelf->__PVT__dmem_respstream_val)));
    vlSelf->__PVT__ostall_waddr_M_rs2_D = (((((((IData)(vlSelf->__PVT__rs2_en_D) 
                                                & (IData)(vlSelf->__PVT__val_M)) 
                                               & (IData)(vlSelf->__PVT__rf_wen_M)) 
                                              & ((IData)(vlSelf->__PVT__inst_rs2_D) 
                                                 == (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__rf_waddr_M))) 
                                            & (1U == (IData)(vlSelf->__PVT__dmem_reqstream_type_M))) 
                                           & (~ (IData)(vlSelf->__PVT__dmem_respstream_val)));
    if (((IData)(vlSelf->__PVT__bypass_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[2446].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_M_rs1_D = vlSelf->__PVT__bypass_waddr_M_rs1_D;
    }
    if (vlSelf->__PVT__bypass_waddr_X_rs1_D) {
        vlSelf->__PVT__op1_byp_sel_D = 1U;
        vlSymsp->__Vcoverage[2453].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__bypass_waddr_M_rs1_D) {
        vlSelf->__PVT__op1_byp_sel_D = 2U;
        vlSymsp->__Vcoverage[2452].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__bypass_waddr_W_rs1_D) {
        vlSelf->__PVT__op1_byp_sel_D = 3U;
        vlSymsp->__Vcoverage[2450].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__op1_byp_sel_D = 0U;
        vlSymsp->__Vcoverage[2451].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2454].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__bypass_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->__Vtogcov__bypass_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[2447].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__bypass_waddr_M_rs2_D = vlSelf->__PVT__bypass_waddr_M_rs2_D;
    }
    if (vlSelf->__PVT__bypass_waddr_X_rs2_D) {
        vlSelf->__PVT__op2_byp_sel_D = 1U;
        vlSymsp->__Vcoverage[2458].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__bypass_waddr_M_rs2_D) {
        vlSelf->__PVT__op2_byp_sel_D = 2U;
        vlSymsp->__Vcoverage[2457].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__bypass_waddr_W_rs2_D) {
        vlSelf->__PVT__op2_byp_sel_D = 3U;
        vlSymsp->__Vcoverage[2455].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__op2_byp_sel_D = 0U;
        vlSymsp->__Vcoverage[2456].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2459].fetch_add(1, std::memory_order_relaxed);
    if (((IData)(vlSelf->__PVT__ostall_waddr_M_rs1_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_waddr_M_rs1_D))) {
        vlSymsp->__Vcoverage[2440].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_waddr_M_rs1_D = vlSelf->__PVT__ostall_waddr_M_rs1_D;
    }
    if (((IData)(vlSelf->__PVT__ostall_waddr_M_rs2_D) 
         ^ (IData)(vlSelf->__Vtogcov__ostall_waddr_M_rs2_D))) {
        vlSymsp->__Vcoverage[2442].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_waddr_M_rs2_D = vlSelf->__PVT__ostall_waddr_M_rs2_D;
    }
    vlSelf->__PVT__ostall_hazard_D = ((((IData)(vlSelf->__PVT__ostall_waddr_X_rs1_D) 
                                        | (IData)(vlSelf->__PVT__ostall_waddr_M_rs1_D)) 
                                       | (IData)(vlSelf->__PVT__ostall_waddr_X_rs2_D)) 
                                      | (IData)(vlSelf->__PVT__ostall_waddr_M_rs2_D));
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op1_byp_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op1_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op1_byp_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op1_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op1_byp_sel_D), 1U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_byp_sel_D), 0U)))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__op2_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__op2_byp_sel_D), 1U)))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__op2_byp_sel_D, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__op2_byp_sel_D), 1U)));
    }
    if (((IData)(vlSelf->__PVT__ostall_hazard_D) ^ (IData)(vlSelf->__Vtogcov__ostall_hazard_D))) {
        vlSymsp->__Vcoverage[2443].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_hazard_D = vlSelf->__PVT__ostall_hazard_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__11(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__11\n"); );
    // Body
    vlSelf->__PVT__ostall_M = (((IData)(vlSelf->__PVT__val_M) 
                                & (0U != (IData)(vlSelf->__PVT__dmem_reqstream_type_M))) 
                               & (~ (IData)(vlSelf->__PVT__dmem_respstream_val)));
    if (((IData)(vlSelf->__PVT__ostall_M) ^ (IData)(vlSelf->__Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[2302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_M = vlSelf->__PVT__ostall_M;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__12(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__12\n"); );
    // Body
    if (vlSelf->__PVT__pc_redirect_X) {
        vlSelf->__PVT__pc_sel_F = vlSelf->__PVT__pc_sel_X;
        vlSymsp->__Vcoverage[2325].fetch_add(1, std::memory_order_relaxed);
    } else if (vlSelf->__PVT__pc_redirect_D) {
        vlSelf->__PVT__pc_sel_F = vlSelf->__PVT__pc_sel_D;
        vlSymsp->__Vcoverage[2323].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__pc_sel_F = 0U;
        vlSymsp->__Vcoverage[2324].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2326].fetch_add(1, std::memory_order_relaxed);
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 0U)))) {
        vlSymsp->__Vcoverage[2220].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(0U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 0U)));
    }
    if ((1U & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U) 
               ^ VL_BITSEL_IIII(2, (IData)(vlSelf->__Vtogcov__pc_sel_F), 1U)))) {
        vlSymsp->__Vcoverage[2221].fetch_add(1, std::memory_order_relaxed);
        VL_ASSIGNBIT_II(1U, vlSelf->__Vtogcov__pc_sel_F, 
                        (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__pc_sel_F), 1U)));
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__13(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__13\n"); );
    // Body
    vlSelf->__PVT__ostall_D = ((IData)(vlSelf->__PVT__val_D) 
                               & (((IData)(vlSelf->__PVT__ostall_mngr2proc_D) 
                                   | (IData)(vlSelf->__PVT__ostall_hazard_D)) 
                                  | (~ (IData)(vlSelf->__PVT__imul_req_rdy_D))));
    if (((IData)(vlSelf->__PVT__ostall_D) ^ (IData)(vlSelf->__Vtogcov__ostall_D))) {
        vlSymsp->__Vcoverage[2300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_D = vlSelf->__PVT__ostall_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__14(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__14\n"); );
    // Body
    vlSelf->__PVT__stall_M = ((IData)(vlSelf->__PVT__val_M) 
                              & ((IData)(vlSelf->__PVT__ostall_M) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    if (((IData)(vlSelf->__PVT__stall_M) ^ (IData)(vlSelf->__Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[2307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_M = vlSelf->__PVT__stall_M;
    }
    vlSelf->__PVT__next_val_M = ((IData)(vlSelf->__PVT__val_M) 
                                 & (~ (IData)(vlSelf->__PVT__stall_M)));
    vlSelf->__PVT__reg_en_M = (1U & (~ (IData)(vlSelf->__PVT__stall_M)));
    vlSelf->__PVT__dmem_respstream_rdy = (((IData)(vlSelf->__PVT__val_M) 
                                           & (~ (IData)(vlSelf->__PVT__stall_M))) 
                                          & (0U != (IData)(vlSelf->__PVT__dmem_reqstream_type_M)));
    if (((IData)(vlSelf->__PVT__next_val_M) ^ (IData)(vlSelf->__Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[2583].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_M = vlSelf->__PVT__next_val_M;
    }
    if (((IData)(vlSelf->__PVT__reg_en_M) ^ (IData)(vlSelf->__Vtogcov__reg_en_M))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_M = vlSelf->__PVT__reg_en_M;
    }
    if (((IData)(vlSelf->__PVT__dmem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_respstream_rdy))) {
        vlSymsp->__Vcoverage[2214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_respstream_rdy = vlSelf->__PVT__dmem_respstream_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__15(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__15\n"); );
    // Body
    vlSelf->__PVT__stall_X = ((IData)(vlSelf->__PVT__val_X) 
                              & (((IData)(vlSelf->__PVT__ostall_X) 
                                  | (IData)(vlSelf->__PVT__ostall_M)) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    if (((IData)(vlSelf->__PVT__stall_X) ^ (IData)(vlSelf->__Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[2306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_X = vlSelf->__PVT__stall_X;
    }
    vlSelf->__PVT__next_val_X = ((IData)(vlSelf->__PVT__val_X) 
                                 & (~ (IData)(vlSelf->__PVT__stall_X)));
    if ((0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_X))) {
        vlSelf->__PVT__imul_resp_rdy_X = (1U & (~ (IData)(vlSelf->__PVT__stall_X)));
        vlSymsp->__Vcoverage[2529].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__imul_resp_rdy_X = 0U;
        vlSymsp->__Vcoverage[2530].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2531].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__reg_en_X = (1U & (~ (IData)(vlSelf->__PVT__stall_X)));
    vlSelf->__PVT__dmem_reqstream_val = (((IData)(vlSelf->__PVT__val_X) 
                                          & (~ (IData)(vlSelf->__PVT__stall_X))) 
                                         & (0U != (IData)(vlSelf->__PVT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->__PVT__next_val_X) ^ (IData)(vlSelf->__Vtogcov__next_val_X))) {
        vlSymsp->__Vcoverage[2528].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_X = vlSelf->__PVT__next_val_X;
    }
    if (((IData)(vlSelf->__PVT__imul_resp_rdy_X) ^ (IData)(vlSelf->__Vtogcov__imul_resp_rdy_X))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_resp_rdy_X = vlSelf->__PVT__imul_resp_rdy_X;
    }
    if (((IData)(vlSelf->__PVT__reg_en_X) ^ (IData)(vlSelf->__Vtogcov__reg_en_X))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_X = vlSelf->__PVT__reg_en_X;
    }
    if (((IData)(vlSelf->__PVT__dmem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__dmem_reqstream_val))) {
        vlSymsp->__Vcoverage[2211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__dmem_reqstream_val = vlSelf->__PVT__dmem_reqstream_val;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__16(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__16\n"); );
    // Body
    vlSelf->__PVT__stall_D = ((IData)(vlSelf->__PVT__val_D) 
                              & ((((IData)(vlSelf->__PVT__ostall_D) 
                                   | (IData)(vlSelf->__PVT__ostall_X)) 
                                  | (IData)(vlSelf->__PVT__ostall_M)) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    if (((IData)(vlSelf->__PVT__stall_D) ^ (IData)(vlSelf->__Vtogcov__stall_D))) {
        vlSymsp->__Vcoverage[2305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_D = vlSelf->__PVT__stall_D;
    }
    if ((0x2000033U == (0xfe00707fU & vlSelf->__PVT__inst_D))) {
        vlSelf->__PVT__imul_req_val_D = (1U & (~ (IData)(vlSelf->__PVT__stall_D)));
        vlSymsp->__Vcoverage[2464].fetch_add(1, std::memory_order_relaxed);
    } else {
        vlSelf->__PVT__imul_req_val_D = 0U;
        vlSymsp->__Vcoverage[2465].fetch_add(1, std::memory_order_relaxed);
    }
    vlSymsp->__Vcoverage[2466].fetch_add(1, std::memory_order_relaxed);
    vlSelf->__PVT__mngr2proc_rdy = (((IData)(vlSelf->__PVT__val_D) 
                                     & (~ (IData)(vlSelf->__PVT__stall_D))) 
                                    & (IData)(vlSelf->__PVT__mngr2proc_rdy_D));
    if (((IData)(vlSelf->__PVT__imul_req_val_D) ^ (IData)(vlSelf->__Vtogcov__imul_req_val_D))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imul_req_val_D = vlSelf->__PVT__imul_req_val_D;
    }
    if (((IData)(vlSelf->__PVT__mngr2proc_rdy) ^ (IData)(vlSelf->__Vtogcov__mngr2proc_rdy))) {
        vlSymsp->__Vcoverage[2216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__mngr2proc_rdy = vlSelf->__PVT__mngr2proc_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__17(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__17\n"); );
    // Body
    vlSelf->__PVT__osquash_X = (((IData)(vlSelf->__PVT__val_X) 
                                 & (~ (IData)(vlSelf->__PVT__stall_X))) 
                                & (IData)(vlSelf->__PVT__pc_redirect_X));
    if (((IData)(vlSelf->__PVT__osquash_X) ^ (IData)(vlSelf->__Vtogcov__osquash_X))) {
        vlSymsp->__Vcoverage[2310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__osquash_X = vlSelf->__PVT__osquash_X;
    }
    vlSelf->__PVT__squash_D = ((IData)(vlSelf->__PVT__val_D) 
                               & (IData)(vlSelf->__PVT__osquash_X));
    if (((IData)(vlSelf->__PVT__squash_D) ^ (IData)(vlSelf->__Vtogcov__squash_D))) {
        vlSymsp->__Vcoverage[2312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__squash_D = vlSelf->__PVT__squash_D;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__18(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__18\n"); );
    // Body
    vlSelf->__PVT__squash_F = ((IData)(vlSelf->__PVT__val_F) 
                               & ((IData)(vlSelf->__PVT__osquash_D) 
                                  | (IData)(vlSelf->__PVT__osquash_X)));
    if (((IData)(vlSelf->__PVT__squash_F) ^ (IData)(vlSelf->__Vtogcov__squash_F))) {
        vlSymsp->__Vcoverage[2311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__squash_F = vlSelf->__PVT__squash_F;
    }
    vlSelf->__PVT__imem_respstream_drop = vlSelf->__PVT__squash_F;
    if (((IData)(vlSelf->__PVT__imem_respstream_drop) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_drop))) {
        vlSymsp->__Vcoverage[2210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_drop = vlSelf->__PVT__imem_respstream_drop;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__19(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__19\n"); );
    // Body
    vlSelf->__PVT__next_val_D = (((IData)(vlSelf->__PVT__val_D) 
                                  & (~ (IData)(vlSelf->__PVT__stall_D))) 
                                 & (~ (IData)(vlSelf->__PVT__squash_D)));
    vlSelf->__PVT__reg_en_D = (1U & ((~ (IData)(vlSelf->__PVT__stall_D)) 
                                     | (IData)(vlSelf->__PVT__squash_D)));
    vlSelf->__PVT__imem_respstream_rdy = (1U & ((~ 
                                                 ((IData)(vlSelf->__PVT__val_F) 
                                                  & ((((IData)(vlSelf->__PVT__ostall_D) 
                                                       | (IData)(vlSelf->__PVT__ostall_X)) 
                                                      | (IData)(vlSelf->__PVT__ostall_M)) 
                                                     | (IData)(vlSelf->__PVT__ostall_W)))) 
                                                | (IData)(vlSelf->__PVT__squash_F)));
    if (((IData)(vlSelf->__PVT__next_val_D) ^ (IData)(vlSelf->__Vtogcov__next_val_D))) {
        vlSymsp->__Vcoverage[2463].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_D = vlSelf->__PVT__next_val_D;
    }
    if (((IData)(vlSelf->__PVT__reg_en_D) ^ (IData)(vlSelf->__Vtogcov__reg_en_D))) {
        vlSymsp->__Vcoverage[2222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_D = vlSelf->__PVT__reg_en_D;
    }
    if (((IData)(vlSelf->__PVT__imem_respstream_rdy) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_rdy))) {
        vlSymsp->__Vcoverage[2209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_rdy = vlSelf->__PVT__imem_respstream_rdy;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__20(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__20\n"); );
    // Body
    if (((IData)(vlSelf->__PVT__imem_respstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[2208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_respstream_val = vlSelf->__PVT__imem_respstream_val;
    }
    vlSelf->__PVT__ostall_F = ((IData)(vlSelf->__PVT__val_F) 
                               & (~ (IData)(vlSelf->__PVT__imem_respstream_val)));
    if (((IData)(vlSelf->__PVT__ostall_F) ^ (IData)(vlSelf->__Vtogcov__ostall_F))) {
        vlSymsp->__Vcoverage[2299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__ostall_F = vlSelf->__PVT__ostall_F;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__21(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__21\n"); );
    // Body
    vlSelf->__PVT__stall_F = ((IData)(vlSelf->__PVT__val_F) 
                              & (((((IData)(vlSelf->__PVT__ostall_F) 
                                    | (IData)(vlSelf->__PVT__ostall_D)) 
                                   | (IData)(vlSelf->__PVT__ostall_X)) 
                                  | (IData)(vlSelf->__PVT__ostall_M)) 
                                 | (IData)(vlSelf->__PVT__ostall_W)));
    if (((IData)(vlSelf->__PVT__stall_F) ^ (IData)(vlSelf->__Vtogcov__stall_F))) {
        vlSymsp->__Vcoverage[2304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__stall_F = vlSelf->__PVT__stall_F;
    }
    vlSelf->__PVT__next_val_F = (((IData)(vlSelf->__PVT__val_F) 
                                  & (~ (IData)(vlSelf->__PVT__stall_F))) 
                                 & (~ (IData)(vlSelf->__PVT__squash_F)));
    vlSelf->__PVT__reg_en_F = (1U & ((~ (IData)(vlSelf->__PVT__stall_F)) 
                                     | (IData)(vlSelf->__PVT__squash_F)));
    if (((IData)(vlSelf->__PVT__next_val_F) ^ (IData)(vlSelf->__Vtogcov__next_val_F))) {
        vlSymsp->__Vcoverage[2327].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__next_val_F = vlSelf->__PVT__next_val_F;
    }
    if (((IData)(vlSelf->__PVT__reg_en_F) ^ (IData)(vlSelf->__Vtogcov__reg_en_F))) {
        vlSymsp->__Vcoverage[2219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__reg_en_F = vlSelf->__PVT__reg_en_F;
    }
}

VL_INLINE_OPT void Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__22(Vtop_lab2_proc_ProcAltCtrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltCtrl___nba_comb__TOP__top__DUT__ctrl__22\n"); );
    // Body
    vlSelf->__PVT__imem_reqstream_val = (1U & (((~ (IData)(vlSelf->__PVT__stall_F)) 
                                                | (IData)(vlSelf->__PVT__squash_F)) 
                                               & (~ (IData)(vlSelf->__PVT__reset))));
    if (((IData)(vlSelf->__PVT__imem_reqstream_val) 
         ^ (IData)(vlSelf->__Vtogcov__imem_reqstream_val))) {
        vlSymsp->__Vcoverage[2206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->__Vtogcov__imem_reqstream_val = vlSelf->__PVT__imem_reqstream_val;
    }
}
