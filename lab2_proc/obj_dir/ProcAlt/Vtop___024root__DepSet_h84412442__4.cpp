// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Init
    CData/*0:0*/ top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0;
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 = 0;
    // Body
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg))) {
        vlSymsp->__Vcoverage[1215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_msg) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    }
    vlSelf->top__DOT__proc2mngr_msg = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                        : ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                            ? 0U : vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_W));
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M))) {
        vlSymsp->__Vcoverage[1952].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_M;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__reset)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)))) {
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X 
                = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                = vlSelf->top__DOT__DUT__DOT__inst_D;
            vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X 
                = (0x1fU & (vlSelf->top__DOT__DUT__DOT__inst_D 
                            >> 7U));
        }
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X))) {
        vlSymsp->__Vcoverage[1874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__wb_result_sel_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__wb_result_sel_X;
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg) 
         ^ (IData)(vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg))) {
        vlSymsp->__Vcoverage[428].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT__src__DOT____Vtogcov__reset_reg 
            = vlSelf->top__DOT__src__DOT__src__DOT__reset_reg;
    }
    vlSelf->top__DOT__src__DOT__src_val = (1U & ((~ (IData)(vlSelf->top__DOT__src__DOT__src__DOT__reset_reg)) 
                                                 & (~ (IData)(vlSelf->top__DOT__src_done))));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W)))) {
        vlSymsp->__Vcoverage[1248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_W 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W))) {
        vlSymsp->__Vcoverage[1716].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_W 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W;
    }
    vlSelf->top__DOT__commit_inst = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_W)) 
                                     & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_W));
    if ((1U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4746].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffeU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (1U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((2U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4747].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffdU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (2U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((4U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4748].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffffbU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (4U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((8U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
               ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4749].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffff7U & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (8U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4750].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffefU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4751].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffdfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4752].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffffbfU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffff7fU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffeffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffdffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffffbffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                   ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffefffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffdfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffffbfffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                    ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffff7fffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffeffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffdffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfffbffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                     ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffefffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x100000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffdfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x200000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4768].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xffbfffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x400000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                      ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4769].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xff7fffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x800000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4770].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfeffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x1000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4771].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfdffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x2000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4772].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xfbffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x4000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                       ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4773].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x8000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4774].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xefffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x10000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4775].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xdfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x20000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
                        ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M))) {
        vlSymsp->__Vcoverage[4776].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0xbfffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x40000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    if (((vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M 
          ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[4777].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M 
            = ((0x7fffffffU & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__read_data1_M) 
               | (0x80000000U & vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M));
    }
    vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
        = ((0x7ffc00000000ULL & vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
           | (((QData)((IData)((3U & vlSelf->top__DOT__mem__DOT__mem__DOT__memreq1_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__read_data1_M))));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D))) {
        vlSymsp->__Vcoverage[2194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_D) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_D));
    }
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_drop_rdy))) {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
            = ((IData)(vlSelf->top__DOT__reset) ? 0x1fcU
                : vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_next_F);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M))) {
        vlSymsp->__Vcoverage[1946].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_M;
    }
    if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        vlSymsp->__Vcoverage[1180].fetch_add(1, std::memory_order_relaxed);
    }
    if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
        if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[1181].fetch_add(1, std::memory_order_relaxed);
        }
        if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) {
            vlSymsp->__Vcoverage[1182].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)))) {
        vlSymsp->__Vcoverage[1241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_type_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0x3ffU & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]) 
           | (0x1fffU & (((1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))
                           ? 0U : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))
                                    ? 1U : 0U)) << 0xaU)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy))) {
        vlSymsp->__Vcoverage[3891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memreq1_rdy 
            = vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy;
    }
    vlSelf->top__DOT__dmem_reqstream_rdy = ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state)
                                             ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__state) 
                                                & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                   & (0U 
                                                      == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_delay)))
                                             : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memreq1_rdy) 
                                                & (0U 
                                                   == vlSelf->top__DOT__mem__DOT__rand_req_delay1__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
         ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val))) {
        vlSymsp->__Vcoverage[4018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_val 
            = vlSelf->top__DOT__mem__DOT__mem_memresp1_val;
    }
    vlSelf->top__DOT__dmem_respstream_val = ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__mem__DOT__rand_resp_delay1__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1116].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1117].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1118].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1119].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1120].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1121].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1122].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1123].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1124].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1125].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1126].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1127].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1128].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1129].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1130].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1131].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1132].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1133].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1134].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1135].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1136].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1137].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1138].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1139].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1140].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1141].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1142].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1143].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1144].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1145].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr))) {
        vlSymsp->__Vcoverage[1146].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1147].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg_addr) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X));
    }
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
        = (IData)((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
        = ((vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
            << 2U) | (IData)(((QData)((IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg_data)) 
                              >> 0x20U)));
    vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0x1c00U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]) 
           | (0x1fffU & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X 
                         >> 0x1eU)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1918].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1919].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1920].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1923].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1924].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1925].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1926].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1927].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1928].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1929].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1930].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1931].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1932].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1933].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1934].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1935].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1936].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1937].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1938].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1939].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1940].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1941].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M))) {
        vlSymsp->__Vcoverage[1942].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1943].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_M));
    }
    if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
        if (vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) {
            vlSymsp->__Vcoverage[1546].fetch_add(1, std::memory_order_relaxed);
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
            vlSymsp->__Vcoverage[1547].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)))) {
        vlSymsp->__Vcoverage[1545].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__bypass_mux_sel))) {
        vlSymsp->__Vcoverage[1294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__bypass_mux_sel 
            = vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty;
    }
    vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
            ? 0U : ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__empty)
                     ? 2U : (3U & (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                    > (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr))
                                    ? ((IData)(2U) 
                                       - ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr) 
                                          - (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr)))
                                    : (((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                        > (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        ? ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__deq_ptr) 
                                           - (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue__DOT__genblk1__DOT__ctrl__DOT__enq_ptr))
                                        : 0U)))));
    if ((1U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffeU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (1U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((2U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffdU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (2U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((4U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffffbU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (4U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((8U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
               ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffff7U & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (8U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffefU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffdfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffffbfU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                  ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffff7fU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffeffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffdffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffffbffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                   ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffff7ffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffefffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffdfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffffbfffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                    ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffff7fffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffeffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffdffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfffbffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x80000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                     ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfff7ffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x100000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffefffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x100000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x200000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffdfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x200000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x400000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xffbfffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x400000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x800000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                      ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xff7fffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x800000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x1000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfeffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x1000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x2000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfdffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x2000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x4000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xfbffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x4000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x8000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                       ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xf7ffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x8000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x10000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xefffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x10000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x20000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xdfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x20000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if ((0x40000000U & (vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
                        ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr))) {
        vlSymsp->__Vcoverage[895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0xbfffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x40000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr 
          ^ vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr 
            = ((0x7fffffffU & vlSelf->top__DOT__sink__DOT__sink__DOT____Vtogcov__m_curr) 
               | (0x80000000U & vlSelf->top__DOT__sink__DOT__sink__DOT__m_curr));
    }
    if (((IData)(vlSelf->top__DOT__imem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[149].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_reqstream_rdy 
            = vlSelf->top__DOT__imem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__imem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_val))) {
        vlSymsp->__Vcoverage[197].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_val 
            = vlSelf->top__DOT__imem_respstream_val;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M)))) {
        vlSymsp->__Vcoverage[4824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp0_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp0_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp0_msg_pack__DOT__resp));
    if ((1U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[37].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (1U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((2U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[38].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (2U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((4U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[39].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (4U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((8U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[40].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (8U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[41].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[42].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[43].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x80U & (vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[44].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x100U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[45].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x100U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x200U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[46].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x200U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x400U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[47].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x400U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x800U & (vlSelf->top__DOT__proc2mngr_msg 
                   ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[48].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x800U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x1000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[49].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x1000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x2000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[50].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x2000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x4000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[51].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x4000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x8000U & (vlSelf->top__DOT__proc2mngr_msg 
                    ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[52].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x8000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[53].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[54].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[55].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x80000U & (vlSelf->top__DOT__proc2mngr_msg 
                     ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[56].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x100000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[57].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x100000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x200000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[58].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x200000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x400000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[59].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x400000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x800000U & (vlSelf->top__DOT__proc2mngr_msg 
                      ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[60].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x800000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x1000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[61].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x1000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x2000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[62].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x2000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x4000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[63].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x4000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x8000000U & (vlSelf->top__DOT__proc2mngr_msg 
                       ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[64].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x8000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x10000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[65].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x10000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x20000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[66].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x20000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if ((0x40000000U & (vlSelf->top__DOT__proc2mngr_msg 
                        ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg))) {
        vlSymsp->__Vcoverage[67].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x40000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if (((vlSelf->top__DOT__proc2mngr_msg ^ vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[68].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_msg 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__proc2mngr_msg) 
               | (0x80000000U & vlSelf->top__DOT__proc2mngr_msg));
    }
    if (((IData)(vlSelf->top__DOT__src__DOT__src_val) 
         ^ (IData)(vlSelf->top__DOT__src__DOT____Vtogcov__src_val))) {
        vlSymsp->__Vcoverage[380].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__src__DOT____Vtogcov__src_val 
            = vlSelf->top__DOT__src__DOT__src_val;
    }
    vlSelf->top__DOT__mngr2proc_val = ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state)
                                        ? ((IData)(vlSelf->top__DOT__src__DOT__msg_delay__DOT__state) 
                                           & ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                              & (0U 
                                                 == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_delay)))
                                        : ((IData)(vlSelf->top__DOT__src__DOT__src_val) 
                                           & (0U == vlSelf->top__DOT__src__DOT__msg_delay__DOT__rand_num)));
    if (((IData)(vlSelf->top__DOT__commit_inst) ^ (IData)(vlSelf->top__DOT____Vtogcov__commit_inst))) {
        vlSymsp->__Vcoverage[359].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__commit_inst = vlSelf->top__DOT__commit_inst;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val = 
        ((IData)(vlSelf->top__DOT__commit_inst) & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_W));
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M)))) {
        vlSymsp->__Vcoverage[4871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4874].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4883].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4884].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4885].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4886].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4887].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4888].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4889].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4891].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4892].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4893].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4894].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4895].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4896].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4897].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4898].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4899].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4900].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4901].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4902].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4903].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4904].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4905].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4906].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4908].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4909].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4910].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4911].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4912].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4913].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4914].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4915].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4916].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                  ^ vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4917].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT__mem__DOT____Vtogcov__memresp1_msg_M) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    vlSelf->top__DOT__mem__DOT__mem_memresp1_msg = 
        ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
          ? vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__dpath__DOT__qstore
          : ((IData)(vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_queue__DOT__genblk1__DOT__ctrl__DOT__full)
              ? 0ULL : vlSelf->top__DOT__mem__DOT__mem__DOT__memresp1_msg_pack__DOT__resp));
    if (((IData)(vlSelf->top__DOT__dmem_reqstream_rdy) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy))) {
        vlSymsp->__Vcoverage[277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_rdy 
            = vlSelf->top__DOT__dmem_reqstream_rdy;
    }
    if (((IData)(vlSelf->top__DOT__dmem_respstream_val) 
         ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_val))) {
        vlSymsp->__Vcoverage[325].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_val 
            = vlSelf->top__DOT__dmem_respstream_val;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h16962bea__0 
        = ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hbdb8fb34__0 
        = (1U & ((~ (IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)) 
                 | (IData)(vlSelf->top__DOT__dmem_respstream_val)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & ((~ (IData)(vlSelf->top__DOT__dmem_respstream_val)) 
              & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M))));
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]))) {
        vlSymsp->__Vcoverage[1080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]))) {
        vlSymsp->__Vcoverage[1082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
               ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                  ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                   ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                    ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1100].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1101].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                     ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1102].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1103].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1104].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1105].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                      ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1106].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1107].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1108].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1109].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                       ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1110].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1111].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1112].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
                        ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]))) {
        vlSymsp->__Vcoverage[1113].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U] 
          ^ vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1114].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT____Vtogcov__dmem_reqstream_enq_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U]));
    }
    if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
    } else if (vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] = 0U;
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] = 0U;
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] = 0U;
    } else {
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[0U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[1U];
        vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
            = vlSelf->top__DOT__DUT__DOT__dmem_reqstream_enq_msg[2U];
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[921].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)))) {
        vlSymsp->__Vcoverage[922].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__imem_queue_num_free_entries)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_queue_num_free_entries)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1947].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1948].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1949].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1950].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)))) {
        vlSymsp->__Vcoverage[1951].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_M)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X))) {
        vlSymsp->__Vcoverage[1882].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stats_en_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stats_en_wen_X;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg)))) {
        vlSymsp->__Vcoverage[3971].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[3972].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[3973].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[3974].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[3975].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[3976].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[3977].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[3978].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[3979].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[3980].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[3981].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[3982].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[3983].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[3984].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[3985].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[3986].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[3987].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[3988].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[3989].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[3990].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[3991].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[3992].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[3993].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[3994].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[3995].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[3996].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[3997].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[3998].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[3999].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4000].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4001].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4002].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4003].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4004].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp0_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X))) {
        vlSymsp->__Vcoverage[1881].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__proc2mngr_val_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__proc2mngr_val_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val))) {
        vlSymsp->__Vcoverage[1217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__proc2mngr_enq_val 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val;
    }
    vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_enq_val));
    if (vlSelf->top__DOT__dmem_respstream_val) {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x22U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len 
            = (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x20U)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ 
            = (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                             >> 0x2cU)));
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque 
            = (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                >> 0x24U)));
        vlSelf->top__DOT__dmem_respstream_msg = vlSelf->top__DOT__mem__DOT__mem_memresp1_msg;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
            = (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg);
    } else {
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_ = 0U;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque = 0U;
        vlSelf->top__DOT__dmem_respstream_msg = 0ULL;
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data = 0U;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg) 
               ^ (IData)(vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg)))) {
        vlSymsp->__Vcoverage[4020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp1_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[4021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[4022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[4023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[4024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[4025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[4026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[4027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[4028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[4029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[4030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[4031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[4032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[4033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[4034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[4035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[4036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[4037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[4038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[4039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[4040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[4041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[4042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[4043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[4044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[4045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[4046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[4047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[4048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[4049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[4050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[4051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[4052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[4053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[4054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[4055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[4056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[4057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[4058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[4059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[4060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[4061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[4062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[4063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[4064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[4065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                  ^ vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[4066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT__mem__DOT____Vtogcov__mem_memresp1_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp1_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((2U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2069].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (2U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((4U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2070].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (4U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((8U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2071].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (8U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2072].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2073].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2074].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2075].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2076].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2077].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2078].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2079].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2080].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2081].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2082].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2083].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2084].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2085].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2086].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x80000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2087].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x100000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2088].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x100000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x200000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2089].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x200000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x400000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2090].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x400000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x800000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2091].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x800000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x1000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2092].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x1000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x2000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2093].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x2000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x4000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2094].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x4000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x8000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2095].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x8000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x10000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2096].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x10000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x20000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2097].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x20000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((0x40000000U & (((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F))) {
        vlSymsp->__Vcoverage[2098].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x40000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if (((((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F) 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2099].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_plus4_F) 
               | (0x80000000U & ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F)));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2037].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2038].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2039].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2040].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2041].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2042].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2043].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2044].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2045].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2046].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2047].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2048].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2049].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2050].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2051].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2052].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2053].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2054].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2055].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2056].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2057].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2058].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2059].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2060].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2061].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2062].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2063].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2064].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2065].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2066].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F))) {
        vlSymsp->__Vcoverage[2067].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2068].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__pc_F) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_F));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X))) {
        vlSymsp->__Vcoverage[1875].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_wen_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_wen_X;
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M))) {
        vlSymsp->__Vcoverage[1710].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M;
    }
    top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_M) 
           | (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_W));
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[199].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1bffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[200].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x17ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[201].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0xfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[202].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[203].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[204].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[205].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[206].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1fbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[207].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1f7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[208].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1effU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[209].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1dffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[210].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[211].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[212].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[213].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[214].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[215].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[216].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[217].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[218].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[219].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[220].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[221].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[222].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[223].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[224].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[225].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[226].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[227].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]))) {
        vlSymsp->__Vcoverage[241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U] 
            = ((0x1ffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[2U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[2U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]))) {
        vlSymsp->__Vcoverage[243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[1U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[1U]));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffeU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (1U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffdU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (2U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffffbU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (4U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
               ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffff7U & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (8U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffefU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffdfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffffbfU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffff7fU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffeffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffdffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffffbffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                   ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffff7ffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffefffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffdfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffffbfffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                    ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffff7fffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffeffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffdffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfffbffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                     ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfff7ffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffefffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffdfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xffbfffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                      ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xff7fffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfeffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfdffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xfbffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                       ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xf7ffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xefffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xdfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
                        ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]))) {
        vlSymsp->__Vcoverage[274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0xbfffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if (((vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U] 
          ^ vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U] 
            = ((0x7fffffffU & vlSelf->top__DOT____Vtogcov__dmem_reqstream_msg[0U]) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT____Vcellout__dmem_queue__deq_msg[0U]));
    }
    if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1890].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X = 3U;
    } else {
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X 
            = (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                ? 1U : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                         & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                         ? 1U : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                  & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                  ? 1U : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                           & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                           ? 1U : (
                                                   ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                                    & (5U 
                                                       == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                                    ? 1U
                                                    : 
                                                   (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                                     & (6U 
                                                        == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                                     ? 1U
                                                     : 0U))))));
    }
    if ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1898].fetch_add(1, std::memory_order_relaxed);
        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                      & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                          & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                     & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                    vlSymsp->__Vcoverage[1895].fetch_add(1, std::memory_order_relaxed);
                }
                if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                              & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                         & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                        vlSymsp->__Vcoverage[1894].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                  & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                        if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                      & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                 & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                                vlSymsp->__Vcoverage[1891].fetch_add(1, std::memory_order_relaxed);
                            }
                            if ((1U & (~ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                          & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))))) {
                                vlSymsp->__Vcoverage[1892].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                             & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                            vlSymsp->__Vcoverage[1893].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
            }
            if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                 & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
                vlSymsp->__Vcoverage[1896].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
             & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))) {
            vlSymsp->__Vcoverage[1897].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1900].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1904].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1907].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ex_result_sel_X = 0U;
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X 
            = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
               & (~ (IData)(vlSelf->top__DOT__DUT__DOT__imul_req_rdy_D)));
    } else {
        vlSelf->top__DOT__DUT__DOT__ex_result_sel_X 
            = ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))
                ? 1U : ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))
                         ? 1U : 2U));
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X 
            = (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                & (0U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X))) 
               & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    }
    if ((0x2000033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
        vlSymsp->__Vcoverage[1901].fetch_add(1, std::memory_order_relaxed);
        vlSymsp->__Vcoverage[1905].fetch_add(1, std::memory_order_relaxed);
        if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
            vlSymsp->__Vcoverage[1908].fetch_add(1, std::memory_order_relaxed);
        }
        if ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
            if ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
                vlSymsp->__Vcoverage[1909].fetch_add(1, std::memory_order_relaxed);
            }
            if ((0x67U != (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X))) {
                vlSymsp->__Vcoverage[1910].fetch_add(1, std::memory_order_relaxed);
            }
        }
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
               ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1847].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1848].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                  ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1849].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1850].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1851].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1852].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                   ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1853].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1854].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1855].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1856].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                    ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1857].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1858].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1859].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1860].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                     ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1861].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1862].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1863].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1864].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                      ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1865].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1866].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1867].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1868].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                       ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1869].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1870].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1871].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
                        ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X))) {
        vlSymsp->__Vcoverage[1872].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X 
          ^ vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[1873].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__inst_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X 
        = (1U & ((0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X)) 
                 | (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                     & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                     ? (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X))
                     : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                         & (2U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                         ? (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_eq_X)
                         : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                             & (3U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                             ? (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X)
                             : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                 & (4U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                 ? (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X)
                                 : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                     & (5U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X)))
                                     ? (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_lt_X))
                                     : (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
                                         & (6U == (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__br_type_X))) 
                                        & (~ (IData)(vlSelf->top__DOT__DUT__DOT__br_cond_ltu_X))))))))));
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test 
        = ((IData)(vlSelf->top__DOT__imem_respstream_val)
            ? (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x22U))) : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3706].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3707].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__test)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len 
        = ((IData)(vlSelf->top__DOT__imem_respstream_val)
            ? (3U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x20U))) : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3708].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__len)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_ 
        = ((IData)(vlSelf->top__DOT__imem_respstream_val)
            ? (7U & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                             >> 0x2cU))) : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3695].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3696].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3697].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__type_)));
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque 
        = ((IData)(vlSelf->top__DOT__imem_respstream_val)
            ? (0xffU & (IData)((vlSelf->top__DOT__mem__DOT__mem_memresp0_msg 
                                >> 0x24U))) : 0U);
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3698].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3699].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3700].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3701].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3702].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3703].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3704].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3705].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__opaque)));
    }
    vlSelf->top__DOT__imem_respstream_msg = ((IData)(vlSelf->top__DOT__imem_respstream_val)
                                              ? vlSelf->top__DOT__mem__DOT__mem_memresp0_msg
                                              : 0ULL);
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[150].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[151].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__imem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[152].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[153].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[154].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[155].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[156].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[157].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[158].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[159].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[160].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[161].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[162].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[163].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[164].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__imem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__imem_respstream_msg)))) {
        vlSymsp->__Vcoverage[165].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__imem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[166].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[167].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[168].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[169].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[170].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[171].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[172].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[173].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[174].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[175].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[176].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[177].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[178].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[179].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[180].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[181].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[182].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[183].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[184].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[185].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[186].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[187].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[188].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[189].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[190].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[191].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[192].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[193].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[194].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[195].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__imem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[196].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__imem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__imem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__imem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq))) {
        vlSymsp->__Vcoverage[1660].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT____Vtogcov__do_enq 
            = vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    }
    vlSelf->top__DOT__proc2mngr_val = ((IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
                                       | (IData)(vlSelf->top__DOT__DUT__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3764].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)))) {
        vlSymsp->__Vcoverage[3765].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__test)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__test)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3766].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)))) {
        vlSymsp->__Vcoverage[3767].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__len)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__len)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3753].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((6U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3754].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((5U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)))) {
        vlSymsp->__Vcoverage[3755].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_ 
            = ((3U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__type_)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__type_)));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3756].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfeU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3757].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfdU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3758].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xfbU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3759].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xf7U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3760].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xefU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x20U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3761].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xdfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x20U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x40U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3762].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0xbfU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x40U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((0x80U & ((IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)))) {
        vlSymsp->__Vcoverage[3763].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque 
            = ((0x7fU & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT____Vtogcov__opaque)) 
               | (0x80U & (IData)(vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__opaque)));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2cU))))) {
        vlSymsp->__Vcoverage[278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x6fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2dU))))) {
        vlSymsp->__Vcoverage[279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x5fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((IData)(((vlSelf->top__DOT__dmem_respstream_msg 
                  ^ vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
                 >> 0x2eU))) {
        vlSymsp->__Vcoverage[280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x3fffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x24U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x24U))))) {
        vlSymsp->__Vcoverage[281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fefffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x25U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x25U))))) {
        vlSymsp->__Vcoverage[282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fdfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x26U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x26U))))) {
        vlSymsp->__Vcoverage[283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fbfffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x27U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x27U))))) {
        vlSymsp->__Vcoverage[284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7f7fffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x28U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x28U))))) {
        vlSymsp->__Vcoverage[285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7effffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x29U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x29U))))) {
        vlSymsp->__Vcoverage[286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7dffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2aU))))) {
        vlSymsp->__Vcoverage[287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7bffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x2bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x2bU))))) {
        vlSymsp->__Vcoverage[288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x77ffffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x22U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x22U))))) {
        vlSymsp->__Vcoverage[289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffbffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x23U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x23U))))) {
        vlSymsp->__Vcoverage[290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ff7ffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x20U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x20U))))) {
        vlSymsp->__Vcoverage[291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffeffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x21U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x21U))))) {
        vlSymsp->__Vcoverage[292].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffdffffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__dmem_respstream_msg) 
               ^ (IData)(vlSelf->top__DOT____Vtogcov__dmem_respstream_msg)))) {
        vlSymsp->__Vcoverage[293].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffeULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | (IData)((IData)((1U & (IData)(vlSelf->top__DOT__dmem_respstream_msg)))));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 1U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 1U))))) {
        vlSymsp->__Vcoverage[294].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffdULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 2U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 2U))))) {
        vlSymsp->__Vcoverage[295].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffffbULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 3U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 3U))))) {
        vlSymsp->__Vcoverage[296].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffff7ULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 4U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 4U))))) {
        vlSymsp->__Vcoverage[297].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffefULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 5U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 5U))))) {
        vlSymsp->__Vcoverage[298].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffdfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 6U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 6U))))) {
        vlSymsp->__Vcoverage[299].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffffbfULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 7U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 7U))))) {
        vlSymsp->__Vcoverage[300].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffff7fULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 8U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 8U))))) {
        vlSymsp->__Vcoverage[301].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffeffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 9U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                           >> 9U))))) {
        vlSymsp->__Vcoverage[302].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffdffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xaU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xaU))))) {
        vlSymsp->__Vcoverage[303].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffffbffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xbU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xbU))))) {
        vlSymsp->__Vcoverage[304].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffff7ffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xcU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xcU))))) {
        vlSymsp->__Vcoverage[305].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffefffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xdU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xdU))))) {
        vlSymsp->__Vcoverage[306].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffdfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xeU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xeU))))) {
        vlSymsp->__Vcoverage[307].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffffbfffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0xfU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                             >> 0xfU))))) {
        vlSymsp->__Vcoverage[308].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffff7fffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x10U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x10U))))) {
        vlSymsp->__Vcoverage[309].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffeffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x11U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x11U))))) {
        vlSymsp->__Vcoverage[310].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffdffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x12U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x12U))))) {
        vlSymsp->__Vcoverage[311].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffffbffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x13U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x13U))))) {
        vlSymsp->__Vcoverage[312].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffff7ffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x14U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x14U))))) {
        vlSymsp->__Vcoverage[313].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffefffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x15U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x15U))))) {
        vlSymsp->__Vcoverage[314].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffdfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x16U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x16U))))) {
        vlSymsp->__Vcoverage[315].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffffbfffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x17U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x17U))))) {
        vlSymsp->__Vcoverage[316].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffff7fffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x18U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x18U))))) {
        vlSymsp->__Vcoverage[317].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffeffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x19U)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x19U))))) {
        vlSymsp->__Vcoverage[318].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffdffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1aU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1aU))))) {
        vlSymsp->__Vcoverage[319].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffffbffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1bU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1bU))))) {
        vlSymsp->__Vcoverage[320].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7ffff7ffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1cU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1cU))))) {
        vlSymsp->__Vcoverage[321].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffefffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1dU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1dU))))) {
        vlSymsp->__Vcoverage[322].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffdfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1eU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1eU))))) {
        vlSymsp->__Vcoverage[323].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fffbfffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->top__DOT__dmem_respstream_msg 
                        >> 0x1fU)) ^ (IData)((vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
                                              >> 0x1fU))))) {
        vlSymsp->__Vcoverage[324].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__dmem_respstream_msg 
            = ((0x7fff7fffffffULL & vlSelf->top__DOT____Vtogcov__dmem_respstream_msg) 
               | ((QData)((IData)((1U & (IData)((vlSelf->top__DOT__dmem_respstream_msg 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2005].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2006].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2007].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2008].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2009].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2010].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2011].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2012].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2013].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2014].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2015].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2016].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2017].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2018].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2019].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2020].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2021].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2022].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2023].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2024].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2025].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2026].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2027].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2028].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2029].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2030].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2031].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2032].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2033].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2034].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data))) {
        vlSymsp->__Vcoverage[2035].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2036].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__dmem_respstream_msg_data) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data));
    }
    vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
            ? ((IData)(vlSelf->top__DOT__DUT__DOT__wb_result_sel_M)
                ? vlSelf->top__DOT__DUT__DOT__dmem_respstream_trace__DOT__data
                : 0U) : vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_M);
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M) 
           & (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[1728].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)))) {
        vlSymsp->__Vcoverage[1729].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_sel_X)));
    }
    if ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        if ((1U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            if ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3247].fetch_add(1, std::memory_order_relaxed);
            }
            if ((2U != (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
                vlSymsp->__Vcoverage[3248].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
            vlSymsp->__Vcoverage[3246].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((0U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))) {
        vlSymsp->__Vcoverage[3245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
            = vlSelf->top__DOT__DUT__DOT__dpath__DOT__ostream_msg;
    } else {
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
            = ((1U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                ? ((IData)(4U) + vlSelf->top__DOT__DUT__DOT__dpath__DOT__pc_X)
                : ((2U == (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X))
                    ? vlSelf->top__DOT__DUT__DOT__dpath__DOT__alu_result_X
                    : 0U));
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((2U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)))) {
        vlSymsp->__Vcoverage[1239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X 
            = ((1U & (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__ex_result_sel_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ex_result_sel_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X))) {
        vlSymsp->__Vcoverage[1709].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__ostall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6bfbc66e__0 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__ostall_X) 
           | (IData)(top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_hb97078a9__0));
    if (vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) {
        vlSymsp->__Vcoverage[1732].fetch_add(1, std::memory_order_relaxed);
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X))) {
        vlSymsp->__Vcoverage[1725].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__pc_redirect_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__pc_redirect_X;
    }
    if ((1U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1876].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1eU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (1U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((2U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1877].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1dU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (2U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((4U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1878].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x1bU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (4U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((8U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1879].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0x17U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (8U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    if ((0x10U & ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X) 
                  ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)))) {
        vlSymsp->__Vcoverage[1880].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X 
            = ((0xfU & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__rf_waddr_X)) 
               | (0x10U & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_ha865daa3__0 
        = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U == (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_ha2ba3be3__0 
        = ((0U != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__rf_waddr_X)) 
           & (1U != (IData)(vlSelf->top__DOT__DUT__DOT__dmem_reqstream_type_X)));
    if (((IData)(vlSelf->top__DOT__reset) | (IData)(vlSelf->top__DOT__DUT__DOT__reg_en_D))) {
        vlSelf->top__DOT__DUT__DOT__inst_D = ((IData)(vlSelf->top__DOT__reset)
                                               ? 0U
                                               : vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data);
    }
    vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
        = ((IData)(vlSelf->top__DOT__imem_respstream_val)
            ? (IData)(vlSelf->top__DOT__mem__DOT__mem_memresp0_msg)
            : 0U);
    if (((IData)(vlSelf->top__DOT__proc2mngr_val) ^ (IData)(vlSelf->top__DOT____Vtogcov__proc2mngr_val))) {
        vlSymsp->__Vcoverage[69].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT____Vtogcov__proc2mngr_val 
            = vlSelf->top__DOT__proc2mngr_val;
    }
    vlSelf->top__DOT__sink__DOT__sink_val = ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state)
                                              ? ((IData)(vlSelf->top__DOT__sink__DOT__msg_delay__DOT__state) 
                                                 & ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                    & (0U 
                                                       == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_delay)))
                                              : ((IData)(vlSelf->top__DOT__proc2mngr_val) 
                                                 & (0U 
                                                    == vlSelf->top__DOT__sink__DOT__msg_delay__DOT__rand_num)));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2260].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2261].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2262].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2263].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2264].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2265].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2266].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2267].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2268].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2269].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2270].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2271].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2272].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2273].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2274].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2275].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2276].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2277].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2278].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2279].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2280].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2281].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2282].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2283].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2284].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2285].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2286].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2287].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2288].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2289].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M))) {
        vlSymsp->__Vcoverage[2290].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2291].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_M) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__wb_result_M));
    }
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M)))) {
        vlSymsp->__Vcoverage[1246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_M 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M))) {
        vlSymsp->__Vcoverage[1715].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M;
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_M)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_M));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2228].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (1U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2229].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (2U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2230].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (4U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2231].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (8U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2232].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2234].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2235].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2236].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2237].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2238].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2239].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2240].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2241].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2242].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2243].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2244].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2245].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2246].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2247].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2248].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2249].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2250].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2251].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2252].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2253].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2254].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2255].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2256].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2257].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X))) {
        vlSymsp->__Vcoverage[2258].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    if (((vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2259].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT____Vtogcov__bypass_from_X) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__ex_result_X));
    }
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____VdfgTmp_h6bfbc66e__0));
    if (((IData)(vlSelf->top__DOT__sink__DOT__sink_val) 
         ^ (IData)(vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val))) {
        vlSymsp->__Vcoverage[629].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__sink__DOT____Vtogcov__sink_val 
            = vlSelf->top__DOT__sink__DOT__sink_val;
    }
    vlSelf->top__DOT__sink__DOT__sink_msg = ((IData)(vlSelf->top__DOT__sink__DOT__sink_val)
                                              ? vlSelf->top__DOT__proc2mngr_msg
                                              : 0U);
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M))) {
        vlSymsp->__Vcoverage[1958].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__next_val_M 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M;
    }
    vlSelf->top__DOT__dmem_respstream_rdy = ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_M) 
                                             & (0U 
                                                != (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    if ((1U ^ ((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
               ^ (IData)(vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X)))) {
        vlSymsp->__Vcoverage[1233].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT____Vtogcov__reg_en_X 
            = (1U & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)));
    }
    if (((IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X) 
         ^ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X))) {
        vlSymsp->__Vcoverage[1714].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__ctrl__DOT____Vtogcov__stall_X 
            = vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X;
    }
    vlSelf->top__DOT__DUT__DOT__imul_resp_rdy_X = (
                                                   (0x2000033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__DUT__DOT__ctrl__DOT__inst_X)) 
                                                   & (~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)));
    vlSelf->top__DOT__DUT__DOT__ctrl__DOT__next_val_X 
        = ((~ (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__stall_X)) 
           & (IData)(vlSelf->top__DOT__DUT__DOT__ctrl__DOT__val_X));
    if ((1U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2815].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffeU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (1U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((2U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2816].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffdU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (2U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((4U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2817].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffffbU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (4U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((8U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
               ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2818].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffff7U & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (8U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2819].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffefU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2820].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffdfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2821].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffffbfU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                  ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2822].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffff7fU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2823].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffeffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2824].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffdffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2825].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffffbffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                   ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2826].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffff7ffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2827].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffefffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2828].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffdfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2829].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffffbfffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                    ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2830].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffff7fffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2831].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffeffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2832].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffdffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2833].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfffbffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x80000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                     ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2834].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfff7ffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x100000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2835].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffefffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x100000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x200000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2836].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffdfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x200000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x400000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2837].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xffbfffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x400000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x800000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                      ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2838].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xff7fffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x800000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x1000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2839].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfeffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x1000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x2000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2840].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfdffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x2000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x4000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2841].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xfbffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x4000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x8000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                       ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2842].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xf7ffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x8000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x10000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2843].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xefffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x10000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x20000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2844].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xdfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x20000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x40000000U & (vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
                        ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d))) {
        vlSymsp->__Vcoverage[2845].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0xbfffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x40000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if (((vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data 
          ^ vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
         >> 0x1fU)) {
        vlSymsp->__Vcoverage[2846].fetch_add(1, std::memory_order_relaxed);
        vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d 
            = ((0x7fffffffU & vlSelf->top__DOT__DUT__DOT__dpath__DOT__inst_D_reg__DOT____Vtogcov__d) 
               | (0x80000000U & vlSelf->top__DOT__DUT__DOT__imem_respstream_trace__DOT__data));
    }
    if ((0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1735].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x6fU != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1736].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1738].fetch_add(1, std::memory_order_relaxed);
    }
    if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
        vlSymsp->__Vcoverage[1739].fetch_add(1, std::memory_order_relaxed);
    }
    if (((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
               | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
            | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
           | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
        if ((0x13U != vlSelf->top__DOT__DUT__DOT__inst_D)) {
            if ((0x33U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x2003U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x1063U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2073U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x1073U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x40000033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1771].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x40000033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1772].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x1073U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1770].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1769].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1768].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1767].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1766].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D)) {
            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
            vlSymsp->__Vcoverage[1765].fetch_add(1, std::memory_order_relaxed);
        }
    }
    if ((1U & (~ ((((((((0x13U == vlSelf->top__DOT__DUT__DOT__inst_D) 
                        | (0x33U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x2003U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x2073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x1073U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x40000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x2000033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
        if (((((((((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                   | (0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x2033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                | (0x3033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
               | (0x40005033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
              | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
             | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
            if ((0x7033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                if ((0x6033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x4033U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x2033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1776].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        }
                        if ((0x2033U != (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x3033U != (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x40005033U != 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x5033U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1779].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    }
                                    if ((0x5033U != 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1780].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x40005033U == 
                                     (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1778].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x3033U == (0xfe00707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1777].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                    }
                    if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1775].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1774].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                }
            }
            if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                vlSymsp->__Vcoverage[1773].fetch_add(1, std::memory_order_relaxed);
                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
            }
        }
        if ((1U & (~ ((((((((0x7033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                            | (0x6033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x4033U == (0xfe00707fU 
                                          & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x2033U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x3033U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x40005033U == (0xfe00707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x5033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x1033U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
            if ((1U & (~ ((((((((0x13U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                | (0x6013U == (0x707fU 
                                               & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x7013U == (0x707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x4013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                             | (0x2013U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                            | (0x3013U == (0x707fU 
                                           & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                           | (0x40005013U == (0xfe00707fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x5013U == (0xfe00707fU 
                                         & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                if (((((((((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                           | (0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                          | (0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                        | (0x6fU == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                       | (0x67U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                    if ((0x1013U != (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x37U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x17U != (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1792].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                }
                                if ((0x2023U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x6fU != (0x7fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x67U 
                                             != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            if ((0x63U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[1796].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                            }
                                            if ((0x63U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                                vlSymsp->__Vcoverage[1795].fetch_add(1, std::memory_order_relaxed);
                                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                            }
                                        }
                                        if ((0x67U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1794].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1793].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                            }
                            if ((0x17U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1791].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x37U == (0x7fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1790].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                    if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1789].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
                if ((1U & (~ ((((((((0x1013U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                  | (0x2023U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                 | (0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                                | (0x67U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                               | (0x63U == (0x707fU 
                                            & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                              | (0x4063U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D)))))) {
                    if ((0x6063U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1797].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                }
            }
            if (((((((((0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D)) 
                       | (0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                      | (0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                     | (0x4013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                    | (0x2013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                   | (0x3013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                  | (0x40005013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) 
                 | (0x5013U == (0xfe00707fU & vlSelf->top__DOT__DUT__DOT__inst_D)))) {
                if ((0x13U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    if ((0x6013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        vlSymsp->__Vcoverage[1782].fetch_add(1, std::memory_order_relaxed);
                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                    }
                    if ((0x6013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                        if ((0x7013U != (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            if ((0x4013U != (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                if ((0x2013U != (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    if ((0x3013U != 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        if ((0x40005013U 
                                             != (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1788].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                        }
                                        if ((0x40005013U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                            vlSymsp->__Vcoverage[1787].fetch_add(1, std::memory_order_relaxed);
                                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                        }
                                    }
                                    if ((0x3013U == 
                                         (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                        vlSymsp->__Vcoverage[1786].fetch_add(1, std::memory_order_relaxed);
                                        vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                    }
                                }
                                if ((0x2013U == (0x707fU 
                                                 & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                    vlSymsp->__Vcoverage[1785].fetch_add(1, std::memory_order_relaxed);
                                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                                }
                            }
                            if ((0x4013U == (0x707fU 
                                             & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                                vlSymsp->__Vcoverage[1784].fetch_add(1, std::memory_order_relaxed);
                                vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                            }
                        }
                        if ((0x7013U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                            vlSymsp->__Vcoverage[1783].fetch_add(1, std::memory_order_relaxed);
                            vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                        }
                    }
                }
                if ((0x13U == (0x707fU & vlSelf->top__DOT__DUT__DOT__inst_D))) {
                    vlSymsp->__Vcoverage[1781].fetch_add(1, std::memory_order_relaxed);
                    vlSymsp->__Vcoverage[1764].fetch_add(1, std::memory_order_relaxed);
                }
            }
        }
    }
}
